#ifndef COMPTE_H
#define COMPTE_H
#include<Qstring>

class compte
{
public:
    void setcompte(QString n);
    QString getcompte();
    compte();
private:
    QString idcompte;
};

#endif // COMPTE_H
