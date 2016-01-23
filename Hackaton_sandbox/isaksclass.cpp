#include "isaksclass.h"

IsaksClass::IsaksClass()
{
    a = 5;
    text = "Vi är ett par goa grabbar vi!";
}

QString IsaksClass::Text()
{
    return text;

}

int IsaksClass::Number()
{
    return a;
}
