/* 11185 Ternary Accepted C++ 0.016 2011-01-31 08:14:12 */
#include<stdio.h>
int main(){
	long long n;
	char str[50];
	while(scanf("%llu",&n)==1){
		if(n<0)
			break;
		if(n==0){
			puts("0");
			continue;}			
		int index,len;
		unsigned long long k;
		for(k=1,index=0;k<=n;k*=3,index++);
		str[len=index]='\0';
		for(index=0;index<len;index++)
			str[index]='0';
		for(k/=3,index=0;n>0;k/=3,index++)
			while(n>=k){
				str[index]++;
				n-=k;}
		printf("%s\n",str);
	}
	return 0;
}
/*

���A�Q�i�쪺�Ʀr N�A�ЧA��L�ഫ�� 3 �i��C

Input

��J�]�t�h�մ��ո�ơC�C�մ��ո�Ƥ@�C��1�Ӿ�� N�]0 <= N < 1000000001�^

�� N<0 �ɡA�N���J�����C

Output

�C�մ��ո�ƿ�X�@�C�A��X N �� 3 �i���ܡC

Sample Input 
0
1
2
3
10
100
1000
-9

Sample Output 

0
1
2
10
101
10201
1101001
 
*/