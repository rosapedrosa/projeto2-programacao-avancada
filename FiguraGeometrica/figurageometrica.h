#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <iostream>
#include "sculptor.h"

class FiguraGeometrica {
    float area;
    float xcenter, ycenter;
    float r, g,b,a;
public:
    FiguraGeometrica();
    ~FiguraGeometrica();

    virtual void Draw(Sculptor &t);
};
#endif // FIGURAGEOMETRICA_H
