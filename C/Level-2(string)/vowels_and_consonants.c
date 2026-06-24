#include <ctype.h>
#include <stdio.h>

void vowels_and_consonants(const char str[])
{
    int vowel = 0;
    int consonant = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower((unsigned char)str[i]);

        if (isalpha((unsigned char)str[i]))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("the no of vowels are %d\n", vowel);
    printf("the no of consonants are %d\n", consonant);
}

int main(void)
{
    char str[100];

    if (scanf("%99s", str) == 1)
    {
        vowels_and_consonants(str);
    }

    return 0;
}