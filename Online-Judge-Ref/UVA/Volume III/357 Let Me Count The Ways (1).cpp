/* 357 Let Me Count The Ways Accepted C++ 0.016 2011-02-13 06:22:33 */
#include<stdio.h>
int main(){
	unsigned long long way[30001]={0};
	int base[]={1,5,10,25,50};	
	int i,j;
	way[0]=1;	
	for(i=0;i<5;i++)
		for(j=base[i];j<=30000;j++)
			way[j]+=way[j-base[i]];
	int n;
	while(scanf("%d",&n)==1){
		if(way[n]==1)
			printf("There is only 1 way to produce %d cents change.\n",n);
		else
			printf("There are %llu ways to produce %d cents change.\n",way[n],n);
	}
	return 0;
}
/*

�g�L�b�ʳf���q���@���������A�p���o�{�o���W���s���@��17���]cent�A�����f�����A��L�f���έ��ȽаѦҤU����r�����^�A���O�O1��dime�A1��nickel�A�H��2��penny�C�j�ѡA�p���h�K�Q�ө��R���F���o�{�o���W���s����n�S�O17���A�o���O2��nickel��7��penny�C�p���N�b�Q�A���X�صw�����զX�i��ꦨ17���O�H�g�L�J�Ӻ�⤧��A�o�{�@��6�ءC

�A�����D�N�O�G���@�Ӫ��B�A�ЧA�^���@���h�ֺصw���զX���覡�C

p.s ���ꪺ�s���@���H�U�X�صw���H�Ψ䭱�ȡG

penny, 1 cent
nickel, 5 cents
dime, 10 cents
quarter, 25 cents
half-dollar, 50 cents
Input

�C�մ��ո��1�C�A��1�Ӿ��n�]0 <= n <=30000�^�A�N��s�����`���B�C

Output

��C�մ��ո�ƽп�X�@���h�ֺصw���զX�覡�C��X�榡���H�U2�ب䤤���@�C

There are m ways to produce n cents change. 
There is only 1 way to produce n cents change.

Sample input

17 
11
4

Sample Output

There are 6 ways to produce 17 cents change. 
There are 4 ways to produce 11 cents change. 
There is only 1 way to produce 4 cents change.

*/