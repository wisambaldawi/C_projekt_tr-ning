#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct Boende{
    char adress [30];
    char namn [20];
    int igelkott;
}Boende;
int main (){
    Boende post;
    FILE *fp;

    fp = fopen("IGLISAR.DAT","wb");
    if (fp==NULL){
        printf("kunde inte skapa filen");
        return 1;
    }
    
    
    printf("namn: ");
    gets(post.namn);
    while( strcmp (post.namn,"")){
        printf("adress: ");
        gets(post.adress);
        printf("antal igelkottar: ");
        scanf("%i",&post.igelkott);
        getchar();
        fwrite(&post,sizeof(Boende),1,fp);
        printf("namn: ");
        gets(post.namn);
    }
    
    fclose(fp);

    fp = fopen("IGLISAR.DAT","rb");
    if (fp==NULL){
        printf("kunde inte läsa filen");
        return 1;
    }
    
    while (fread(&post,sizeof(Boende),1,fp)){
        printf("%s\n%s\n%i\n",post.adress,post.namn,post.igelkott);
    }
    fclose(fp);
        

    return 0;
}