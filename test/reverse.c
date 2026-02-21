#include<stdio.h>
void reversal( char *str){
char *start= str;
char *end = str;
while(*str!='\0'){
    end++;
    str++;
}
end--;
char temp;
while(start<end){
    
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
}

}
int main(){
char str[25];
char *ptr = str;
printf("enter the string\n");
fgets(str, sizeof str, stdin);
while(*ptr!='\0'){
    if(*ptr=='\n'){
        *ptr='\0';
    }
 ptr++;
}
reversal(str);
//printing
printf("%s\n", str);  



return 0;
}