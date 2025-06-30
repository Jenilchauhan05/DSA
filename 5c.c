#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    
    char sorted1[20], sorted2[20];
    strcpy(sorted1, str1);
    strcpy(sorted2, str2);

    sortString(sorted1);
    sortString(sorted2);

    return strcmp(sorted1, sorted2) == 0;
}

int main() {
    int n;
    printf("Enter The Number Of Words: ");
    scanf("%d", &n);
    
    char words[n][20]; 
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i);
        scanf("%s", words[i]);
    }

    int randomIndex = rand() % n;
    printf("Write the anagram of %s: ", words[randomIndex]);
    
    char userInput[20];
    scanf("%s", userInput);
    
    if (areAnagrams(words[randomIndex], userInput)) {
        printf("Correct! '%s' is an anagram of '%s'.\n", userInput, words[randomIndex]);
    } else {
        printf("Incorrect. '%s' is not an anagram of '%s'. Try again!\n", userInput, words[randomIndex]);
    }
    
    return 0;
}