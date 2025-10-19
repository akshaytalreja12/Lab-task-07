#include <stdio.h>
int main(){
	int i,j,n,k=0;
	printf("Enter the total number of items : ");
	scanf("%d",&n);
	int code[n];
	
	printf("Enter the code of items: ");
	for(i=0;i<n;i++){
		scanf("%d",&code[i]);
	}
	printf("Enter the code of defective item: ");
	scanf("%d",&j);
	for (i=0;i<n;i++){
		if(code[i]==j){
			continue;
		}
		k++;
		int mcode[k];
		mcode[i]=code[i];
		printf("%d,",mcode[i]);
	}
}
