/* 10929 You can say 11 Accepted C++ 0.024 2011-01-31 05:18:06 */
#include<stdio.h>
#include<string.h>
int main(){
	char str[10000];
	bool even;
	while(gets(str)){
		if(strcmp(str,"0")==0)
			break;
		int i;
		int len=strlen(str);
		int even_count,odd_count;
		for(i=len-1,even=true,even_count=odd_count=0;i>=0;i--,even=!even)
			if(even)
				even_count+=str[i]-'0';
			else
				odd_count+=str[i]-'0';
		if((even_count-odd_count)%11==0)
			printf("%s is a multiple of 11.\n",str);
		else
			printf("%s is not a multiple of 11.\n",str);
	}
	return 0;
}
/*

�A�����ȬO�A���A�@�ӥ���� N�A�P�w���O�_�O 11 �����ơC

Input

�C�C��Ʀ��@�ӥ����N�AN �̤j�i��� 1000 ��ơC

�Y N = 0 �N���J�����C

Output

��C�ӿ�J���ơA��X�O�_�� 11 �����ơC��X�榡�аѦ� Sample Output�C

Sample Input  
112233
30800
2937
323455693
5038297
112234
0

Sample Output

112233 is a multiple of 11.
30800 is a multiple of 11.
2937 is a multiple of 11.
323455693 is a multiple of 11.
5038297 is a multiple of 11.
112234 is not a multiple of 11.

*/