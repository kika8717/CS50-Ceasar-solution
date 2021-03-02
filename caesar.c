#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string k = argv[1];
    if (argc != 2)
    {
        printf("Error. Enter a single command-line argument. \n");
        return 1;
    }
    else  // check if the input is other than a digit
    {
        for (int j = 0; j < strlen(k); j++)
        {
            if (isdigit(k[j]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
            else // command-line is ok
            {
                string p = get_string("plaintext: ");
                printf("ciphertext: ");
                string c = "";  // ciphertext string
                int k1 = atoi(k);  // important to convert the string to int
                for (int i = 0; i < strlen(p); i++)
                {
                    if (isalpha(p[i]))
                    {
                        if (isupper(p[i]))
                        {
                            printf("%c", (((p[i] + k1) - 65) % 26) + 65);
                        }
                        else if (islower(p[i]))
                        {
                            printf("%c", (((p[i] + k1) - 97) % 26) + 97);
                        }
                    }
                    else
                    {
                        printf("%c", p[i]);
                    }
                }
                printf("\n");
                return 0;  // important to return 0, otherwise can not pass the tests
            }
        }

    }
}
