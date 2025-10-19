#include <stdio.h>
int main(){
	int a ,b,c=1;
	printf("Enter the value : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		c=c*b;
	}
	printf(" the factorial is %d",c);
}
