#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Fiskar{
    char namn [30];
    char familj [25];
    int nummer;
}Fiskar;
typedef struct NyFisk{
    char namn[30];
    char familj [25];
}NyFisk;
int main(){
    Fiskar in;
    NyFisk ut;
    FILE *fin,*fut;

    fin=fopen("FISKAR.DAT","rb");
    if(fin==NULL){
        printf("filen kunde inte läsas");
        return 1;
    }
    fut=fopen("NYFISK.DAT","wb");
    if(fut==NULL){
        printf("filen kunde inte öppnas");
        fclose(fin);
        return 1;
    }
    while(fread(&in,sizeof(Fiskar),1,fin)){
        if (in.nummer<500){
            strcpy(ut.namn,in.namn);
            strcpy(ut.familj,in.familj);
            fwrite(&ut,sizeof(NyFisk),1,fut);
        }
        
    }
fclose(fin);
fclose(fut);
    return 0;
}