#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct vader {
    int datum;    
    int vind;
    float temp;
}vader; 

int main() {
    vader post;
    FILE *fp;
    vader varmast,kallast;
    float max = -100.0;
    float min = 100.0;
    
    fp = fopen("VADER24.DAT","rb");
    if(fp==NULL){
        printf("kunde inte läsa filen");
        return 1;
    }
    while(fread(&post,sizeof(vader),1,fp)){
        if(post.datum >= 240401 && post.datum <= 240430){
            if (post.temp>max){
                max = post.temp;
                varmast = post;

            }
            if (post.temp<min){
                min=post.temp;
                kallast=post;
            }
           
        }
    }
            printf("kallast\ndag: %i\ntemp: %f\nvind: %i\n",kallast.datum,kallast.temp,kallast.vind);
            printf("varmast\ndag: %i\ntemp: %f\nvind: %i",varmast.datum,varmast.temp,varmast.vind);
            fclose(fp);
    
    return 0;
}

