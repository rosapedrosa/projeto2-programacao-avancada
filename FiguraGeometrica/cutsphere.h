#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

class CutSphere : public FiguraGeometrica
{
private:
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere();
    void Draw (Sculptor &t);
};

#endif // CUTSPHERE_H
