#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

class PutEllipsoid : public FiguraGeometrica
{
private:
    int xcenter, ycenter, zcenter, rx, ry, rz;
    float r, g, b, a;
public:
    PutEllipsoid();
    void Draw (Sculptor &t);
};

#endif // PUTELLIPSOID_H
