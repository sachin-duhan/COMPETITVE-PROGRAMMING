#include <stdio.h>
#include <string.h>

int main()
{
    //code
    char a[100];
    int index, i, j;
    long int tcase;
    scanf("%ld", &tcase);
    for (int t = 0; t < tcase; t++)
    {
        index = 0;
        scanf("%s", a);
        for (i = 1; i < strlen(a); i++)
        {
            if (a[i] < a[index])
                break;

            if (a[index] < a[i])
                index = i;
        }
        a[index] = ' ';

        int ind = 0;
        while (a[ind] == 48 || a[ind] == 32)
            ind++;
        long int minNumber = 0;
        for (int j = ind; j < strlen(a); j++)
            if (a[j] != 32)
            {
                minNumber = minNumber * 10 + (a[j] - '0');
            }
        // printf("%c",a[j]);
        printf("%ld\n", minNumber);
    }
    return 0;
}