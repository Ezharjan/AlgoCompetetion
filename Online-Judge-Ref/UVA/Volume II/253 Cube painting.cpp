/* 253 Cube painting Accepted C++ 0.012 2011-02-12 06:09:33 */
#include<stdio.h>
#include<string.h>
void rotate1(char c[]){
	char temp;
	temp=c[2];
	c[2]=c[1];
	c[1]=c[3];
	c[3]=c[4];
	c[4]=temp;
}
void rotate2(char c[]){
	char temp;
	temp=c[0];
	c[0]=c[1];
	c[1]=c[5];
	c[5]=c[4];
	c[4]=temp;
}
void rotate3(char c[]){
	char temp;
	temp=c[0];
	c[0]=c[2];
	c[2]=c[5];
	c[5]=c[3];
	c[3]=temp;
}
int main(){
	char str[13];
	while(gets(str)){
		char c1[7],c2[7];
		bool found=false;
		strncpy(c1,str,6);
		strncpy(c2,str+6,6);
		c1[6]=c2[6]='\0';
		int i,j,k;
		for(i=1;i<=4&&!found;i++){
			for(j=1;j<=4&&!found;j++){
				for(k=1;k<=4&&!found;k++){
					if(strcmp(c1,c2)==0)
						found=true;
					rotate1(c1);}
				rotate2(c1);}
			rotate3(c1);}
		if(found)
			puts("TRUE");
		else
			puts("FALSE");
	}
	return 0;
}
/*

�ڭ̷Q�n�������W�C��A�ڭ̦��T���C��G�Ŧ�B����B���C������C�@����W�䤤�@���C��C�{�b�A�ڭ̧�����6�ӭ��H1~6�ӽs���A�p�U��Figure 1:

�]���@�Ӥ����6���A�ҥH�ڭ̦�36=729�ؤ��P���覡�ӹϤ���C�M�ӷ�ڭ̩������W���s���ɡA���P�������覡�N�|�֫ܦh�A���O�]������i�H���઺�t�G�C�ЬݥH�U���Ҥl�G�ڭ̥H6�Ӧr���Ӫ�F�@�Ӥ��6�ӭ��W��C��]�r����b,r,g�䤤���@�A���O�N��blue, red, green�^�C��i�Ӧr���N���i���W���C��A�Ҧp�U��Figure 2�N�Orbgggr���ϡAFigure 3�N�Orggbgr���ϡC�Ъ`�N�GFigure 2 �M Figure 3����⪺�覡�O�@�˪��A�p�G�ڭ̧�Figure 2�����¶������V�V�k��90�סA�N�ܦ�Figure 3��������F�C

Input

�C�մ��ո�Ƥ@�C�C�C�C��12�Ӧr���C�e6�Ӧr���N��@�Ӥ���A��6�Ӧr���N��t�@�Ӥ���C�A���{�������P�_�o2�Ӥ���O�_��⪺�覡�O�@�˪��A�]�N�O���A�O�_�i�H�g�ѱ��઺�覡�A�Ϥ@�Ӥ���ܦ��t�@�ӡC

Output

��C�մ��ո�ƿ�X�@�C�C�p�G�Ĥ@�Ӥ���i�H������ܦ��ĤG�Ӥ���A�h��XTRUE�A�_�h��XFALSE�C

Sample Input

rbgggrrggbgr
rrrbbbrrbbbr
rbgrbgrrrrrg

Sample Output

TRUE
FALSE
FALSE

*/