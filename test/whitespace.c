#include<stdio.h>
void whitespace(char *str){
while(*str!='\0'){
    if(*str==32){
        *str=35;
    }
    str++;
}
}

int main(){

    char str[50];
    printf("Enter the string\n");
    fgets(str, sizeof str, stdin);
    whitespace(str);
    printf("%s", str);

}