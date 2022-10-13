/* 541 Error Correction Accepted C++ 0.012 2011-02-17 12:34:41 */
#include<stdio.h>
int main(){
	int m[100][100];
	int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int i,j;
		int x,y;
		int sum;
		bool found_row,found_col;
		bool corrupt=false;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&m[i][j]);
		for(i=0,found_row=false;i<n&&!corrupt;i++){
			for(j=sum=0;j<n;j++) sum+=m[i][j];
			if((sum&1)==1)
				if(!found_row){	found_row=true;	x=i+1;}
				else 
					corrupt=true;}
		for(i=0,found_col=false;i<n&&!corrupt;i++){
			for(j=sum=0;j<n;j++) sum+=m[j][i];
			if((sum&1)==1)
				if(!found_col){	found_col=true;	y=i+1;}
				else	
					corrupt=true;}
		if(corrupt)
			puts("Corrupt");
		else if(found_row&&found_col)
			printf("Change bit (%d,%d)\n",x,y);
		else if(!found_row&&!found_col)
			puts("OK");
		else
			puts("Corrupt");
	}
	return 0;
}
/*

��@�ӥ��L�x�}�C�@�檺�M�P�C�@�C���M���O���ƪ��ɭԡA�ڭ̺ٳo�ةʽ謰�����C

�Ҧp�A�U���O�@�� 4x4 ���@�ӵ����u�}�C 

1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1

�C�@�C���M���O�O2,0,4,2�F�ӨC�@�檺�M���O�O2,2,2,2�C

�A���u�@�Y�O�n�g�ӵ{��Ū�J�x�}�B�ˬd�L���S�������C�p�G�S���A�A�o�ˬd�ण��b�u���ܤ@�Ӧ줸�����p�U�ϥL�����A�p�G����A���o�ӯx�}�N�o�k�����l���]corrupt�^�C

Input

��J�]�t�@�μƭӴ���C
�C�Ӵ��ꪺ�Ĥ@�C�O�@�Ӿ�� n ( n < 100 )�A�N��x�}���j�p�F���U�Ӫ� n �C�A�C�榳 n �ӼƦr�A�Y���x�}�C�b�x�}���u�|�X�{ 0 �� 1�C�� n=0 �ɥN���J�����C

Output

���C�@�ӯx�}�п�X�@�C�C
�p�G�ӯx�}�w�g�O�������A�п�XOK�F
�p�G�g�ѧ��ܲ� i �C�� j �檺�줸�Y�i���������A�п�XChange bit (i,j)�F
�_�h�п�XCorrupt�C 

Sample Input

4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0

Sample Output

OK
Change bit (2,3)
Corrupt

*/