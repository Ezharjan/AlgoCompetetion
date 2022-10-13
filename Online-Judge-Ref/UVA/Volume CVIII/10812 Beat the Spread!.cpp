/* 10812 Beat the Spread! Accepted C++ 0.016 2011-01-26 08:31:35 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		for(i=1;i<=n;i++){
			int s,d;
			int x,y;
			scanf("%d%d",&s,&d);
			if(((s+d)&1)!=0){
				puts("impossible");
				continue;}
			x=(s+d)/2;
			y=s-x;			
			if(x<0||y<0)
				puts("impossible");
			else
				printf("%d %d\n",x,y);
		}
	}
	return 0;
}
/*

�W�ŬפS�ӤF�A���F���o�����𮧮ɶ��A�j�a�N�ӤU�`�̫᪺���G�|�p��C�j�a�U�`���ؼЬ��ⶤ�̫᪺���ƩM�A�Ϊ̨ⶤ�̫���Ʈt������ȡC 
���A�o2�ӭȡA�A����X�o2���̫᪺�o���O�h�ֶܡH

Input

��J���Ĥ@�C���@�Ӿ�ơA�N��H�U���h�ֲմ��ո�ơC

�C�մ��ո�Ƥ@�C�A��2�Ӥj�󵥩� 0 ����� s, d�As �N����ɵ�����2�����ƪ��`�M�A d �N����ɵ�����2�����Ʈt������ȡC

Output

��C�մ��ո�ƿ�X�@�C�A�]�t2�Ӿ�ƥN����ɵ����ɳo2�������ơA���Ƥj���b�e�C�p�G�S���o�˪����ơA�п�X�uimpossible�v�C 

�аO�o�G�������y�����Ƥ@�w�O�j�󵥩� 0 ����ơC

Sample Input  

4
40 20
20 40
5 1
100 1

Sample Output

30 10
impossible
3 2
impossible
 
*/