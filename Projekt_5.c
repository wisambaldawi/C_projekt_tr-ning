#include <stdio.h>
#include <stdlib.h>
void sortera(int vekt [],int storlek){
    int i,j,slask;

    for(i=0; i<storlek; i++){
        for(j=storlek-1; j>i; j--){
            if (vekt[j-1]>vekt[j]){
                slask=vekt[j-1];
                vekt[j-1]=vekt[j];
                vekt[j]=slask;
            }
        }
    }
}

int main(){
    int vekt[9]={2,1,5,3,4,8,6,7,9};
    int i;

    sortera(vekt,9);
    for(i=0; i<9; i++){
    printf("%i ", vekt[i]);
    }
    
   
return 0;
}

