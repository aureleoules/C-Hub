#include <stdio.h>

int main() {
   int spc,rows;
   printf("Number of rows: ");
   scanf("%d",&rows);
   rows += 3;
   for(int i = 1; i <= rows; i++) {
        for(int k = rows; k >= 1; k--) {
            printf(" ");
        }        
        for(int j = 1; j <= i; j++) {
	        printf("★ ");
        }
        printf("\n");
        rows--;
    }
    return 0;
}