#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    
    printf("Enter the number of products ");
    scanf("%d", &n);
    
    int p[n];
    int k[100][2]; 
    
    
    for (i = 0; i < n; i++) {
    	printf("Enter the product number %d : ",i+1);
        scanf("%d", &p[i]);
    }
    
    for (i = 0; i < 100; i++) {
        k[i][1] = 0;
    }
    
    
    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < count; j++) {
            if (k[j][0] == p[i]) {
                k[j][1]++; 
                found = 1;
                break;
            }
        }
        
        if (!found) {
            k[count][0] = p[i];
            k[count][1] = 1;
            count++;
        }
    }
    

    int mcount = k[0][1];
    int mfp = k[0][0];
    for (i = 1; i < count; i++) {
        if (k[i][1] > mcount) {
            mcount = k[i][1];
            mfp = k[i][0];
        }
    }
    
    printf("The most frequently sold product ID is %d, sold %d times.\n", mfp, mcount);
    
    return 0;
}

