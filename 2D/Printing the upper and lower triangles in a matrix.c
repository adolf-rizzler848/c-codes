#include<stdio.h>
void upperprint(int a, int b, int arr[][b]){
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        if(i>j)
        printf(" ");

        else
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
}

void lowerprint(int a, int b, int arr[][b]){
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        if(i>=j)
        printf("%d ", arr[i][j]);
        else
        printf("  ");
    }
    printf("\n");
}
}

int main(){
//row and column
int a, b;
int option;
printf("Enter the a-row and b-column\n");
scanf("%d %d", &a, &b);
int arr[a][b];
//enter the elements
for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        printf("the element: %d%d\n", i, j);
        scanf("%d", &arr[i][j]);
    }
}
//upper or lower?
printf("upper or lower matrix?\n for lower eneter:1\n for upper enter:2\n");
scanf("%d", &option);
switch(option) {
    case 1:
        // code
        lowerprint(a, b, arr);
        break;

    case 2:
        // code
        upperprint(a, b, arr);
        break;
        
    default:
    printf("Re-enter the preference \n"); 

}
return 0;
}