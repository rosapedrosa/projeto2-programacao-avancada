#include "putvoxel.h"
#include "sculptor.h"
#include <iostream>

PutVoxel::PutVoxel()
{

}

void PutVoxel::draw(Sculptor &t)
{
    t.v[x][y][z].isOn =1;
    t.v[x][y][z].r = r;
    t.v[x][y][z].g = g;
    t.v[x][y][z].b = b;
    t.v[x][y][z].a = a;
}
