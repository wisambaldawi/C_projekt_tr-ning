#include <stdio.h>
#include <stdlib.h>

int binsok(int vekt[],int soktal){
    int v=0,mitt,h=20;

    while((h-v)>1){
        mitt = (h+v)/2;
        if(soktal>=vekt[mitt]){
            v=mitt;

        }
        else {
            h=mitt;
        }
    }
    if (soktal==vekt[v]){
        return v;
    }
    else {
        return -1;
    }
}

int main() {
    
    
    return 0;
}