/* 10696 f91 Accepted C++ 0.176 2011-01-26 06:32:16 */
#include<stdio.h>
unsigned long long f91(unsigned long long n){
	if(n>100)
		return (n-10);
	else
		return f91(f91(n+11));
}
int main(){
	unsigned long long n;
	while(scanf("%llu",&n)==1&&n!=0){
		printf("f91(%llu) = %llu\n",n,f91(n));
	}
	return 0;
}
/*

McCarthy�O�@�Ӧ��W����T�M�a�C�L�w�q�F�@�ӻ��j����ƥs�� f91 �C����J�@�ӥ����N�åB�̾ڥH�U���W�h�Ǧ^�@�ӥ���ơG

. �p�G N <= 100, ���� f91(N) = f91( f91( N+11) )

. �p�G N >= 101, ���� f91(N) = N-10

�ЧA�g�@�ӵ{���ӭp�� f91

Input

�C�մ��ո�Ƥ@�C�C�t��1�ӥ���� N�] N <= 1000000�^�C��J�̦h��250000�մ��ո�ơC

�Y N=0 �N���J�����C

Output

��C�մ��ո�ƿ�X�@�C f91(N)�A�C��X�榡�аѦ�Sample Output�C

Sample Input 
500
91
0 

Sample Output 

f91(500) = 490
f91(91) = 91

*/