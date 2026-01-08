#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studenter{
    char namn [15];
    char personnummer [13];
    char telefonnummer [10];
    int workshops;
}studenter;
typedef struct godkanda{
    char namn [15];
    char personnummer [13];
    char telefonnummer [10];

}godkanda;

int main(){
    studenter stud;
    godkanda god;

    FILE *pstud,*pgod;

    pstud=fopen("STUDENTER.DAT", "rb");
    if (pstud==NULL){
        printf("kunde inte läsa filen");
        return 1;
    }
    pgod=fopen("GODKANDA.DAT","wb");
    if(pgod==NULL){
        printf("kunde inte skapa filen");
        fclose(pstud);
        return 1;
    }
while (fread(&stud,sizeof(studenter),1,pstud)){
    if (stud.workshops>=10){
        strcpy (god.namn,stud.namn);
        strcpy (god.personnummer,stud.personnummer);
        strcpy (god.telefonnummer,stud.telefonnummer);
        fwrite(&god,sizeof(godkanda),1,pgod);
    }
}
fclose (pgod);
fclose (pstud);

return 0;
}


