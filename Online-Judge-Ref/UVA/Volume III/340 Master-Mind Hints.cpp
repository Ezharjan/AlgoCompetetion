/* 340 Master-Mind Hints Accepted C++ 0.028 2011-02-12 08:39:24 */
#include<stdio.h>
void check(int pass[],int guess[],int n){
	int i,j;
	int a,b;
	int used_p[1000]={false};
	int used_g[1000]={false};
	for(i=a=0;i<n;i++)
		if(pass[i]==guess[i]){
			a++;
			used_p[i]=used_g[i]=true;}
	for(b=i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(!used_p[i]&&!used_g[j])
				if(pass[i]==guess[j]){
					b++;
					used_p[i]=used_g[j]=true;}
	printf("    (%d,%d)\n",a,b);
}
int main(){
	int n;
	int count=1;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int password[1000];
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&password[i]);
		printf("Game %d:\n",count++);
		while(true){
			int guess[1000];
			for(i=0;i<n;i++)
				scanf("%d",&guess[i]);
			if(guess[0]==0) break;
			check(password,guess,n);
		}
	}
	return 0;
}
/*

Master-Mind�O�@��2�ӤH���C���C���N�O�ǥͱ`�����XA�XB���C���]�W�h�γ\���ǳ\���P�^�C�䤤�@�ӤH����X�D�̡A�L��@��1��9�Ʀr��@�K�X�]�i�H���ơ^�C�t�@�ӤH�����D�̡A�L�n�h�q�K�X����C���D�̨C���q����A�X�D�̥H�Y�خ榡�^���L�o���q�����G�C

�b�C���}�l���e�A�������ĳ�K�X�����סA���]�On�C�b�X�D�̳]�w�K�X�]s1,s2,...sn�^��A�Ѹ��D�̨Ӳq�]g1,g2,...gn�^�C�p�G�P�˦�mgi=si�A�����D�̱o��@��A�C�p�Ggi=sj�A��i������j�A�����D�̱o��@��B�C�Ъ`�N�G���ެO�oA�αoB�A�C��gi�̦h�u�������@��sj�A�ӥB�oA��oB�u���C�|�һ����G�K�X��1 2 3 4�A�Y�q�D�̲q1 1 5 6�A���X�D�����Ӧ^��1A0B�A�Ӥ��O0A1B�C

�p�G�Y�Ӳq���o�� nA0B�A���N�N��q�D�̧����q���K�X�F�C

Input

��J�t���h�մ��ո�ơC�C�մ��ո�ƪ��Ĥ@�C�t��1�ӥ����N�A�N��K�X�����סC�ĤG�C��N��1��9���Ʀr�A�N��K�X�C���U�Ӧ��ƶq�������q���A�C�Ӥ@�C�A��t��N��1��9���Ʀr�C�Y���q����N�ӼƦr����0�A�N���մ��ո�Ƶ����C

N=0�N���ӿ�J�����C�аѦ�Sample Input�C

Output

��C�@�մ��ո�ơA��X�o�O�ĴX�աC�M���X�X�D�̦^���q�D�̦U�Ӳq�������G�O�XA�XB�A�H�]A,B�^���Φ���ܡC�аѦ�Sample Output�C

Sample Input

4
1 3 5 5
1 1 2 3
4 3 3 5
6 5 5 1
6 1 3 5
1 3 5 5
0 0 0 0
10
1 2 2 2 4 5 6 6 6 9
1 2 3 4 5 6 7 8 9 1
1 1 2 2 3 3 4 4 5 5
1 2 1 3 1 5 1 6 1 9
1 2 2 5 5 5 6 6 6 7
0 0 0 0 0 0 0 0 0 0
0

Sample Output

Game 1:
    (1,1)
    (2,0)
    (1,2)
    (1,2)
    (4,0)
Game 2:
    (2,4)
    (3,2)
    (5,0)
    (7,0)

*/