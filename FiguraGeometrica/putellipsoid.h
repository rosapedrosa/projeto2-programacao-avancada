#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"

class PutEllipsoid : public FiguraGeometrica
{
private:
    int xcenter, ycenter, zcenter, rx, ry, rz;
    float r, g, b, a;
    int nx, ny, nz;
public:
    PutEllipsoid();
    void Draw (Sculptor &t);
};

#endif // PUTELLIPSOID_H
