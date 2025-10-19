#include <stdio.h>
int main(){
	int mark[10];
	int k;
	int high[10]={0},i,j=0;
	printf("Enter the marks : ");
	for(i=0;i<10;i++){
		scanf("%d",&mark[i]);
	
	}
	for(i=0;i<10;i++){
		if (high[j]> mark[i+1]){
			high[j]=high[j];
		}
		else {
			high[j]=mark[i+1];
		}
	}
	printf("The highest marks is %d,",high[j]);
	return 0;
}
