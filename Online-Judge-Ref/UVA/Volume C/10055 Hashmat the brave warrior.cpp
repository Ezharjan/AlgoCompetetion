/* 10055 Hashmat the Brave Warrior Accepted C++ 0.080 2011-01-10 14:58:47 */
#include<stdio.h>
int main(){
	unsigned long long a,b;
	while(scanf("%llu%llu",&a,&b)==2){		
		if(a>=b)
			printf("%llu\n",a-b);
		else
			printf("%llu\n",b-a);
	}
	return 0;
}
/*

Hashmat�O�@�ӫi�����N��A�L�a�ۦ~�����h�L�q�o�ӫ������ʨ�t�@�ӫ����P�ĤH��ܡC�b���M���e�L�|�p��v��P�Ĥ�h�L���ƥخt�Z�A�ӨM�w�O�n�}���Τ��}���CHashmat���h�L�Ƶ����|��ĤH���h�L�Ƥj�C

Input

�C�մ��ո��1�C�A��2�Ӿ�ơA�N��Hashmat�μĤH���h�L�ƩΤϤ��C�o�ǼƤ��|�W�L232�C

Output

��C�մ��ո�ƽп�XHashmat�P�ĤH�h�L�ƥت��t�]���ơ^�C

Sample input

10 12
14 10
100 200

Sample Output

2
4
100

*/