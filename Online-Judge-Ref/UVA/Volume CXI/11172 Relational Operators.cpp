/* 11172 Relational Operator Accepted C++ 0.012 2011-01-31 07:39:58 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		for(i=1;i<=n;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			if(a-b>0)
				puts(">");
			else if(a-b==0)
				puts("=");
			else
				puts("<");
		}
	}
	return 0;
}
/*

���ǹB��l�]operator�^�O�Ψ��ˬd��ӼƭȤ��������Y�A�o�عB��l�٬����Y�B��l�]relational operators�^�C ���A��ӼƭȧA���u�@�N�O�n��X���̤��������Y�O(1)�Ĥ@�Ӥj��ĤG�� (2)�ĤG�Ӥp��Ĥ@�� (3)��Ӥ@�ˤj�C 

Input

��J���Ĥ@�C���@�Ӿ�ƥN��@���h�ֲմ��ո�ơC

���U�ӨC�C����Ӿ�� a �M b �] |a|,|b| < 1000000001�^�C 

Output

���C�մ��ո�ơA��X�A">", "<" �� "="�A�N��ӤG�Ʀr�����Y�C

Sample Input  

3
10 20
20 10
10 10

Sample Output

<
>
=
 
*/