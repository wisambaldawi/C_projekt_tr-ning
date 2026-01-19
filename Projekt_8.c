#include <stdlib.h>
#include <stdio.h>
int main (){
    int val;

    printf("ange tal mellan 1 till 7: ");
    scanf("%i",&val);
   
     while (val<1 || val>7){
        printf("ogiltigt tal, försök igen: ");
        scanf("%i",&val);
    }
    switch (val){
        case 1: 
        printf("måndag");
        break;
        case 2:
        printf("tisdag");
        break;
        case 3: 
        printf("onsdag");
        break;
        case 4:
        printf("torsdag");
        break;
        case 5: 
        printf("fredag");
        break;
        case 6:
        printf("lördag");
        break;
        case 7: 
        printf("söndag");
        break;
    }

    return 0;
}