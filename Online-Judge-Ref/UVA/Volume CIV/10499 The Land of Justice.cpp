/* 10499 The Land of Justice Accepted C++ 0.044 2011-01-25 06:50:14 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1&&n>=0){
		if(n==1){
			puts("0%");
			continue;
		}
		printf("%.0lf%%\n",n/4.0*100);
	}
	return 0;
}
/*

�b�����ꤺ�C��F�誺������O�T�w���C�S���H����R�J�@�ӪF����2����������X�h�C���O�o�]���ͤF�������D�A�j�a�������ͷN�Ӷ]�h���s�y�F�C�ҥH�L�F���[����A�C�ӤH���b�s�y�F��A���o�S���H�b���ͷN�C�o�ϱo�H�̨S����k�o���`�һݡA���M�o�Ӱ�a�b�U�譱���i�H�۵��ۨ��C

�F���ܪ��D�`��i�F�A�L�̧�ӤF�ƾǮa�̡C�ƾǮa�̴��ѤF�@�ӸѨM��סC�L�̫�ĳ��F��ɤ��H��n�p���A�ӥH���n�p���C

�{�b�A�F���n�D�{���]�p�v�إߩһݳn��ӭp��Q��C

�A�����ȴN�O�p���@�F��]�T�骺�y��^���Q��C�ӤH�R�Ӥ@�Ӳy��M��⥦���Φ��۵��� n �����X��C�Ҧ������Τ@�w���q�L�y�骺�b�ߡA�p�U�Ϥ@��G

Input

��J�t���h�մ��ո�ơC�C�մ��ո�Ƥ@�C�t���@����� n�]0 < N < 231�^�C

�Y n ���t�ơA�N���J�����A�аѦ�Sample Input�C

Output

��C�մ��ո�ƿ�X�@�C�A��X�ӤH�N�@�����y���Φ��۵��� n ������A�i�H��o���Q��C�H�ʤ����ܡA�|�ˤ��J���Ʀ�ơC

Sample Input 

2
2
1
-1

Sample Output 

50%
50%
0% 
 
*/