#include <stdio.h>
#include <stdlib.h>
void sortera(int vekt [34],int storlek){
    int i,j,slask;

    for(i=0; i<34; i++){
        for(j=33; j>i; j--){
            if (vekt[j-1]>vekt[j]){
                slask=vekt[j-1];
                vekt[j-1]=vekt[j];
                vekt[j]=slask;
            }
        }
        printf("%i ", vekt[i]);
    }
}

int main(){
    
    
   
return 0;
}

