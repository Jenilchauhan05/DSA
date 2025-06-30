// WAP to determine whether the entered character is vowel or not.

#include <stdio.h>

#include <ctype.h> // For isalpha()

int main()
{
    char c;

    // Asking The Character From The User
    printf("Enter The Character You Want To Check::\n");
    scanf(" %c", &c);

    //- isalpha(input) checks if the input is a letter (A-Z, a-z).
    if (isalpha(c))
    {
        // Logic Of Vowel Number
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf(" The Character You Entered Is A 'VOWEL'\n");
        }
        else
        {
            printf(" The Character You Entered Is'NOT VOWEL'\n");
        }
    }
    else
    {
        printf("Invalid input! Please enter letters only.\n");
    }

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)