#include<stdio.h>
int main(){
    int r, c;
    printf("Row and column they should be equal: \n");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    
    // Enter elements
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter element: %d%d\n", i, j);
            scanf("%d", &mat[i][j]);  // Fixed: use i,j not r,c
        }
    }
        
        //performing sum of both diag;
        int sum=0;
        int rsum=0;
        int lsum=0;
for(int i=0; i<r; i++){

    for(int j=0; j<c; j++){
        if(i==j){
            lsum=lsum+mat[i][j];
        }
        if(i+j==r-1){
            rsum=rsum+mat[i][j];
        }
    }
}
    printf("left diagonal sum:%d\n", lsum);
    printf("right diagonal sum:%d\n", rsum);


 return 0;
 }