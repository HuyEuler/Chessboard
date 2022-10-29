#include<stdio.h>

int c[40][40] = {},x[80]={},y[80]={},d = 0;

void Try(int a,int b,int i,int n){
	int j;
	if(i == n*n){
		++d;
		printf("\nCach di thu %d",d);
		printf("\n");
		for(j = 1;j<= i;j++)	printf("%c%d  ",x[j]+96,y[j]);
	}
	else{
		if(a+1<= n &&b+2 <= n && c[a+1][b+2] == 0){
			x[i+1] = a+1;y[i+1] = b+2;c[a+1][b+2] = 1;
			Try(a+1,b+2,i+1,n);
			c[a+1][b+2] = 0;
		}
		if(a+2<= n &&b+1 <= n && c[a+2][b+1] == 0){
			x[i+1] = a+2;y[i+1] = b+1;c[a+2][b+1] = 1;
			Try(a+2,b+1,i+1,n);
			c[a+2][b+1] = 0;
		}
		if(a-1>= 1 &&b+2 <= n && c[a-1][b+2] == 0){
			x[i+1] = a-1;y[i+1] = b+2;c[a-1][b+2] = 1;
			Try(a-1,b+2,i+1,n);
			c[a-1][b+2] = 0;
		}
		if(a-2>= 1 &&b+1 <= n && c[a-2][b+1] == 0){
			x[i+1] = a-2;y[i+1] = b+1;c[a-2][b+1] = 1;
			Try(a-2,b+1,i+1,n);
			c[a-2][b+1] = 0;
		}
		if(a-2>= 1 &&b-1 >= 1 && c[a-2][b-1] == 0){
			x[i+1] = a-2;y[i+1] = b-1;c[a-2][b-1] = 1;
			Try(a-2,b-1,i+1,n);
			c[a-2][b-1] = 0;
		}
		if(a-1>= 1 &&b-2 >= 1 && c[a-1][b-2] == 0){
			x[i+1] = a-1;y[i+1] = b-2;c[a-1][b-2] = 1;
			Try(a-1,b-2,i+1,n);
			c[a-1][b-2] = 0;
		}
		
		if(a+1<= n &&b-2 >= 1 && c[a+1][b-2] == 0){
			x[i+1] = a+1;y[i+1] = b-2;c[a+1][b-2] = 1;
			Try(a+1,b-2,i+1,n);
			c[a+1][b-2] = 0;
		}
		if(a+2<= n &&b-1 >= 1 && c[a+2][b-1] == 0){
			x[i+1] = a+2;y[i+1] = b-1;c[a+2][b-1] = 1;
			Try(a+2,b-1,i+1,n);
			c[a+2][b-1] = 0;
		}
	}
}
int main(){
	int a, b, n,j;
	scanf("%d",&n);
	
//	for(j = 1;j<= n*n;j++)	printf("%-4d",j);
	for(a = 1;a<= n;a++){
		for(b = 1;b<= n;b++){
			x[1] = a;y[1] = b; c[a][b] = 1;
			Try(a,b,1,n);
			c[a][b] = 0;
		}
	}
	printf("Hello %d",d);
	return 0;
}
