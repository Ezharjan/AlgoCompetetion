/* 155 All Squares Accepted C++ 0.012 2011-02-09 13:57:42 */
#include<stdio.h>
void seq(int xx,int yy,int k,int *m,int x,int y){
	if(xx-k<=x&&xx+k>=x&&yy-k<=y&&yy+k>=y)
		(*m)++;	
	if(k>1){
		if(x>xx&&y>yy) seq(xx+k,yy+k,k/2,m,x,y);
		if(x>xx&&y<yy) seq(xx+k,yy-k,k/2,m,x,y);
		if(x<xx&&y<yy) seq(xx-k,yy-k,k/2,m,x,y);
		if(x<xx&&y>yy) seq(xx-k,yy+k,k/2,m,x,y);
	}
}
int main(){
	int k,x,y;
	while(scanf("%d%d%d",&k,&x,&y)==3){
		if(k==0&&x==0&&y==0) break;
		int total=0;
		seq(1024,1024,k,&total,x,y);		
		printf("%3d\n",total);
	}
	return 0;
}
/*

�b�X��W�A���󥿤�γ����@�Ӱߤ@�������I�C�b�e����l�u�������W�A�u���b����Ϊ�������_�Ʈɤ~���ߡC�]������@�ө_�Ƴ��i�H�g��2k+1�C�ҥH�Y�ڭ̩w�q�Y�@�ӥ���Ϊ��j�p��k�A�]�N�O��ܥL�������2k+1�C�{�b�ڭ̭n�̷ӤU�����W�h�өw�q�@�ӥ���ΩҺc�����ϮסG

�̤j������Τj�p��k�]�]�N�O�����2k+1�^�åB�Q��m�b�@�Ӥj�p��1024������Ϊ��������C�]�]�N�O����ӥi�H�ϥΪ��ϰ쬰�@�����2049������ΡA�p�H�y�Ъ�ܡA���ϰ쥪�W���y�Ь��]0,0�^�A�k�U���y�Ь��]2048,2048�^�^ 
�i�H���\�ϥΪ�����Τj�p�̤p��1,�̤j��512�C�]�� 1<= k <= 521�C 
�Ҧ� k>1 ������ΡA�H��4�Ө��������I�U���@�Ӥj�p�� k div 2 ������Ρ]�b�o��div�����O��ƪ����k�A�Ҧp�G9 div 2 = 4�^ 
�]���A���A�@��k�ȡA�ھڥH�W���W�h�A�ڭ̥i�H�e�X�@�Ӱߤ@���ϮסC�ӿù��W���C�@���I�i�ศ�b0�өΦh�ӥ���Τ��C�]�ڭ̩w�q�Y�I��n���b��W�A��������b������Τ��^�C�ҥH�p�G�̤j������Ϊ�k=15�A�ڭ̥i�H�e�X�H�U���ϮסG

�g�@�ӵ{���AŪ�Jk�άY�@���I���y�СA��X���I�`�@�Q�h�֭ӥ���Ωҥ]��C

Input

�C�մ��ո�Ƥ@�C�A�C�C��3�Ӿ�ơC���O�N��k�Τ@���I���y�СC�̫�@�C�����e��3��0�A�N���J�����C

Output

�C�մ��ո�ƿ�X�@�C�C��X���I�`�@�Q�h�֭ӥ���Ωҥ]��A��X���׬�3�A�a�k����C

Sample Input

500 113 941
300 100 200
300 1024 1024
0 0 0

Sample Output

  5
  0
  1

*/