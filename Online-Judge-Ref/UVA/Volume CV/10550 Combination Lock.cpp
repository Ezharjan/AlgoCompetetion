/* 10550 Combination Lock Accepted C++ 0.016 2011-01-25 08:01:58 */
#include<stdio.h>
int main(){
	int pos,fir,sec,thi;
	while(scanf("%d%d%d%d",&pos,&fir,&sec,&thi)==4){
		if(pos==0&&fir==0&&sec==0&&thi==0)
			break;
		int sum;
		sum=1080;
		sum+=pos-fir>=0?(pos-fir)*9:(40-fir+pos)*9;
		pos=fir;
		sum+=pos-sec>=0?(40-pos+sec)*9:(sec-pos)*9;
		pos=sec;
		sum+=pos-thi>=0?(pos-thi)*9:(40-thi+pos)*9;
		printf("%d\n",sum);
	}
	return 0;
}
/*

�A���Ѫ����Ȼݭn�Ӷ}�@����]�p�k�ϡ^�C�b��W���@����L�A�W����40�Ө�ס]0��39�ӥN��^�C�}�ꪺ�K�X��3�Ӹ��X�զ��A�Ҧp�G15-25-8�C�n���}�o����n���ӥH�U�B�J�G

��������V����L2��� 

�~�򶶮�����V�ઽ���F�Ĥ@�Ӹ��X�W 

�f������V����L�@��� 

�~��f������V�ઽ���F�ĤG�Ӹ��X 

��������V����L�����F�ĤT�Ӹ��X 

�Զ}���Y�N�i�H���}�F 

���A�@�}�l����L����m�A�٦��}�ꪺ�K�X�A�ЧA��X�`�@�n��h�֫ס]degree�A�@��鬰360�ס^�~�ॴ�}��]��������V�[�f������V�^�C

Input

��J�t���h�մ��ո�ơC�C�մ��ո�Ƥ@�C�t��4�Ӿ�ơ]������0��39�^�C�Ĥ@�Ӿ�ƥN����L�}�l�ɩҦb����m�C��l�T�Ӿ�Ƥ��O�N��Ĥ@�B�ĤG�B�ĤT�Ӷ}�ꪺ�K�X�C�o�|�ӼƤ��A�۾F����ӼƤ��|�ۦP�C

�Y��J���|��0�A�N���J�����C

Output

��C�մ��ո�ƿ�X�@�C�A��X�`�@�n��h�֫פ~�ॴ�}��C

Sample Input

0 30 0 30
5 35 5 35
0 20 0 20
7 27 7 27
0 10 0 10
9 19 9 19
0 0 0 0

Sample Output

1350
1350
1620
1620
1890
1890
 
*/