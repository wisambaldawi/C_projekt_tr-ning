#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int  main (){
  int i,j;
  int tal,summa=0;

  srand(time(NULL));

  for(i=0;i<6;i++){
    for(j=0;j<6;j++){
    tal=rand()%90+10;
    printf("%i ",tal);
     summa +=tal;
    }
    
    printf("= %i\n",summa);
    summa=0;
  }

return 0;
}