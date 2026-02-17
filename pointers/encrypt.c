#include<stdio.h>
void decode(int n, int code[]){

    for(int i=0; i<n; i++){
        *code = *code + 5;
        *code++;
    }


}
int main(){

    int code[] = {1, 2, 3, 4, 5, 6};
    int n=6;
    decode(n, code);
    for(int i=0; i<n; i++){
      printf("decrypted: %d \n", code[i]);
    }
    

}