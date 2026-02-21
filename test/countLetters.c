#include<stdio.h>
int countletters(char *str){
//total characters: a
int score=0;
while(*str!='\0'){
    if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u'){
        score++;
    }
    str++;
}
    return score;
}
int main(){
    int count=0;
char str[50];
printf("Enter the string: \n");
fgets(str, sizeof str, stdin);
char *ptr = str;
while(*ptr != '\0'){
    if(*ptr =='\n'){
        *ptr='\0';
        break;
    }
ptr++;
count++;
}
int vowels = countletters(str);
int consonants = count-vowels;
printf("The total vowels: %d\n", vowels);
printf("The total consonants: %d\n", consonants);
return 0;
}