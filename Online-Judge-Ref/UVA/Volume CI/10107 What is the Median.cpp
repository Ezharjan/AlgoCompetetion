/* 10107 What is the Median? Accepted C++ 0.028 2011-01-07 12:01:32 */
#include<stdio.h>
int main(){
	int s[10001]={0};
	int n;//s[0] empty
	int len=0;
	int i;
	while(scanf("%d",&n)==1){		
		for(i=len;n<s[i];i--)
			s[i+1]=s[i];
		s[i+1]=n;
		len++;
		if((len&1)==0)
			printf("%d\n",(s[len/2]+s[len/2+1])/2);
		else
			printf("%d\n",s[len/2+1]);
	}
	return 0;
}
/*

�b�έp�Ǫ��@�ɤ��A�����ơ]median�^��t�@�ӭ��n������C �ھکw�q�G�����ƴN�O�b�@�s��w�Ѥp��j�ƧǪ��Ʀr���A�Ʀb���������@�ӼơC�Ҧp�G�b{1,3,4,9,11}��4�N�O�����ơC�U�@�����ƭӼƦr�A�ڭ̩w�q�����ƴN�O��󤤶�����2�Ӽƪ��M���H2�]�ӥB�u����Ƴ����^�C�Ҧp�G�b{1,2,3,6,7,8}��{3,6}�O��󤤶���2�ӼơA�ҥH�����ƴN�O(3+6)/2=4�C 

Input

��J�]�t�FN�ӡ]N<10000�^����ơC  

Output

��C�@�ӿ�J�A�п�X��{�b����w��J���ƪ������ơC  

Sample Iutput

1
3
4
60
70
50
2 

Sample Output

1
2
3
3
4
27
4

*/