#include<stdio.h>
#include<string.h>

void main(){

    /*int matriz[filas][columnas];*/
    int matriz[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<4;j++){
            printf("%d", matriz[i][j]);
        }
    };
}