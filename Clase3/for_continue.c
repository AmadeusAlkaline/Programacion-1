#include <stdio.h>

void main(){
    for(int i=0;i<10;i++){
        if(i%2 == 0){
            printf("%d es par \n", i);
        }
        continue;
    }
}