/* 587 There's treasure everywhere! Accepted C++ 0.012 2011-02-21 10:42:10 */
#include<stdio.h>
#include<math.h>
int main(){
	int count=1;
	char str[300];
	while(gets(str)){
		if(str[0]=='E') break;
		int i;
		int temp;
		double x,y;
		for(i=temp=x=y=0;str[i]!='\0';i++){
			if(str[i]==','||str[i]=='.'){
				temp=0;
				continue;}
			while(str[i]>='0'&&str[i]<='9')
				temp=temp*10+str[i++]-'0';
			if(str[i]=='N'){				
				if(str[i+1]=='E'){
					x+=sqrt((double)temp*temp/2);
					y+=sqrt((double)temp*temp/2);
					i++;}
				else if(str[i+1]=='W'){
					x-=sqrt((double)temp*temp/2);
					y+=sqrt((double)temp*temp/2);
					i++;}
				else
					y+=temp;}
			else if(str[i]=='E')
				x+=temp;
			else if(str[i]=='W')
				x-=temp;
			else{
				if(str[i+1]=='E'){
					x+=sqrt((double)temp*temp/2);
					y-=sqrt((double)temp*temp/2);
					i++;}
				else if(str[i+1]=='W'){
					x-=sqrt((double)temp*temp/2);
					y-=sqrt((double)temp*temp/2);
					i++;}
				else
					y-=temp;	}			
		}
		printf("Map #%d\n",count++);
		printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
		printf("The distance to the treasure is %.3lf.\n",sqrt(x*x+y*y));
		putchar('\n');
	}
	return 0;
}
/*

�M�_�O²�檺�A�u�n�A���a�Ϫ��ܡC�b�{�Ǥ�������s�N�O�H�_�ä����_�ϥX�W���C���_�ϳq�`Ū�_�ӹ��o�ˡG�u�q���V��}�l�A���˪L����V��3�B�A�A���p�Q�u��11�B�A......�A�̫᩹�j���ۨ�6�B�A�b���̴N�i�H���X�I�ê��_�äF�C�v�o�˪����_�ϧ�_�Ӭ۷���A���O�p�G�A�ܫ�A�A�γ\�|�Q����p��@�U�_�ê���m�A�M�᪽������ӳB���_�C�Ҧp�b�U��k�䪺���_�Ϥ��A�i�D�A�V�_��3�B�A�V�F��1�B�A�A�V�_��1�B�A�A�V�F��3�B�A�A�V�n��2�B�A�̫�V�訫1�B�N�i��F���_�a�I�F�C�A�i�H���ݯu���h���o�����u�]��u�^�A�ӬO�g�L�p��X���_��m�᪽������ӳB�]��u���|�^�C

�A�����ȴN�O�A���A�@�i�u�ǲΡv���a�ϡA�ЧA�g�@�ӵ{����X���_���a�I�H�ζZ���C�a�Ϥ�����V��8�ӡA�p�U�襪�䪺�ϩҥܡC

Input

�C�մ��ո�ơ]�a�ϡ^�@�C�A�̦h200�Ӧr�������סC���e�����_�a�I�����ܡC�Ҧp�G3W�N��V�訫3�B�A17NE�N��V�F�_��17�B�C�U���ܤ����H�r�����j�A�C�C���̫�H.�������C�b�C�C�������|���ťեX�{�C�аѦ�Sample Input�C

�̫�@�C�����e��END�A�N���J�����C

Output

�C�մ��ո�ƿ�X�o�O�ĴX�i�a�ϡA���_�a�I(x,y)�A�H�αq�X�o�I�]�y�СG0,0�^�����_�a�I���Z��d�O�h�֡Cx,y,d��X��p���I��3��C

�C�մ��ո�ƫ�ЪŤ@�C�C�аѦ�Sample Output�C

Sample Input

3N,1E,1N,3E,2S,1W.
10NW.
END

Sample Output

Map #1
The treasure is located at (3.000,2.000).
The distance to the treasure is 3.606.

Map #2
The treasure is located at (-7.071,7.071).
The distance to the treasure is 10.000.�@

*/