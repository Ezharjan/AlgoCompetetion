/* 530 Binomial Showdown Accepted C++ 0.012 2011-01-30 15:13:48 */
#include<stdio.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		if(n==0&&m==0)
			break;
		unsigned long long sum;
		unsigned long long i,j;
		if(m>n-m)
			m=n-m;
		for(i=sum=1,j=n;i<=m;i++,j--)
			sum*=j,sum/=i;
		printf("%llu\n",sum);
	}
	return 0;
}
/*

�qN�ӪF�褤���XM�ӪF�誺��k�ơ]���ޱƦC�����ǡ^�O�G


�ЧA�g�@�ӵ{����XC�C�A�i�H���]�A������C���|�W�X int ���d��A�]�N�O�@�w�p��231�C

��J���� �G

�C�մ��ո�Ƥ@�C�A��2�ӥ���� N,M�]N >= 1, 0 <= M <= N�^�C 

N=0�AM=0�N���J�����C

��X���� �G

��XC

�d�ҿ�J �G 

4 2
10 5
49 6
0 0

�d�ҿ�X �G

6
252
13983816

���� �G

* ����½Ķ�GLucky �� �^ �� 

�X�B �G

ACM 530 

*/