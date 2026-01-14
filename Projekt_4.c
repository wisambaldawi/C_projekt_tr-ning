#include <stdio.h>
#include <stdlib.h>
int sortera (int vekt[],int soktal,int storlek){
    int v=0;
    int mitt;
    int h=storlek;
    
    
    while((h-v)>1){
        mitt=(v+h)/2;
        
        if (soktal>=vekt[mitt])
          v=mitt;
    
        else 
          h=mitt;
       }
    if(soktal==vekt[v])
        return v;
    
    else
    printf("talet finns inte");
    return -1001;
    }
int main(){
    int soktal;
    int plats;
    int vekt [10]={12,22,32,43,56,68,79,81,98,100};

    printf("ange soktal: ");
    scanf("%i", &soktal);

    plats = sortera(vekt,soktal,10);
    if(plats!=-1001){
        printf("talet finns på plats %i",plats+1);
    }

return 0;
}


