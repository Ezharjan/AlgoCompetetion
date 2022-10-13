#include <stdio.h>
int main()
{
    int c;
    while (scanf("%d", &c) == 1)
    {
        int i, j;
        int n;
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &n);
            double avg;
            int total;
            int m[1000];
            for (avg = i = 0; i < n; i++)
            {
                scanf("%d", &m[i]);
                avg += m[i];
            }
            avg /= n;
            for (total = i = 0; i < n; i++)
                if (m[i] > avg)
                    total++;
            printf("%.3lf%%\n", (double)total / n * 100);
        }
    }
    return 0;
}