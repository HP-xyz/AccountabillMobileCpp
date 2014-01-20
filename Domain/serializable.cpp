#include "serializable.h"

QDataStream &operator<<(QDataStream &ds, const Serializable &obj)
{
    for(int i=0; i<obj.metaObject()->propertyCount(); ++i)
    {
        if(obj.metaObject()->property(i).isStored(&obj))
        {
            ds << obj.metaObject()->property(i).read(&obj);

        }
    }
    return ds;
}
QDataStream &operator>>(QDataStream &ds, Serializable &obj)
{
    QVariant var;
    for(int i=0; i<obj.metaObject()->propertyCount(); ++i)
    {
        if(obj.metaObject()->property(i).isStored(&obj))
        {
            ds >> var;
            obj.metaObject()->property(i).write(&obj, var);
        }
    }
    return ds;
}


Serializable::Serializable(QObject *parent):
    QObject(parent)
{

}
