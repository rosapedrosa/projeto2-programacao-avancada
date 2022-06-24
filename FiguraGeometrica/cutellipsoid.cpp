#include "cutellipsoid.h"
#include <cmath>

CutEllipsoid::CutEllipsoid()
{

}

void CutEllipsoid::Draw(Sculptor &t)
{

    for(int i=0; i <nx; i++){
                for(int j=0; j<ny; j++){
                    for(int k=0; k<nz; k++){
                         if((pow(i-xcenter,2)/pow(rx,2) + pow(j-ycenter,2)/pow(ry,2) + pow(k-zcenter,2)/pow(rz,2) <= 1)){
                              t.v[i][j][k].isOn =0;

                           }
                    }
                }
            }

}
