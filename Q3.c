#include <stdio.h>
int main(){
	long long int a,b=1,c,d,e;
	printf("Enter the number : ");
	scanf("%lld",&a);
	e=a;
	for(d=-1;b>0;){
		b=a%10;
		a=a/10;
		d++;
	}
	b=0;
	

	for (c=1;c<=d;c++ ){
		b=e%10;
		e=e/10;
		printf("%lld",b);
	}
	
	return 0;

}
