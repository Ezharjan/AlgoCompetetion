#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int n, t;
    int maxx, minn;
    scanf("%d", &n);
    scanf("%d", &t);
    maxx = -1000000001; minn = t;
    for (int i = 1; i < n; i++) {
        scanf("%d", &t);
        // �ȸ��µ�ǰ�����ֵ
        maxx = maxx < t - minn ? t - minn : maxx;
        // �ٸ��µ�ǰ��Сֵ
        minn = minn > t ? t : minn;
    }
    printf("%d\n", maxx);
}