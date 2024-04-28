#include <stdio.h>

#include <string.h>

char input[20]; // to store input string

int l; // to store length of the input string

int flag; // to decide accept or reject the input string

void q2(int i)
{
    if (input[i] == '\0')

        flag = 1;
}
void q1(int i)
{
    if (i < l)
    {
        if (input[i] == '1')
        {
            ++i;

            q2(i);
        }
    }
}

void q0(int i)

{
    if (i < l) // i is less the length of the string

    {

        int k = i;

        if (input[i] == '0')
        {
            k++;

            q0(k);

            q1(k);
        }
        else
        {
            if (input[i] == '1')
            {
                i++;

                q0(i);
            }
        }
    }
}
int main()
{
    printf("\n Enter a string\t");

    gets(input);

    l = strlen(input);

    int i = 0;
    flag = 0;

    q0(i);

    if (flag == 1)

        printf("\n. The string is accepted.");

    else

        printf("\n The string is not accepted.");

    return 0;
}