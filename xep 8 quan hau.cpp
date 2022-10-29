#include<stdio.h>
//#define max 13
int c1[13] = {},c2[26] = {},c3[26] = {};
int d = 0; 
void chessBoard(int n,int arr[]){
	int i,j; 
	for(i = 1;i<= n-1;i++){	
			printf(" __");
	}
	printf("\n");
	for(i = 1;i<= n-1;i++){
		for(j = 1;j<= n-1;j++){
			if(j == arr[i])		printf("|%c%c",219,219);
			else	printf("|__");
		}	
			
			printf("|\n");
	}
} 
void Try(int arr[],int i,int n){
	int j;
	if(i == n+1){
		d++; 
		printf("\n");
		chessBoard(n+1,arr); 
		for(j = 1;j<= n;j++){
			printf("%c%d  ",arr[j]+96,j);
		}
			
	}
	else{
		for(arr[i]=1;arr[i]<= n;arr[i]++){
			if(c1[arr[i]] == 0 &&c2[arr[i]+i] == 0 &&c3[arr[i]-i+n]==0){
				c1[arr[i]] = 1;
				c2[arr[i]+i] = 1;
				c3[arr[i]-i+n] = 1;
				Try(arr,i+1,n);
				c1[arr[i]] = 0;
				c2[arr[i]+i] = 0;
				c3[arr[i]-i+n] = 0;
			}	
		}	
	}
}

int main(){
	int arr[13],n,i,j;
	scanf("%d",&n);
	printf("Ban co chuan\n");
	for(i = 1;i<= n;i++){	
			printf(" __");
	}
	printf("\n");
	for(i = 1;i<= n;i++){
		for(j = 1;j<= n;j++){
			if((i+j)%2==0)		printf("|%c%c",219,219);
			else	printf("|__");
		}	
			
			printf("|\n");
	}
	Try(arr,1,n);
	printf("co %d cach xep ",d);
	return 0;
}
