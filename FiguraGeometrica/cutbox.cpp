#include "cutbox.h"
#include <iostream>
#include "sculptor.h"

CutBox::CutBox()
{

}

void CutBox::Draw(Sculptor &t)
{
    for(int i=x0; i <= x1; i++){
        for(int j=y0; j<= y1; j++){
            for(int k=z0; k<=z1; k++){

                  t.v[i][j][k].isOn =0;

            }
        }
    }


}
