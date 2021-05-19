#include <stdio.h>
int main(void){
	int	n,m,r,novo,i,elevado,auxm;
	char p;

	do{
		scanf("%c",&p);
		scanf("%d",&r);
		scanf("%d",&m);

		novo=0;
        elevado=1;
        auxm=m;
        
        while(auxm>9){
            elevado=elevado*10;
            auxm=auxm/10;
        }
    
		switch(p){
			case '<':
				for(i=1;i<=r;i++){
				    
					m=m%elevado*10+m/elevado;
					
				}
				printf("%d\n",m);
			break;

			case '>':
			    for(i=1;i<=r;i++){
			        m=m%10*elevado+m/10;
			    }
				printf("<\n");
			break;

		}

	}while(p!='X'||p!='x');
	
	return 0;
}