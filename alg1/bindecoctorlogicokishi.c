#include <stdio.h>

int main(void){
  int resto1,resto2,o1,o2,o3,o4,dec1=0,dec2=0,b1=0,b2=0,b3,b4,dec3,dec4;
  int mul1=1,mul2=1,mul3=1,mul4=1,mul5=1,aux1,aux2,aux3,aux4;
  int i1=1,i2=1,logico1=0,declogico1=0,octlogico1=0;
  

  scanf("%d %d",&o1,&o2);
   o3=o1;
   o4=o2;
  while(o1!=-1 || o2!=-1){
   while(o1!=0){ // oct pra dec
     resto1=o1%10;
     dec1=dec1+(resto1*mul1);
      mul1 = mul1*8;
      o1 = o1/10;
    }

    while(o2!=0){ //oct2 pra dec
        resto2=o2%10;
        dec2=dec2+(resto2*mul2);
        mul2 = mul2*8;
         o2 = o2/10;
    }

   dec3=dec1;
   dec4=dec2;

     while(dec1!=0){ //dec pra bin

        aux1=dec1%2;
        b1=b1+aux1*i1;
        dec1=dec1/2;
        i1=i1*10;
   }
     while(dec2!=0){ //dec2 pra bin
       aux2=dec2%2;
       b2=b2+aux2*i2;
       dec2=dec2/2;
       i2=i2*10;
    }

    b3=b1;
   b4=b2;

   if(b1>b2){
     while(b1>0){
       if(b1%10==1){
         logico1=logico1+mul5;
       }else if(b2%10==1){
         logico1=logico1+mul5;
       }
       mul5=mul5 * 10;
       b1=b1/10;
       b2=b2/10;

     }
   }else{
       while(b2>0){
       if(b2%10==1){
         logico1=logico1+mul5;
       }else if(b1%10==1){
         logico1=logico1+mul5;
       }
       mul5=mul5 * 10;
       b2=b2/10;
       b1=b1/10;
       }
    } 
    
    aux1=logico1;
    mul1=1;
    declogico1=0;
    
    while(aux1!=0){
        declogico1=declogico1+(aux1%10)*mul1;
        mul1=mul1*2;
        aux1=aux1/10;
    }
    
    aux1=logico1;
    mul1=1;
    octlogico1=0;
    
    while(aux1!=0){
        mul2=1;
        aux3=0;
        aux2=aux1%1000;
        while(aux2!=0){
            aux3=aux3+(aux2%10)*mul2;
            mul2=mul2*2;
            aux2=aux2/10;
    }
        octlogico1=octlogico1+aux3*mul1;
        mul1=mul1*10;
        aux1=aux1/1000;
    }
    if(o1>=0 && o2>=0){
      printf("%d %d %d %d %d %d %d\n",dec3,dec4,b3,b4,logico1,declogico1,octlogico1);
    }

    scanf("%d",&o1);
    if(o1!=-1){      
    scanf("%d",&o2);
    }
      dec1=0;
      dec2=0;
      b1=0;
      b2=0;
      o3=0;
      o4=0;
      mul1=1;
      mul2=1;
      mul3=1;
      mul4=1;
      mul5=1;
      aux1=0;
      aux2=0;
      i1=1;
      i2=1;
      declogico1=0;
      logico1=0;

  }

return 0;
}