#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the Number to check it is prime or not :  ");
	scanf("%d",&a);
	if (a<=1){
		printf("The number %d is not prime",a);
		return 0;
	}
	else{
	for(b=2;b<=a/b;b++){
		if (a%b==0){
			printf("THe number %d is not prime",a);
			return 0;
	}}
}
printf("the number is %d prime",a);
}
