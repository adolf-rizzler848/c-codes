#include<stdio.h>
int stringlength(char str[]){
    char *ptr = str;
    while(*ptr!= '\0'){
        ptr++;
    }
    int length = ptr - str;
    return length;

}
int main() {
    char str[100];
    fgets(str, 100, stdin);
    int length1 = stringlength(str);
    printf("%d", length1);

}