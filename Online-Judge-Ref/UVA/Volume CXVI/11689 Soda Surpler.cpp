/* 11689 Soda Surpler Accepted C++ 0.016 2011-01-31 09:04:25 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		for(i=1;i<=n;i++){
			int e,f,c;
			unsigned long long total=0;
			scanf("%d%d%d",&e,&f,&c);
			e+=f;
			while(true){
				if(e/c==0)
					break;
				total+=e/c;
				f=e/c;
				e%=c;
				e+=f;}
			printf("%llu\n",total);
		}
	}
	return 0;
}
/*

Tim �O�@�ӫD�`�R�ܨT�����H�C�ѩ�L�S�����A�ҥH�L�n�ܨT�����ߤ@��k�N�O�����ŨT���~�l�A�M�᮳�h�^���������A�h�R�s�T���ӳܡC���F�L�ۤv�ܧ����Ų~�l�ATim�]�|���W�h�����O�H�ܧ����Ų~�l�C���@�ѡA�L�D�`�����A�L�n�ɥi�઺�ܨT���A����L�o�������@�~����C

Input

��J����1�C���@�Ӿ��N�A�N��H�U���h�ֲմ��ո�ơC

�C�մ��ո��1�C�A�t�� 3 �Ӿ��  e,f,c �Ce�]0 <=  e < 1000�^�N��Tim�@�}�l�֦����Ų~�l�ƥءAf�]0 <=  f < 1000�^�N��Tim�b�o�@�ѥL�b��W�����쪺�Ų~�l�ƥءAc�]1 <  c < 2000�^�N��h�֭ӪŲ~�l�i�H���@�~�s���T���C

�аѦ�Sample Input�C

Output

��C�@�մ��ո�ƿ�X�@�C�A�N�����W�\�U�M�ħ����̵u���Z���C

Sample Input 

2
9 0 3
5 5 2

Sample Output 

4
9
 
*/