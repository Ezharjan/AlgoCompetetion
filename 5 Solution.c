#include <stdio.h>
int main()
{
    int size[] = {1, 5, 10, 25, 50};
    int DP[8000] = {0};
    int i, j;
    int n = sizeof(size) / sizeof(int);
    DP[0] = 1;
    for (i = 0; i < n; i++)
        for (j = size[i]; j < 8000; j++)
            DP[j] += DP[j - size[i]];
    int t;
    while (scanf("%d", &t) == 1)
        printf("%d\n", DP[t]);
    return 0;
}