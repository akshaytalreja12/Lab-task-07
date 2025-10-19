#include <stdio.h>
int main(){
	int i,j,n;
	int price[10]={150,120,110,100,200,400,500,600,450,300};
	printf("Enter your budget : ");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
		if((price[i]+price[j])==n){
			printf("pair if item prices for your budget %d & %d \n",price[i],price[j]);
		}
	}}
return 0;
}
