#ifndef BANKINGDETAIL_H
#define BANKINGDETAIL_H
#include <QString>
#include <QObject>
class BankingDetail : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(int UserId READ UserId WRITE setUserId NOTIFY UserIdChanged)
    Q_PROPERTY(QString AccountName READ AccountName WRITE setAccountName NOTIFY AccountNameChanged)
    Q_PROPERTY(QString BankName READ BankName WRITE setBankName NOTIFY BankNameChanged)
    Q_PROPERTY(QString BranchCode READ BranchCode WRITE setBranchCode NOTIFY BranchCodeChanged)
    Q_PROPERTY(QString AccountNumber READ AccountNumber WRITE setAccountNumber NOTIFY AccountNumberChanged)
    Q_PROPERTY(QString EncryptedAccountNumber READ EncryptedAccountNumber WRITE setEncryptedAccountNumber NOTIFY EncryptedAccountNumberChanged)
    Q_PROPERTY(QString AccountType READ AccountType WRITE setAccountType NOTIFY AccountTypeChanged)
    int UserId() const
    {
        return m_UserId;
    }
    QString AccountName() const
    {
        return m_AccountName;
    }
    QString BankName() const
    {
        return m_BankName;
    }
    QString BranchCode() const
    {
        return m_BranchCode;
    }
    QString AccountNumber() const
    {
        return m_AccountNumber;
    }
    QString EncryptedAccountNumber() const
    {
        return m_EncryptedAccountNumber;
    }
    QString AccountType() const
    {
        return m_AccountType;
    }
    bool operator==(const BankingDetail &other) const
    {
        if(UserId() == other.UserId())
            return true;
        return false;
    }
    bool operator!=(const BankingDetail &other) const
    {
        return !(*this == other);
    }
public slots:
    void setUserId(int arg)
    {
        if (m_UserId != arg) {
            m_UserId = arg;
            emit UserIdChanged(arg);
        }
    }
    void setAccountName(QString arg)
    {
        if (m_AccountName != arg) {
            m_AccountName = arg;
            emit AccountNameChanged(arg);
        }
    }

    void setBankName(QString arg)
    {
        if (m_BankName != arg) {
            m_BankName = arg;
            emit BankNameChanged(arg);
        }
    }

    void setBranchCode(QString arg)
    {
        if (m_BranchCode != arg) {
            m_BranchCode = arg;
            emit BranchCodeChanged(arg);
        }
    }

    void setAccountNumber(QString arg)
    {
        if (m_AccountNumber != arg) {
            m_AccountNumber = arg;
            emit AccountNumberChanged(arg);
        }
    }

    void setEncryptedAccountNumber(QString arg)
    {
        if (m_EncryptedAccountNumber != arg) {
            m_EncryptedAccountNumber = arg;
            emit EncryptedAccountNumberChanged(arg);
        }
    }

    void setAccountType(QString arg)
    {
        if (m_AccountType != arg) {
            m_AccountType = arg;
            emit AccountTypeChanged(arg);
        }
    }

signals:
    void UserIdChanged(int arg);
    void AccountNameChanged(QString arg);
    void BankNameChanged(QString arg);
    void BranchCodeChanged(QString arg);
    void AccountNumberChanged(QString arg);
    void EncryptedAccountNumberChanged(QString arg);
    void AccountTypeChanged(QString arg);
private:
    int m_UserId;
    QString m_AccountName;
    QString m_BankName;
    QString m_BranchCode;
    QString m_AccountNumber;
    QString m_EncryptedAccountNumber;
    QString m_AccountType;
};

#endif // BANKINGDETAIL_H
