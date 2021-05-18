#include <stdio.h>

int main(void){
	int n,p;
	int EhPrimo=1,d=2,cont=0,aux=0;

	scanf("%d",&n);
	while(n>0){
		scanf("%d",&p);
		if(p<=1){
			EhPrimo=0;
		}
		while(EhPrimo==1&&d<=p/2){
			if(p%d==0){
				EhPrimo=0;
			}
			d=d+1;
		}
		if(EhPrimo==1){
			cont++;
		}else{
		    if(cont>aux){
		        aux=cont;
		    }
			cont=0;
		}
		n--;
		if(n==0){
			if(cont>aux){
				aux=cont;
			}
		}

		p=0;
		EhPrimo=1;
		d=2;
	}
	printf("%d",aux);
	return 0;
}