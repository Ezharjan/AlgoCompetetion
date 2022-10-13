/* 256 Quirksome Squares Accepted C++ 0.832 2011-02-12 06:26:10 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i,j;
		int max,middle;
		for(i=max=1;i<=n;i++,max*=10);
		for(i=middle=1;i<=n/2;i++,middle*=10);
		for(i=0;i<max;i++){
			int m1,m2;
			m2=i%middle;
			m1=(i-m2)/middle;
			if((m1+m2)*(m1+m2)==i)
				printf("%0*d\n",n,i);
		}
	}
	return 0;
}
/*

3025�o��4��Ƭ۷�S�O�C�p�G�A��L�q�������}�A�|�o��2�Ӫ��׬ۦP����30,25�C�ӥB��2�ƩM������굥���Ӫ��ơA�ڭ̺ٳo�ؼƬ�quirksome number�C

(30+25)2=3025

�o�Ӱ��D�O�G���AN��ơ]N��2,4,6,8�^�A�n��X�ŦX�H�W�ʽ誺�Ҧ��ơC
For example�G4��ƴN�O�q0000��9999�C�`�N�G�Ʀr�e�誺0�]�n��b���C�]�N�O��0001���� (00+01)2 �A�O�@��4��ƪ�quirksome number�C

Input

��J�i��]�t�F�n�X�C���ո�ơA�C�@�C�u���@�ӼƦrN�]N=2,4,6,8�^�A�N��n�D���O�X��ƪ�quirksome number�C

Output

��C�@�ӿ�JN�A�A���ӭn��X�Ҧ�N��ƪ�quirksome number�A�C�Ӥ@��A�Ѥp��j�ƦC�C�`�N�G�Ʀr�e�誺0���i�����A�Ҧp2��Ƥ���quirksome number 01���i�u��X1�C


Sample Input

2
2

Sample Output

00
01
81
00
01
81

*/