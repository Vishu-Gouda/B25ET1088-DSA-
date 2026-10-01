/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[50], str2[50];
    int choice, i, start, len, a;

    printf("1. Substring\n");
    printf("2. Palindrome\n");
    printf("3. Compare\n");
    printf("4. Copy\n");
    printf("5. Reverse\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str);

            printf("Enter starting position: ");
            scanf("%d", &start);

            printf("Enter length: ");
            scanf("%d", &len);

            printf("Substring: ");

            for(i = start; i < start + len; i++)
            {
                printf("%c", str[i]);
            }
            break;

        case 2:
            printf("Enter string: ");
            scanf("%s", str);

            len = 0;

            while(str[len] != '\0')
            {
                len++;
            }

            for(i = 0; i < len / 2; i++)
            {
                if(str[i] != str[len - 1 - i])
                {
                    printf("Not Palindrome");
                    return 0;
                }
            }

            printf("Palindrome");
            break;

        case 3:
            printf("Enter first Name: ");
            scanf("%s", str1);

            printf("Enter second Name: ");
            scanf("%s", str2);

            printf("\nstring 1:%s", str1);
            printf("\nstring 2:%s", str2);

            a = strcmp(str1, str2);

            if(a == 0)
            {
                printf("\nStrings are equal");
            }
            else
            {
                printf("\nStrings are unequal");
            }
            break;

        case 4:
            printf("Enter Name: ");
            scanf("%s", str1);

            strcpy(str2, str1);

            printf("str1 :%s", str1);
            printf("\nstr2: %s", str2);
            break;

        case 5:
            printf("Enter string: ");
            scanf("%s", str);

            printf("Reverse: ");

            for(i = strlen(str) - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}