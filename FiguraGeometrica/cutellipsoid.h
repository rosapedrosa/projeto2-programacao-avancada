#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

class CutEllipsoid : public FiguraGeometrica
{
public:
    int xcenter, ycenter, zcenter, rx, ry, rz;
     int nx, ny, nz;
public:
    CutEllipsoid();
    void Draw (Sculptor &t);

};

#endif // CUTELLIPSOID_H
