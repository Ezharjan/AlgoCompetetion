/* 694 The Collatz Sequence Accepted C++ 0.032 2011-02-22 13:46:10 */
#include<stdio.h>
int main(){
	int r=1;
	long long a,l;
	while(scanf("%lld%lld",&a,&l)==2){
		if(a<0&&l<0) break;
		int count;
		unsigned long long t;
		t=a;
		count=1;
		while(t!=1){
			if((t&1)==0)
				t/=2;
			else{
				if(3*t+1>l)
					break;
				t=3*t+1;
			}
			count++;
		}
		printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",r++,a,l,count);
	}
	return 0;
}
/*

�H�U�o�ӥ�Lothar Collatz�w�q���t��k�i�H���ͤ@�s��ƦC�G

Step��: 
����@�ӥ���Ƣϧ@���o�ӼƦC���Ĥ@���C 
Step��: 
�p�G�ϡע��h����C 
Step��: 
�p�G�Ϭ����ơA�h�ϡעϡ����M�᭫�s�^��Step���C 
Step��: 
�p�G�Ϭ��_�ơA�h�ϡע�*�ϡϢ��M�᭫�s�^��Step���C
�o�Ӻt��k�w�g�Q�ҩ������p�󵥩� 109�ɳo�ӼƦC�̲׳��|�bStep������A���O���ǢϭȦb�o�ӼƦC���|�W�X�\�h�q������ƤW���C�b�o�Ӱ��D���ڭ̷Q�n�p��o�ӼƦC�����סA�ӼƦC���פ��ر��p�G1.�̲׷|�bStep������άO 2.�Y�@���|�bStep���W�X�@�ӯS�w���W���C

Input

��J�]�t�\�h�իݴ���ơA�C�@�C�N��@�իݴ���ơA�C�իݴ���ƥ]�t��ӥ���ơA�Ĥ@�ӼƬ������ϡA�ĤG�ӼƬ��o�ӼƦC���W���ڡA�L�עϩ΢ڳ����|�j��2,147,483,647�]32�줸������ƪ��̤j�ȡ^�A�B�������`�O�p��W���ڡC���J����ӭt�ƮɥN���J�����C

Output

��C�իݴ���ƥ�����X�����ĴX�ա]�q���}�l�^�A�@�ӫ_���A�����Ϫ��ȡA�W���ڪ��ȡA�H�Φ��@�ƦC�����ơC�]�аѦ�sample output�^

Sample Input

3 100
34 100
75 250
27 2147483647
101 304
101 303
-1 -1

Sample Output

 Case 1: A = 3, limit = 100, number of terms = 8
 Case 2: A = 34, limit = 100, number of terms = 14
 Case 3: A = 75, limit = 250, number of terms = 3
 Case 4: A = 27, limit = 2147483647, number of terms = 112
 Case 5: A = 101, limit = 304, number of terms = 26
 Case 6: A = 101, limit = 303, number of terms = 1

*/