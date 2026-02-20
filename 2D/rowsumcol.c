#include<stdio.h>
int main(){
    int r, c;
    printf("Row and column: \n");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    
    // Enter elements
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter element: %d%d\n", i, j);
            scanf("%d", &mat[i][j]);  // Fixed: use i,j not r,c
        }
    }
    
    // Row sum
    for(int i=0; i<r; i++){           // Fixed: i<r not i<c
        int rsum=0;
        for(int j=0; j<c; j++){
            rsum = rsum + mat[i][j];
        }
        printf("Row %d sum = %d\n", i, rsum);
    }
    
    // Column sum
    for(int i=0; i<c; i++){
        int csum=0;
        for(int j=0; j<r; j++){
            csum = csum + mat[j][i];  // Fixed: removed scanf, add to csum
        }
        printf("Column %d sum = %d\n", i, csum);
    }
    
    return 0;
}