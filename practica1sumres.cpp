/* PRÀCTICA 1
Javier Cervantes Enrique Antonio */
#include <stdio.h>
int main(){
   int t=0,x,y,z;
    printf("Digite opcion: \n 1=Suma \n 2=Resta \n 3=Multiplicacion \n 4=Division \n");
    scanf("%d",&x);

     printf("dato 1: \n");
    scanf("%d",&y);

     printf("dato 2: \n");
    scanf("%d",&z);

  /*  if (x ==1 ) t=y+z;
    else if (x==2) t=y-z;
    if (x ==3) t=y*z;
    else if (x==4) t=y/z; */

    switch(x){
       case 1: t=y+z;

        case 2: t=y-z;

        case 3: t=y*z;

        case 4: t=y/z;
        default: ;


    }
    printf("r: %d",t);

    return 0;

    }
