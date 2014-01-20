#ifndef REPOSITORIES_H
#define REPOSITORIES_H

#include "repositories_global.h"
#include <SolutionServerResult.h>
#include <RegisteredUser.h>
#include <LoginDetails.h>

#include <QDomDocument>
#include <QObject>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QDebug>

class REPOSITORIESSHARED_EXPORT HttpRepository: QObject
{
    Q_OBJECT
public:
    HttpRepository();
    ~HttpRepository();
    void CheckUserLogin(QString emailAddress, QString password);
    void Post(QString query, QUrl url);
signals:
    void DataRecieved(QByteArray);
public slots:
    void RequestFinished(QNetworkReply* reply);
private:
    QNetworkAccessManager* m_network;
};

#endif // REPOSITORIES_H
