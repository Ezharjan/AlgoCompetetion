/* 11661 Burger Time? Accepted C++ 0.056 2011-01-31 08:56:06 */
#include<stdio.h>
char str[2000005];
int r[1000000];
int d[1000000];
int abs(int a){
	if(a<0)
		return -a;
	return a;
}
int main(){
	int l;
	while(scanf("%d",&l)==1){
		if(l==0)
			break;
		char c=getchar();
		int i,j;
		int len=2147483647;		
		int r_p,d_p;
		gets(str);
		for(i=r_p=d_p=0;str[i]!='\0';i++){
			if(str[i]=='R')
				r[r_p++]=i;
			if(str[i]=='D')
				d[d_p++]=i;
			if(str[i]=='Z'){
				len=0;
				break;}}
		if(len==0){
			puts("0");
			continue;}
		for(i=j=0;i<r_p&&j<d_p;){
			if(abs(r[i]-d[j])<len)
				len=abs(r[i]-d[j]);
			if(r[i]<d[j])
				i++;
			else
				j++;}
		printf("%d\n",len);
	}
	return 0;
}
/*

�j�a�����D�A�b���n�������ǳ��|���t���\�U�C�A�i�H�b���̶R��~���B�����B���ġB�T���v�����C

�����ܦh�ɭ԰��D���O�䤣���\�U�A�ӬO�䤣���ħ��C�b�A�Y�F�\�h�t����A�ݭn�@���ħ��]�O���`���A�]���A���G�i��}�l�k�h�F�C

���A�\�U�M�ħ����b��������m�A�ЧA��X�Y���\�U�M�ħ����̵u���Z���C

Input

��J�t���h�մ��ո�ơC�C�մ��ո��2�C�A�Ĥ@�C�t�� 1 �ӥ����  L �] 1 <= n <= 2000000�^�N���������סC

�ĤG�C������L���r��A��ܪu�ۤ������\�U���ĩЪ���m�C�r�ꪺ���e���U�C���@�G

R�N��o�Ӧ�m���\�U 
D�N��o�Ӧ�m���ħ� 
Z�N��o�Ӧ�m�P�ɦ��\�U���ħ� 
. �N��Ū���m 
�A�i�H���]�C�մ��ո�Ƥ��ܤ֦��@���\�U�M�@���ħ��C

�� L �� 0 �ɡA�N���J�����C�аѦ�Sample Input�C

Output

��C�@�մ��ո�ƿ�X�@�C�A�N�����W�\�U�M�ħ����̵u���Z���C

Sample Input  

2
RD
5
..Z..
10
.R......D.
10
.R..Z...D.
10
...D..R...
25
..D...R.RR...DD...D.R...R

Sample Output

0
1
0
7
0
3
2�@
 
*/