#include <stdio.h>
int main(){
	int i,j,k=0,n,m;
	printf("Enter the number of students in section A : ");
	scanf("%d",&n);
	printf("Enter the number of students in Section B : ");
	scanf("%d",&m);
	
	int SA[n],SB[m];
	int comb[n+m];
	printf("Enter the role number of Section A Students : ");
	for(i=0;i<n;i++){
		scanf("%d",&SA[i]);
	}
	printf("ENter the number of students in section B : ");
	for(i=0;i<m;i++){
		scanf("%d",&SB[i]);
	}
	for(i=0;i<n;i++){
		comb[i]=SA[i];
	}
	for(j=i;j<n+m;j++){
		comb[j]=SB[k];
		k++;
	}
	printf("The combined section list is : ");
	for(i=0;i<n+m;i++){
		printf("%d,",comb[i]);
	}
	
}
