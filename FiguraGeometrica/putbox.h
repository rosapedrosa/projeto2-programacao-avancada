#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"

class PutBox : public FiguraGeometrica
{
private:
    int x0, x1, y0, y1, z0, z1;
    float r, g, b, a;
public:
    PutBox();
    void Draw (Sculptor &t);
};

#endif // PUTBOX_H
