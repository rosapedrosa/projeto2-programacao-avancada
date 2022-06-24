#include "putbox.h"

PutBox::PutBox()
{

}

void PutBox::Draw(Sculptor &t)
{
    for(int i=x0; i <= x1; i++){
        for(int j=y0; j<= y1; j++){
            for(int k=z0; k<=z1; k++){

                  t.v[i][j][k].isOn =1;
                  t.v[i][j][k].r = r;
                  t.v[i][j][k].g = g;
                  t.v[i][j][k].b = b;
                  t.v[i][j][k].a = a;
            }
        }
    }
}
