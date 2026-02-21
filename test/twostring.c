#include<stdio.h>
void strcpyy(const char *str, char *str1){
char temp;
while(*str!='\0'){
    temp = *str;
    *str1= temp;
    str1++;
    str++;
}
*str1='\0';

}
int main() {
    char str[40];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);
    char str1[40];



strcpyy(str, str1);
printf("the string pasted: %s \n", str1);

}