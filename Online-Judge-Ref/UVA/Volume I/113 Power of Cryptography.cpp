/* 113 Power of Cryptography Accepted C++ 0.020 2011-02-09 06:44:37 */
#include<stdio.h>
#include<math.h>
int main(){
	double p;
	int n;
	while(scanf("%d%lf",&n,&p)==2){		
		printf("%.0lf\n",pow(p,(double)1/n));
	}
	return 0;
}
/*

���A��Ӿ�� n�]n >= 1�^�M p�]p >=1�^�A�A�����g�@�ӵ{���ӭp��X p ���� n ����ڡC�b�o�Ӱ��D�̡Ap �ҥi�� kn ���Φ��A�䤤 k ����ơC�]k�]�N�O�A���{���ҭn�D���^

Input

�C�մ��ո��2�C�A��1�C��1�Ӿ�� n�]1 <= n <= 200�^�A��2�C��1�Ӿ�� p�]1 <= p <= 10101�^�C �åB�s�b�@�Ӿ�� k�A�]1 <= k <= 109�^�A�ϱo kn=p�C

Output

�C�մ��ո�ƽп�X k�C

Sample Input

2
16
3
27
7
4357186184021382204544

Sample Output

4
3
1234

*/