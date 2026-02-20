#include<stdio.h>
int main(){
    int r, c;
    printf("Row and column \n");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    
    // Enter elements
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("enter element: %d%d\n", i, j);
            scanf("%d", &mat[i][j]);  // Fixed: use i,j not r,c
        }
    }
    int zero_count=0;
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
         if(mat[i][j]==0){
            zero_count++;
         }
        }
    }

    if(zero_count>(r*c)/2){
        printf("sparse_matrix\n");
    }
    else{
        printf("not the sparse mat\n");
    }
return 0;
}