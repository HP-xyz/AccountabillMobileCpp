#ifndef SOLUTIONSERVERRESULT_H
#define SOLUTIONSERVERRESULT_H

#include "domain_global.h"
#include <QString>
#include <QObject>
using namespace std;
template<class T1>
class DOMAINSHARED_EXPORT SolutionServerResult
{
public:
    SolutionServerResult(bool isOk, QString message, T1 data)
    {
        setIsOk(isOk);
        setMessage(message);
        setData(data);
    }
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
    void setIsOk(bool arg)
    {
        if (m_IsOk != arg)
            m_IsOk = arg;
    }
    void setMessage(QString arg)
    {
        if (m_Message != arg)
            m_Message = arg;
    }
    void setData(T1 arg)
    {
        if (m_Data != arg)
            m_Data = arg;
    }
    void setType(QString arg)
    {
        if (m_Type != arg)
            m_Type = arg;
    }
private:
    bool m_IsOk;
    QString m_Message;
    T1 m_Data;
    QString m_Type;
};

#endif // SOLUTIONSERVERRESULT_H
