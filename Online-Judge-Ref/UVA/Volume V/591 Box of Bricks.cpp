/* 591 Box of Bricks Accepted C++ 0.012 2011-01-26 11:46:01 */
#include<stdio.h>
int main(){	
	int n,data;	
	data=1;
	while(scanf("%d",&n)==1&&n!=0){
		int i,sum,total;
		int m[50];
		for(i=sum=0;i<n;i++){
			scanf("%d",&m[i]);
			sum+=m[i];
		}		
		sum/=n;			
		for(i=total=0;i<n;i++)
			if(sum>m[i])
				total+=sum-m[i];
			else
				total+=m[i]-sum;
		total/=2;
		printf("Set #%d\n",data++);
		printf("The minimum number of moves is %d.\n",total);
		putchar('\n');		
	}
	return 0;
}
/*

3�����p�����w���L������n��A�L�`�O�����|�b�@�_�Φ����פ��@�������C�M��L���G�o�O�@����C5�����n�n�p��ť��F�N��p�����G�u�����𰪫����ӭn�@�ˤ~��C�p��ť�Fı�o���D�z��O�M�w�n�h�ʤ@�Ǥ���ϩҦ�����諸���פ@�ˡC�p�U�ϡC�ѩ�p���O���i�k���p�ġA�L�Q�n�h�ʳ̤p�ƥت�����H�F���o�ӥت��A�A�����U�L�ܡH

Input

��J�]�t�n�X�ո�ơA�C�ո�Ʀ�2��A�Ĥ@�榳�@�ӼƦrn�A�N���X�����C�ĤG�榳n�ӼƦr���O�N��on����������hi�C�A�i�H���]1<=n<=50  1<=hi<=100
������`�Ƥ@�w�i�H�㰣���n�A�]�N�O���@�w�i�H�ϩҦ��������P�˰��סC
�p�G��J��n=0�A�N���J�����C  

Output

��C�@�տ�J��ơA������X�@��o�O�ĴX�մ��ո�ơA�U�@�欰"The minimum number of moves is k." k�b�o�̴N�O�ݷh�ʤ���̤p���ƥإH�ϩҦ��������P�@���סC�C�մ��ո�ƫ��ЪŤ@��C�аѦ�Sample Output.  

Sample Iutput

6
5 2 4 1 7 5
3
1 1 1
0

Sample Output

Set #1
The minimum number of moves is 5.

Set #2
The minimum number of moves is 0.

*/
