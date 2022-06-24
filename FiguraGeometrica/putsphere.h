#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"

class PutSphere : public FiguraGeometrica
{
private:
    int xcenter, ycenter, zcenter, radius;
    float r, g, b, a;
    int nx, ny, nz;
public:
    PutSphere();
     void Draw (Sculptor &t);
};

#endif // PUTSPHERE_H
