/* 10783 Odd Sum Accepted C++ 0.016 2011-01-26 06:38:29 */
#include<stdio.h>
int main(){
	int t;
	int count;
	count=1;
	while(scanf("%d",&t)==1){
		int i;
		for(i=1;i<=t;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			if((a&1)==0)
				a++;
			if((b&1)==0)
				b--;
			printf("Case %d: %d\n",count++,((a+b)*((b-a)/2+1))/2);

		}
	}
	return 0;
}
/*

���A�@�ӽd�� a �� b �A�ЧA��X a �P b �����Ҧ��_�ƪ��M�C

�Ҧp�G�d�� [3, 9] ���Ҧ��_�ƪ��M�N�O 3 + 5 + 7 + 9 = 24 �C

Input

��J���Ĥ@�C���@�Ӿ�� T �]1��T��100�^�A�N��H�U���h�ֲմ��ո�ơC

�C�մ��ո�Ƭ���C�A�]�t��Ӽ� a �P b �]0��a��b��100�^�C

Output

�C�մ��ո�ƿ�X�@�C�A���e�� a �� b ���Ҧ��_�ƪ��M�C

Sample Input

2
1
5
3
5

Sample Output

Case 1: 9
Case 2: 8

*/