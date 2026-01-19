#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int tal;

    srand(time(NULL));

    for(i=0; i<6; i++){
        tal=rand()%11-5;
        if(tal/2==%1){
            printf("negativt");
        }
        else{
            printf("positivt");
        }
    }

    return 0;
}