/* 482 Permutation Arrays Accepted C++ 0.012 2011-02-16 11:48:35 */
#include<stdio.h>
char m[100000][100];
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		bool first=true;
		for(i=1;i<=n;i++){
			if(!first)
				putchar('\n');
			else first=false;			
			int temp[10000]={0};
			int j,max;
			char c;
			max=j=0;
			while(scanf("%d%c",&temp[j++],&c)==2){
				if(max<temp[j-1])
					max=temp[j-1];
				if(c=='\n') break;}
			j=0;
			while(scanf("%s%c",&m[temp[j++]-1],&c)==2)
				if(c=='\n')	break;
			for(j=0;j<max;j++)
				printf("%s\n",m[j]);
		}
	}
	return 0;
}
/*

�b�ܦh�q�����D���A�`�`�|��@�Ӱ}�C����ư��@�Ƿh�ʡC�]�N�O���}�C������ƳQ���s�ƦC�C���@�ӱƦC�}�C��ƪ���k�O�Υt�@�Ӻ٬����ް}�C�]index array�^�ӧ������C���]x�O�n�Q���s�ƦC���}�C�A��x'�O���s�ƦC�᪺�}�C�A�������Ӧ��@�����Y�s�b��x�Mx'�����A�ϱox'i=xpi�A�ӯ��ް}�C�N�O�O���o�����Y�Ϊ��C

���F�קK�~���D�N�A�H�Ĥ@��Sample Input, Sample Output�����G���ް}�C��3 1 2�A�N���U�Ӫ��B�I�����Ӥ��O��X���3�C�B��1�C�B��2�C�C

Input

��J���Ĥ@�C���@�Ӿ�ơA�N��H�U���X�մ��ո�ơC�C�մ��ո��2�C�A��1�C�����ް}�C�A�]�t�F 1~n ����ơ]�H�Y�@�رƦC�覡�X�{�^�A�b�o��n�N�O�}�C����ƪ��ƥءC��2�C�h�]�t�Fn�ӯB�I�ơC���ո�ƶ��Ť@�C�C�аѦ�Sample Input

Output

��C�@�մ��ո�Ʈھگ��ް}�C�����ǿ�X�B�I�ơA�C�@�ӯB�I�Ƥ@�C�A�B�B�I�ƪ��˦������M��J���@�ˡC���ո�ƶ���ЪŤ@�C�C

Sample Input

2

3 1 2
32.0 54.7 -2

3 2 1
32.0 54.7 -2

Sample Output

54.7
-2
32.0

-2
54.7
32.0

*/