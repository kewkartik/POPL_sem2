//Write C program to print all VOWEL and CONSONANT characters separately.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],vowel[100],consonant[100],c;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0;i<len ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            //append to vowel
            c = str[i];
            strcat(vowel, &c);
        }else{
            //append to consonant
            c = str[i];
            strcat(consonant, &c);
        }
    }
    printf("Vowels: %s\n", vowel);
    printf("Consonants: %s\n", consonant);
    return 0;

}