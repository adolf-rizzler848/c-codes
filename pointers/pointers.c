#include<stdio.h>
void exchange(int *aptr, int *bptr){
    int temp;
    temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;

}
int main() {
    int a=10, b=5;
    exchange(&a, &b);
    printf("a becomes: %d \n b becomes: %d\n", a, b);


    return 0;
}