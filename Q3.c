#include <stdio.h>
int main(){
	int n[10];
	int i;
	printf("Enter the numbers : ");
	for (i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	printf("Even are: ");
	for(i=0;i<10;i++){
		if (n[i]%2==0){
			printf("%d ",n[i]);
		}
	}
	printf("\nOdd are : ");
	for(i=0;i<10;i++){
		if (n[i]%2!=0){
			printf("%d ",n[i]);
		}
	}
	return 0;
}
