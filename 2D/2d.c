//Sum of 2 -2d arrays
#include<stdio.h>
void arraykroprint(int a, int b, int arr3[][b]){
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        printf("the element in the 3rd array-> arr3[%d][%d] is %d\n", i, j, arr3[i][j]);
    }
}


}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a==c && b==d){
       int arr1[a][b], arr2[c][d]; //initialized the array
       for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("The element: %d %d\n",i, j );
            scanf("%d", &arr1[i][j]);
        }
       }
       printf("Enter the elment in the 2nd matrix\n");
       for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            printf("The element is: %d %d\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
       }
       int arr3[a][b];
       //
       for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
       }
       arraykroprint(a, b, arr3);
        
    }
    else{
        printf("Enter the a, b, c, d again \n");

    }
}