#include <stdio.h>
#include <stdlib.h>

int main()
{    ///This is declaration for hall sensor input as there are 3 hall sensors values
     int Ha,Hb,Hc;
     ///As hall sensors values are digital values so input should be 1 or 0
    printf("Enter 3 Hall sensor values(must be 1 or 0):\n");
    scanf("%d %d %d",&Ha,&Hb,&Hc);
    switch(Ha) {
      case  0 :
         break;
      case  1 :
         break;
      default :
         printf("Invalid value of Ha\n");
         return 0;
    }
    switch(Hb) {
      case  0 :
         break;
      case  1 :
         break;
      default :
         printf("Invalid value of Hb\n");
         return 0;
    }
    switch(Hc) {
      case  0 :
         break;
      case  1 :
         break;
      default :
         printf("Invalid value of Hc\n");
         return 0;
    }
    ///Values of these variables indicates which winding should be energised in which manner
    int Va,Vb,Vc;

    decoder(Ha,Hb,Hc,&Va,&Vb,&Vc);
    ///-1=negatively energised,+1=positively energised,0=not energised
    printf("Va= %d\tVb= %d\tVc= %d\n",Va,Vb,Vc);

    ///For energising windings switches must be closed

    ///Here G1,G2,...G6 are switches in power converter
    if (Va==0)
    printf("G1=0\tG2=0\t");
    else if(Va>0)
    printf("G1=1\tG2=0\t");/*1=ON,0=OFF*/
    else if(Va<0)
    printf("G1=0\tG2=1\t");

    if(Vb==0)
    printf("G3=0\tG4=0\t");
    else if(Vb>0)
    printf("G3=1\tG4=0\t");
    else if(Vb<0)
    printf("G3=0\tG4=1\t");

    if (Vc==0)
    printf("G5=0\tG6=0\n");
    else if(Vc>0)
    printf("G5=1\tG6=0\n");
    else if (Vc<0)
    printf("G5=0\tG6=1\n");

    printf("Press 1 if you want to check for another values of Ha,Hb,Hc else press any other key\n");
    int x;
    scanf("%d",&x);

    if (x==1)
    main();
    else
    return 0;
}
