#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <cmath>




Sculptor::Sculptor(int _nx, int _ny, int _nz){
    nx = _nx;
    ny = _ny;
    nz = _nz;
    v = new Voxel **[nx];
      for (int i = 0; i < nx; i++)
      {
          v[i] = new Voxel *[ny];

          for (int j = 0; j < ny; j++)
          {
                v[i][j] = new Voxel[nz];
           }
       }
}

Sculptor::~Sculptor()
{

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
              delete []v[i][j];
         }
         delete [] v[i];
     }

    delete []v;

}


void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this ->r = r;
    this ->g = g;
    this ->b = b;
    a = alpha;


}
