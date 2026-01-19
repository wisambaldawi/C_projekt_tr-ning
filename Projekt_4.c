#include <stdio.h>
#include <stdlib.h>
int sort(int vekt[], int storlek){
    int i,j,slask;

    for(i=0; i<storlek; i++){
        for(j=storlek-1; j>i; j--){
            if(vekt[j-1]>vekt[j]){
                slask=vekt[j-1];
                vekt[j-1]=vekt[j];
                vekt[j]=slask;
            }
        }
    }
    return 42;
}
int main(){
 
int platser[5]={2,8,1,4,6};
int antal;
int i;

sort(platser,5);
for(i=0; i<5; i++){
    printf("%i ",platser[i]);
}



return 0;
}


