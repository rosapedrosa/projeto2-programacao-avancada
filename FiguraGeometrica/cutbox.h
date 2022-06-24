#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

class CutBox : public FiguraGeometrica
{
private:
    int x0, x1, y0, y1, z0, z1;
public:
    CutBox();
    void Draw(Sculptor &t);
};

#endif // CUTBOX_H
