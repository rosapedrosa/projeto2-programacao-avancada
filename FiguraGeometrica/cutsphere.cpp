#include "cutsphere.h"
#include <cmath>

CutSphere::CutSphere()
{

}

void CutSphere::Draw(Sculptor &t)
{
    for(int i=0; i <nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                 if((pow(i-xcenter,2) + pow(j-ycenter,2) + pow(k-zcenter,2) <= pow(radius,2))){
                      t.v[i][j][k].isOn =0;

                   }
            }
        }
    }

}
