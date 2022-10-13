#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int t = 1; t <= n; t++)
    {
        int s[100];
        int i, j, m;
        scanf("%d", &m);
        for (i = 0; i < m; i++)
            scanf("%d", &s[i]);

        int cur = s[0];
        int high, low;
        high = low = 0;
        for (i = 1; i < m; i++)
        {
            if (cur < s[i])
                high++;
            else if (cur > s[i])
                low++;
            cur = s[i];
        }
        printf("Case %d: %d %d\n", t, high, low);
    }
    return 0;
}