#include <stdio.h>
#include <stdlib.h>

void sort(int vekt[], int storlek){
    int i, j, slask;

    for (i = 0; i < storlek - 1; i++){
        for (j = storlek - 1; j > i; j--){
            if (vekt[j - 1] > vekt[j]){
                slask = vekt[j - 1];
                vekt[j - 1] = vekt[j];
                vekt[j] = slask;
            }
        }
    }

    
   
    for (i = 0; i < storlek; i++){
        printf("%d ", vekt[i]);
    }
    printf("\n");
}

int main(void){
    int vekt[100];        
    int tal;
    int storlek = 0;     

    

    while (1){
        printf("Ange ett tal, skriv 0 för att avsluta:");
        scanf("%d", &tal);

        if (tal == 0){
            break;       
        }

        if (storlek < 100){
            vekt[storlek] = tal;  
            storlek++;
        }
        else{
            printf("Max 100 tal tillåtna.\n");
            break;
        }
    }

    
    sort(vekt, storlek);

    return 0;
}

