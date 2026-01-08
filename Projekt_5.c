#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct GladaGrisen{
    char namn [50];
    char utdelningsadress [30];
    int postnummer;
    char postadress [3];
    char utkorning;
}GladaGrisen;
typedef struct levrantorer{
        char namn [50];
     char utdelningsadress [30];
     int postnummer;
     char postadress [3];
     char utkorning;
     char telefonnummer [];
}levrantorer;
int main(){
    GladaGrisen gammal;
    levrantorer nya;
    

    FILE *pgam,*pny;

    pgam = fopen ("LEV.DAT","rb");
    if (pgam == NULL){
        printf("kunde inte läsa filen");
        return 1;
    }
    pny = fopen ("UT.DAT","wb");
    if (pny == NULL){
        printf("kunde inte skapa filen");
        fclose(pgam);
        return 1;
    }

    while (fread(&gammal,sizeof(GladaGrisen),1,pgam)){
        if (gammal.utkorning == 'J'){
            strcpy (nya.namn,gammal.namn);
            strcpy (nya.postadress,gammal.postadress);
            strcpy (nya.utdelningsadress,gammal.utdelningsadress);
            strcpy (nya.utkorning,gammal.utkorning);
            nya.postnummer=gammal.postnummer;
            
            fwrite (&nya,sizeof(levrantorer),1,pny);
        }
    }
fclose(pgam);
fclose(pny);
   
return 0;
}

