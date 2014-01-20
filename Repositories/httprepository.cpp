#include "httprepository.h"

HttpRepository::HttpRepository()
{
    m_network = new QNetworkAccessManager();
}

HttpRepository::~HttpRepository()
{
    delete m_network;
}

void HttpRepository::CheckUserLogin(QString emailAddress, QString password)
{
    LoginDetails loginDetails(emailAddress, password);
    QByteArray byteArray;
    QDataStream out(&byteArray, QIODevice::WriteOnly);
    out << loginDetails;
    QDomDocument doc;
    doc.setContent(byteArray);
}

void HttpRepository::Post(QString query, QUrl url)
{
    QNetworkRequest request;
    request.setHeader(QNetworkRequest::ContentTypeHeader, "text/xml");
    request.setUrl(url);
    QObject::connect(m_network, SIGNAL(finished(QNetworkReply*)), this, SLOT(RequestFinished(QNetworkReply*)));
    m_network->post(request, query.toUtf8());
}

void HttpRepository::RequestFinished(QNetworkReply *reply)
{
   if(reply->error() > 0)
   {
       qDebug() << "Http Error: " << reply->errorString();
   }
   else
   {
       QByteArray data = reply->readAll();
       emit DataRecieved(data);
   }
}
