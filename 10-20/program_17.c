/*
    Write C program to print all VOWEL and CONSONANT characters separately.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], vowel[100], consonant[100], c;
    
    // Get input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    
    // Initialize vowel and consonant arrays
    vowel[0] = '\0';
    consonant[0] = '\0';

    for (int i = 0; i < len; i++) {
        // Check if the character is a vowel
        if (st  r[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            // Append to vowel array
            c = str[i];
            strncat(vowel, &c, 1);
        } else {
            // Append to consonant array
            c = str[i];
            strncat(consonant, &c, 1);
        }
    }

    // Print vowels and consonants
    printf("Vowels: %s\n", vowel);
    printf("Consonants: %s\n", consonant);

    return 0;
}