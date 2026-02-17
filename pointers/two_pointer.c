#include<stdio.h>
void reverse(int n, int arr[]){
    int temp;
int *ptr1= arr; //start
arr = arr + 6-1;
int *ptr2 = arr; //end
while(ptr1<ptr2){
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    ptr1++;
    ptr2--;
}



}
int main() {
    // performing the swapping and traversal logic
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n =6;
    reverse(n, arr); 
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);

    }
    return 0;
}