#include <stdio.h>

int main(void){
	int hi,mi,si,hf,mf,sf;
	int tempoh,tempom,tempos,tempofinal,tempomaior=0;

	do{
		scanf("%dh%dm%ds",&hi,&mi,&si);
		if(hi!=-1&&mi!=-1&&si!=-1){
		scanf("%dh%dm%ds",&hf,&mf,&sf);
        
		  
			tempoh=hf-hi;
			tempom=mf-mi;
			tempos=sf-si;

			tempoh=tempoh*3600;
			tempom=tempom*60;
			tempofinal=tempoh+tempom+tempos;
		    
			
			if(tempofinal<0){
				tempofinal=24*3600+tempofinal;
			} 
			if(tempofinal==0){
				tempofinal=24*3600;
			}
			tempoh=tempofinal/3600;
			tempom=(tempofinal%3600)/60;
			tempos=(tempofinal%3600)%60;
			
			if(tempofinal>tempomaior){
				tempomaior=tempofinal;
			}
		
		
	printf("%dh%dm%ds\n",tempoh,tempom,tempos);
	}
	}while(hi!=-1&&mi!=-1&&si!=-1);

	tempoh=tempomaior/3600;
	tempom=(tempomaior%3600)/60;
	tempos=(tempomaior%3600)%60;

	printf("%dh%dm%ds",tempoh,tempom,tempos);

}