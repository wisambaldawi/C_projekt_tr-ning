#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vekt[100];
    int i, j, slask;
    int summa = 0;
    int max = 0;
    int min = 1000;
    int val;

    int soktal;
    int vanster, hoger, mid;
    int hittad;

    srand(time(NULL));

    
    printf("Osorterad talfoljd:\n");
    for (i = 0; i < 100; i++) {
        vekt[i] = rand() % 801 + 100;   
        printf("%4d ", vekt[i]);

        summa += vekt[i];

        if (vekt[i] > max)
            max = vekt[i];

        if (vekt[i] < min)
            min = vekt[i];

        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99; j++) {
            if (vekt[j] > vekt[j + 1]) {
                slask = vekt[j];
                vekt[j] = vekt[j + 1];
                vekt[j + 1] = slask;
            }
        }
    }

    printf("\nSorterad talfoljd:\n");
    for (i = 0; i < 100; i++) {
        printf("%4d ", vekt[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }



   
    printf("\n1. Medelvarde");
    printf("\n2. Maxvarde");
    printf("\n3. Minvarde");
    printf("\n4. Median");
    printf("\n5. Binarsokning ");
     do{
    printf("\nAnge ditt val: ");
    scanf("%d", &val);

    switch (val) {

        case 1:
            printf("Medelvardet ar: %.2f\n", (float)summa / 100);
            break;

        case 2:
            printf("Maxvardet ar: %d\n", max);
            break;

        case 3:
            printf("Minvardet ar: %d\n", min);
            break;

        case 4:
            printf("Medianen ar: %.2f\n", (vekt[49] + vekt[50]) / 2.0);
            break;

        case 5:
            printf("Ange tal att soka efter: ");
            scanf("%d", &soktal);

            vanster = 0;
            hoger = 99;
            hittad = 0;

            while (vanster <= hoger) {
                mid = (vanster + hoger) / 2;

                if (vekt[mid] == soktal) {
                    hittad = 1;
                    break;
                }
                else if (vekt[mid] < soktal) {
                    vanster = mid + 1;
                }
                else {
                    hoger = mid - 1;
                }
            }

            if (hittad) {
                printf("Talet finns pa rad %d, kolumn %d\n",
                       mid / 10 + 1, mid % 10 + 1);
            }
            else {
                printf("Talet finns inte i talfoljden\n");
            }
            break;

        default:
            printf("Felaktigt val\n");
    }
}while (val!=0);
    return 0;
}
