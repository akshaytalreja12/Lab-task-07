#include <stdio.h>
int main(){
	int rndm[10];
	int i,n;
	for(i=0;i<10;i++){
		rndm[i]=(i*4+13)%10;
	}
	printf("The ten random number are generated!!\n\n");
	printf("Enter the number to search for : ");
	scanf("%d",&n);
	for (i=0;i<10;i++){
		if(rndm[i]==n){
			printf("The number is found in index of %d\n",i);
			break;
		}
		else if(i==9){
		printf("THe number was not found\n");}
		
	}
	printf("The ten random numbers were : ");
	for (i=0;i<10;i++){
		printf("%d,",rndm[i]);
	}
}
