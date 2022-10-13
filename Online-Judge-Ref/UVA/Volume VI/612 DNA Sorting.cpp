/* 612 DNA Sorting Accepted C++ 0.136 2011-02-21 11:01:07 */
#include<stdio.h>
#include<string.h>
int main(){
	int d,n,m;
	while(scanf("%d",&d)==1){
		int t;
		bool first=true;
		for(t=1;t<=d;t++){
			scanf("%d%d",&n,&m);
			int count[100]={0};
			char str[100][51];
			int i,j,k,max;
			for(i=0;i<m;i++)
				scanf("%s",str[i]);
			for(i=max=0;i<m;i++)
				for(j=0;str[i][j]!='\0';j++){
					if(str[i][j]=='A') continue;
					for(k=j+1;str[i][k]!='\0';k++)
						if(str[i][j]>str[i][k]){
							count[i]++;
							if(count[i]>max)
								max=count[i];}
				}
			if(!first)
				putchar('\n');
			else first=false;
			for(i=0;i<=max;i++)
				for(j=0;j<m;j++)
					if(count[j]==i)
						printf("%s\n",str[j]);
		}
	}
	return 0;
}
/*

�b�@�Ӧr�ꤤ�A�u���Ƨǡv���{�׬O�H�U�r�����������j�p���Y�ӭp�⪺�C�Ҧp�b�r�� DAABEC���A�u���Ƨǡv���{�׬� 5�A�]��D�񥦥k�䪺4�Ӧr���j�AE�񥦥k�䪺1�Ӧr���j�C�Ӧr��AACEDGG�u���Ƨǡv���{�׬� 1�]�X�G�O�ֱƧǦn���A�ߤ@�����Ƨǵo�ͦbE�MD�����^�A�r��ZYXW�u���Ƨǡv���{�׬� 6�]��n�O�����ƧǪ��ۤϡ^�C

�{�b�A�����ȬO���\�h��DNA�r��Ӱ��ƧǡC�C�Ӧr�ꤤ�ȧt��A,C,G�MT�o4�ئr���C�ƧǪ���h�O�ھڦU�r��u���Ƨǡv���{�סA�Ѥp��j��X�C�b�o�̨C�Ӧr�ꪺ���ק��ۦP�C

Input

��J���Ĥ@�C���@�Ӿ�ƥN��H�U���X�մ��ո�ơC�C�մ��ո�ƪ��Ĥ@�C�t��2�ӥ���� n�]0 < n <= 50�^�M m�]0 < m <= 100�^�An �N��r�ꪺ���סAm �N��r�ꪺ�ƥءC���U�Ӫ� m �C�A�C�C���@�Ӫ��׬� n ���r��C

�Ĥ@�C�βĤ@�մ��ո�ơA�H�ΦU�մ��ո�ƶ������@�ťզC�C�аѦ�Sample Input�C

Output

��C�մ��ո�ƫ��ӡu���Ƨǡv���{�סA�Ѥp��j��X�U�r��C���p�����u2�Ӧr��u���Ƨǡv���{�׬ۦP�A�h���ӥ��̦b��J�������ǿ�X�C

�U�մ��ո�Ƥ����п�X�@�ťզC�A��X�榡�аѦ�Sample Output�C

Sample Input  

2

10 6
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT

2 3
TC
TT
TA

Sample Output

CCCGGGGGGA
AACATGAAGG
GATCAGATTT
ATCGATGCAT
TTTTGGCCAA
TTTGGCCAAA

TT
TC
TA
 
*/