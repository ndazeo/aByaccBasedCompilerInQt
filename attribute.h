#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <QString>

class Attribute
{
    /** Definir, agregar y mostrar atributos **/
public:
    Attribute();
    QString type;
    int token;
    QString lexema;
};

#endif // ATTRIBUTE_H