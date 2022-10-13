/* 145 Gondwanaland Telecom Accepted C++ 0.016 2011-02-09 12:49:13 */
#include<stdio.h>
void initial(double *day,double *eve,double *nig,char c){
	switch(c){
		case 'A':*day=0.1; *eve=0.06; *nig=0.02; break;
		case 'B':*day=0.25; *eve=0.15; *nig=0.05; break;
		case 'C':*day=0.53; *eve=0.33; *nig=0.13; break;
		case 'D':*day=0.87; *eve=0.47; *nig=0.17; break;
		case 'E':*day=1.44; *eve=0.80; *nig=0.30; break;}
}
int main(){
	char type;
	char phone[9];
	int h1,h2,m1,m2;
	while(scanf("%c",&type)==1){
		if(type=='#') break;
		scanf("%s%d%d%d%d",phone,&h1,&m1,&h2,&m2);
		int temp;
		int t1,t2,t3; // t1 day t2 eve t3 nig
		double total=0;
		double day;
		double eve;
		double nig;
		int now_type;
		initial(&day,&eve,&nig,type);
		if(h1>=8&&h1<18)
			now_type=1; // day
		else if(h1>=18&&h1<22)
			now_type=2; // eve
		else
			now_type=3; // nig
		t1=t2=t3=temp=0;
		do{
			m1++; temp++;
			if(m1==60){
				m1=0; h1++;					
				switch(now_type){
					case 1: total+=day*temp; t1+=temp; break;
					case 2: total+=eve*temp; t2+=temp; break;
					case 3: total+=nig*temp; t3+=temp; break;}
				temp=0;
				if(h1>=8&&h1<18)	now_type=1; // day
				else if(h1>=18&&h1<22)
					now_type=2; // eve
				else now_type=3; // nig
			}
			if(h1==24) h1=0;
		}while(h1!=h2||m1!=m2);
		switch(now_type){
			case 1: total+=day*temp; t1+=temp; break;
			case 2: total+=eve*temp; t2+=temp; break;
			case 3: total+=nig*temp; t3+=temp; break;}
		printf("%10s%6d%6d%6d%3c%8.2lf\n",phone,t1,t2,t3,type,total);
		type=getchar();
	}
	return 0;
}
/*

Gondwanaland Telecom�o�a�q�ܤ��q���O���зǬO�H�Ҽ��q�ܪ��Z���ήɬq�ӭq�w���A�p�U��C�b�o��charging step�N�O�����P���Z���C

�Ҧ������O�O�ھڸӳq�q�ܨC�@�����h�ֿ��ӭp�⪺�A�ҥH�Y���Y�q�q�ܦ���ɬq�A�h���ɬq���P�����O�зǤ��O�p��b�[�`�C�Ҧp�G���@�q�q�ܱq5:58pm�}�l��6:04pm�����A���e2�����O���դѡ]Day�^���зǭp�O�A�ӫ�4�����h���ıߡ]Evening�^���зǭp�O�C

�Ҧ��p��@�������q�ܤ��C�J�p�O�A�ӥB�S���@�q�q�ܷ|����W�L24�p�ɡC

Input

�C�����ո�Ƥ@�C�A�N��Y�q�q�ܪ��q�ܰO���C�C�C��J��ƥ]�t6�ӳ����A�Ĥ@�ӳ�����charging step�]�j�g�r��A~E�^�C�ĤG�ӳ������Ҽ����q�ܸ��X�]��7�ӼƦr�Τ@��"-"���r��^�A�ĤT�B�|�ӳ����N��q�ܶ}�l���ɶ��G�ɤΤ��C�Ĥ��B���ӳ����N��q�ܵ������ɶ��G�ɤΤ��]���H24�p�ɪ������ӬݡA�ɡB�����H2�ӼƦr�Ӫ�{�^�C

�Y��J�C���Ĥ@�Ӧr��#�A�N���J�����C�аѦ�Sample Input

Output

��C�@�����ո�ƿ�X�@�C�A�]�]�t6�ӳ����C

�Ĥ@�ӳ������Ҽ����q�ܸ��X�C�ĤG�B�T�B�|�������O�N��o�q�q�ܩҥΦU�ɬq�]Day,Evening,Night�^�������ơA�Ĥ��ӳ�����charging setp�A�Ĥ��ӳ������o�q�q���`�@�p�O�h�ֿ��C

�U������X��@�w��m�A�H�a�k���ӻ��A���O�b10,16,22,28,31,39����m�C�аѦ�Sample Output

Sample Input

C 765-7457 10 41 04 29
B 207-0225 21 28 07 53
B 316-0414 16 43 09 37
C 463-1401 19 28 00 33
D 514-9373 01 20 09 08
#

Sample Output

  765-7457   439   240   389  C  362.44
  207-0225     0    32   593  B   34.45
  316-0414   174   240   600  B  109.50
  463-1401     0   152   153  C   70.05
  514-9373    68     0   400  D  127.16

*/