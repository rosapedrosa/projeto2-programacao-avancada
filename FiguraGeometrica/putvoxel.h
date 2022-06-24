#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"

class PutVoxel : public FiguraGeometrica
{
private:
    int x, y, z;
    float r, g, b, a;

public:
    PutVoxel();
    void draw (Sculptor &t);
};

#endif // PUTVOXEL_H
