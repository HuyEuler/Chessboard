#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
//	printf("%c\n_",219);
	for(i = 1;i<= n-1;i++){	
			printf(" __");
	}
	printf("\n");
	for(i = 1;i<= n-1;i++){
		for(j = 1;j<= n-1;j++){
			if((i+j)%2==0)		printf("|%c%c",219,219);
			else	printf("|__");
		}	
			
			printf("|\n");
	}
}
