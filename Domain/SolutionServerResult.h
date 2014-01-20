#ifndef SOLUTIONSERVERRESULT_H
#define SOLUTIONSERVERRESULT_H

#include "domain_global.h"
#include <QString>
#include <QObject>
using namespace std;
template<class T1>
class DOMAINSHARED_EXPORT SolutionServerResult
{
    Q_OBJECT
public:
    SolutionServerResult(bool isOk, QString message, T1 data)
    {
        setIsOk(isOk);
        setMessage(message);
        setData(data);
    }
    Q_PROPERTY(QString Type READ Type WRITE setType NOTIFY TypeChanged)
    Q_PROPERTY(bool IsOk READ IsOk WRITE setIsOk NOTIFY IsOkChanged)
    Q_PROPERTY(QString Message READ Message WRITE setMessage NOTIFY MessageChanged)
    Q_PROPERTY(T Data READ Data WRITE setData NOTIFY DataChanged)

    bool IsOk() const
    {
        return m_IsOk;
    }
    QString Message() const
    {
        return m_Message;
    }
    T1 Data() const
    {
        return m_Data;
    }
    QString Type() const
    {
        return m_Type;
    }

public slots:
    void setIsOk(bool arg)
    {
        if (m_IsOk != arg) {
            m_IsOk = arg;
            emit IsOkChanged(arg);
        }
    }
    void setMessage(QString arg)
    {
        if (m_Message != arg) {
            m_Message = arg;
            emit MessageChanged(arg);
        }
    }
    void setData(T1 arg)
    {
        if (m_Data != arg) {
            m_Data = arg;
            emit DataChanged(arg);
        }
    }
    void setType(QString arg)
    {
        if (m_Type != arg) {
            m_Type = arg;
            emit TypeChanged(arg);
        }
    }

signals:
    void IsOkChanged(bool arg);
    void MessageChanged(QString arg);
    void DataChanged(T1 arg);
    void TypeChanged(QString arg);

private:
    bool m_IsOk;
    QString m_Message;
    T1 m_Data;
    QString m_Type;
};

#endif // SOLUTIONSERVERRESULT_H
