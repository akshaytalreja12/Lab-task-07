#include <Stdio.h>
int main(){
	int roll[11]={1,2,3,3,4,4,5,5,6,7,7};
	int roll2[11];
	int i,j,k;
	for(i=0;i<11;i++){
		roll2[i]=roll[i];
		if(roll2[i]==roll[i+1]){
			continue;
		}
		else printf("%d,",roll[i]);
	}
	return 0;
}
