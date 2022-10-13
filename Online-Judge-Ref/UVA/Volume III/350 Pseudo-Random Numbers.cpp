/* 350 Pseudo-Random Numbers Accepted C++ 1.420 2011-02-12 09:55:44 */
#include<stdio.h>
int main(){
	int z,i,m,l;
	int count=1;
	while(scanf("%d%d%d%d",&z,&i,&m,&l)==4){
		if(z==0&&i==0&&m==0&&l==0)
			break;
		int index[10000]={0};
		int len[10000]={0};
		bool app[10000]={false};
		int max=0;
		while(true){
			if(!app[l]){
				index[max++]=l;
				app[l]=true;}
			else
				break;		
			for(int j=0;j<max;j++)
				if(app[index[j]])
					len[index[j]]++;			
			l=(z*l+i)%m;}
		printf("Case %d: %d\n",count++,len[l]);
	}
	return 0;
}
/*

�q���L�k���ͯu�����üơ]Random numbers�^�A���O�g�ѬY�ǵ{�ǹq���i�H���͵����üơ]pseudo-random numbers�^�C�üƳQ�ϥΦb�ܦh���ΤW�A���O�������C

���@�ر`�Ϊ������üƲ��ͤ�k�G�p�G�W�@�ӶüƬOL�A���U�@�ӶüƲ��ͪ���k�O
(Z*L+I) mod M�A�b�o��Z�BI�BM���O�`�ơC�Ҧp�G���]Z=7 I=5 M=12�C�p�G�Ĥ@�Ӷüơ]�q�`�s�� seed�^�O 4 , ���ڭ̥i�H���ͥH�U�X�ӵ����ü�:



�ڭ̥i�H�o�{�A�g�L6�ӼƦr��A�����üƪ��ǦC���ƤF�A�]�N�O��cycle length=6�C
�b�o�Ӱ��D���A�A�N�|�Q��Z�BI�BM�٦�L�]�N�Oseed�^���ȡ]�������j��9999�^,��C�@��Z�BI�BM�BL�A�n�ЧA��X�Ҳ��ͪ������üƪ�cycle length�C
�Ъ`�N�Gcycle�ä��@�w�qseed�}�l�C

Input

��J���C�@�榳4�Ӿ��,�̧Ǭ�Z, I, M, L�C�]L�@�w��M�p�^
��J���̫�@�欰4��0�A�N���J�����C

Output

��C�@���J�A��X�o�O�ĴX�մ��ո�ơ]�s��Ʀr�A�q1�}�l�^�M�Ҳ��ͪ������üƪ�cycle length�C

Sample Input

7 5 12 4
5173 3849 3279 1511
9111 5309 6000 1234
1079 2136 9999 1237
0 0 0 0

Sample Output

Case 1: 6
Case 2: 546
Case 3: 500
Case 4: 220

*/