#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int T;
    int N, K, i;

    scanf("%ld", &T);

    while (T--)
    {
        scanf("%d %d", &N, &K);

        for (i = 1; i < K + 1; i++)
            printf("%d ", i);
        printf("%d ", N);
        for (; i < N; i++)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}
