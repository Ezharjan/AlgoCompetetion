#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int i;
        for (i = 1; i <= n; i++)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            if (a - b > 0)
                puts(">");
            else if (a - b == 0)
                puts("=");
            else
                puts("<");
        }
    }
    return 0;
}