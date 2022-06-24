#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"

class CutVoxel : public FiguraGeometrica
{
private:
    int x, y, z;
public:
    CutVoxel();
    void Draw(Sculptor &t);
};

#endif // CUTVOXEL_H
