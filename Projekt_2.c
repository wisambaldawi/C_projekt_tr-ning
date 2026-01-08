#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX 42
typedef struct postTyp{
    char fornamn [10];
    char efternamn [10];
    char klubb [20];
}postTyp;

int  main (){
int antal =0;
FILE *fp;
postTyp post;
fp = fopen("ANMAL.DAT","ab");
if(fp==NULL){
    printf("Misslyckat");
    return 1;
}
  while (antal<MAX){
    printf("\nRegistera deltagre %i\n", antal +1);
    printf("Förnamn: ");
    scanf("%s",post.fornamn);

    printf("Efternamn: ");
    scanf("%s",post.efternamn);

    printf("Klubb: ");
    scanf("%s", post.klubb);

    fwrite(&post,sizeof(postTyp),1,fp);
  antal++;

  if (antal>=MAX)
break;

printf("Registera fler? (1=ja, 0=nej): ");
int forts;
scanf("%d",&forts);
if(!forts)
break;
}
fclose(fp);

fp = fopen("ANMAL.DAT", "rb");
if (fp == NULL){
    printf("Misslyckat");
    return 1;
}
fseek(fp,0,SEEK_END);
antal = ftell(fp) / sizeof(postTyp);
rewind (fp);

printf("\nAntal anmälda deltagare är: %d\n", antal);

return 0;
}