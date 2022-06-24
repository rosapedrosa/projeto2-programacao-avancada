#include "cutvoxel.h"

CutVoxel::CutVoxel()
{

}

void CutVoxel::Draw(Sculptor &t)
{
    t.v[x][y][z].isOn = 0;

}
