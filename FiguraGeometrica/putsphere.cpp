#include "putsphere.h"
#include <cmath>

PutSphere::PutSphere()
{

}

void PutSphere::Draw(Sculptor &t)
{
    for(int i=0; i <nx; i++){
        for(int j=0; j<ny; j++){
            for(int k=0; k<nz; k++){
                 if((pow(i-xcenter,2) + pow(j-ycenter,2) + pow(k-zcenter,2) <= pow(radius,2))){
                      t.v[i][j][k].isOn =1;
                      t.v[i][j][k].r = r;
                      t.v[i][j][k].g = g;
                      t.v[i][j][k].b = b;
                      t.v[i][j][k].a = a;
                   }
            }
        }
    }
}
