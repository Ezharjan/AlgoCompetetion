/* 913 Joana and the Odd Numbers Accepted C++ 0.012 2011-01-26 09:53:46 */
#include<stdio.h>
int main(){
	unsigned long long n;
	while(scanf("%llu",&n)==1){
		unsigned long long sum=(n*n+n*2-5)/2*3;
		printf("%llu\n",sum);
	}
	return 0;
}
/*

Joana���w������_�ƪ��C���C���@�ѡA�o�}�l�g�A�C�C���O�_�ơA�p�U��C 

 13 5 79 11 13 15 1719 21 23 25 27 29 31...�b�Y�@�CJoana�g�U�F55�ө_�ƼƦr�A�A�i�H�ݥX�ӦC�̫�3�ӼƦr���M�ܡH���A�@�ӼƦrN�A�N��Y�@�C��N�ө_�ƼƦr�A�A�����ȬO��ӦC�̫�T�Ӽƥ[�_�ӡC��J���� �G

��J�t���h�մ��ո�ơC

�C�մ��ո�Ƥ@�C�A���@�ӼƦr N�A��ܬY�@�C�� N �ө_�ƼƦr�]1 < N < 1000000000�^�C 

��X���� �G

��C�մ��ո�ơA��X�ӦC���̫�T�ӼƦr���M�C�����D���O�ҤT�ӼƦr���M�@�w�p��263�C

�d�ҿ�J �G 

3
5
7

�d�ҿ�X �G

15
45
87

���� �G

* ����½Ķ�GLucky ��

�X�B �G

Uva ACM 913 (�@�̡GMAPLEWING) 

*/