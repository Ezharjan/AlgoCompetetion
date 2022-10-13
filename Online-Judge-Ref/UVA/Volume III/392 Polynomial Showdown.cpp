/* 392 Polynomial Showdown Accepted C++ 0.096 2011-02-14 12:05:14 */
#include<stdio.h>
int main(){
	int m[9];
	while(scanf("%d",&m[0])==1){
		int i;
		bool first=true;
		for(i=1;i<9;i++)
			scanf("%d",&m[i]);
		for(i=0;i<7;i++)
			if(m[i]!=0)
				if(first){
					if(m[i]==1)
						printf("x^%d",8-i);
					else if(m[i]==-1)
						printf("-x^%d",8-i);
					else
						printf("%dx^%d",m[i],8-i);
					first=false;}
				else if(m[i]==1)
					printf(" + x^%d",8-i);
				else if(m[i]>1)
					printf(" + %dx^%d",m[i],8-i);
				else if(m[i]==-1)
					printf(" - x^%d",8-i);
				else
					printf(" - %dx^%d",-m[i],8-i);
				
		if(m[i]!=0)
			if(first){
				if(m[i]==1)
					printf("x");
				else if(m[i]==-1)
					printf("-x");
				else
					printf("%dx",m[i]);
				first=false;}
			else if(m[i]==1)
				printf(" + x");
			else if(m[i]>1)
				printf(" + %dx",m[i]);
			else if(m[i]==-1)
				printf(" - x");
			else
				printf(" - %dx",-m[i]);		
		i++;
		if(first)
			printf("%d",m[i]);
		else if(m[i]!=0)
			if(m[i]>0)
				printf(" + %d",m[i]);
			else
				printf(" - %d",-m[i]);
		putchar('\n');
	}
	return 0;
}
/*

���A�@�ӼƾǦh�������Y�ơA�q8�����0����C�A�����ȬO��@�Ǥ��ݭn�����������A�M��H��Ū���榡�ӿ�X�C�Ҧp�G���A 0, 0, 0, 1, 22, -333, 0, 1,  -1�o9�ӫY�ơA�A���ӭn���ͳo�˪���X�G x^5 + 22x^4 - 333x^3 + x - 1

�H�U�O�ԲӮ榡���W�h�G

���������������X�{�C 
���Ƴ����X�{�b^�Ÿ�����C 
�`�ƶ��u�n�X�{�`�Ƴ����N�n�F�A���ݦ�x^0�C 
�u���Y�ƫD0�������~�ݥX�{�C�p�G�Ҧ����Y�Ƴ��O0�A���u�n��X�`�ƶ��N�i�H�F�C 
���󶵦�������+���M-������U���@�ťզr���C 
���p�Ĥ@�����Y�ƬO�����A����ӫY�Ƥ��ݭn�Ÿ��C�p�G�Ĥ@�����Y�ƬO�t���A���ӫY�ƥ�����-�o�ӲŸ��C�Ҧp�G-7x^2 + 30x + 66 
�Y�Y�Ƭ��t�A�h�H��@�ӥ��ƨӪ�ܡ]���F�W����6���Ҵ��쪺�Ĥ@�����~�^�A�ӫD�H�[�@�ӭt�ƨӪ�ܡC�Ҧp�Gx^2 + -3x �o�˪���ܪk�O���~���A���ӬO�Gx^2 - 3x�~��C 
1��-1�A���F�`�ƶ����~�������ӥX�{�C�Ҧp�G-1x^3 + 1x^2 + 3x^1 - 1 �o�˪���ܪk�O���~���A���ӬO�G-x^3 + x^2 + 3x - 1 �~��C 
Input

�C�մ��ո�Ƥ@�C�A�t��9�Ӿ�ơ]����ȳ��p��1000�^�C

Output

��C�@�մ��ո�ơA���ӤW�����W�h��X�h�����C�аѦ�Sample Output�C

Sample Input

0    0    0    1   22 -333    0    1   -1
0    0    0    0    0    0  -55    5    0

Sample Output

x^5 + 22x^4 - 333x^3 + x - 1
-55x^2 + 5x

*/