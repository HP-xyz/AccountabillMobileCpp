#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H
#include <QDataStream>
#include <QObject>
class Serializable : public QObject
{
public:
    explicit Serializable(QObject *parent = 0);
    QDataStream &operator<<(QDataStream &ds)
    {
        for(int i=0; i <  this->metaObject()->propertyCount(); ++i)
            if(this->metaObject()->property(i).isStored(&obj))
                ds << this->metaObject()->property(i).read(&obj);
        return ds;
    }
    QDataStream &operator>>(QDataStream &ds)
    {
        for(int i=0; i<this->metaObject()->propertyCount(); ++i)
        {
            if(this->metaObject()->property(i).isStored(&obj))
            {
                ds >> var;
                this->metaObject()->property(i).write(&obj, var);
            }
        }
        return ds;
    }
};

#endif // SERIALIZABLE_H
