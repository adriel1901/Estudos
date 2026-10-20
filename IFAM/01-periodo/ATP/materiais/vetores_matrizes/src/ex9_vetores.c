#include <stdio.h>

int main(){

    int r[]={5,8,7,9,5};
    int s[]={4,5,6,9,10,8,15,16,20,30};
    int x[15];
    int achou=0;
    int posX=0;
    int conta=0;
    for(int i=0;i<5;i++){
       //pesquisa valor em x
       conta=0;
       achou=0;
       while(conta<posX && !achou){
          if (r[i]==x[conta]){
             achou=1;
          }else{
             conta++;
          }
       }
       if (!achou){
          x[posX]=r[i];
          posX++;
       }
    }
    for(int i=0;i<5;i++){
       printf("r[%d]=%d ",i,r[i]);
    }
    printf("\n\n");
    for(int i=0;i<10;i++){
       printf("s[%d]=%d ",i,r[i]);
    }
    printf("\n\n");
    for(int i=0;i<15;i++){
       printf("x[%d]=%d ",i,x[i]);
    }

    return 0;
}
