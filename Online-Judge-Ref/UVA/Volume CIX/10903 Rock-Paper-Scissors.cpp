/* 10903 Rock-Paper-Scissors Tournament Accepted C++ 0.184 2011-01-31 05:06:31 */
#include<stdio.h>
#include<string.h>
int main(){
	int n,k;
	bool first;
	first=true;
	while(scanf("%d%d",&n,&k)==2){		
		if(n==0)
			break;
		if(!first)
			putchar('\n');
		else first=false;
		char c=getchar();
		int total=k*n*(n-1)/2;
		int i;
		int win[1000]={0};
		int lose[1000]={0};
		int m1,m2;
		char p1[10],p2[10];	
		for(i=1;i<=total;i++){
			scanf("%d%s%d%s",&m1,p1,&m2,p2);
			if(strcmp(p1,p2)==0)
				continue;
			else 
				switch(p1[0]){
				case 'r':
					switch(p2[0]){
					case 'p': win[m2]++,lose[m1]++; break;
					case 's': win[m1]++,lose[m2]++; break;}
					break;
				case 'p':
					switch(p2[0]){
					case 'r': win[m1]++,lose[m2]++; break;
					case 's': win[m2]++,lose[m1]++; break;}
					break;
				case 's':
					switch(p2[0]){
					case 'r': win[m2]++,lose[m1]++; break;
					case 'p': win[m1]++,lose[m2]++; break;}
					break;}}
		for(i=1;i<=n;i++)
			if(win[i]+lose[i]==0)
				puts("-");
			else
				printf("%.3lf\n",(double)win[i]/(win[i]+lose[i]));
	}
	return 0;
}
/*

�ŤM���Y���O�� 2 �ӤH�����C���A���a�U��ŤM�B���Y�B���䤤�����A�ŤMĹ���A��Ĺ���Y�A���YĹ�ŤM�A�@�˴N�⥭��C

�{�b�`�@�� n �Ӫ��a�A�C�Ӫ��a�n�P��L�H���� k ���A�`�@�]�N�O k*n*(n-1)/2 �����ɡA�A�����ȴN�O�p��C�Ӫ��a���Ӳv�A�Ӳv���w�q�O w/(w+l)�Aw �O�ӳ��ơAl �O�ѳ��ơC

Input

��J�t���h�մ��ո�ơA�C�մ��ո�ƪ���1�C�]�t2�Ӿ�� n�M k�] 1<= n,k <= 100�^�An, k�p�W�����w�q�A�U���� k*n*(n-1)/2 �C�A�C�@�C�N��@�����ɡA�]�t�Fp1 ,m1, p2, m2�A1<= p1,p2 <= n �]p1, p2 �N���a���X�Ap1���|���� p2�^�Am1, m2�U�N�� p1, p2 �X���� �]"rock", "scissors",�� "paper"�^�C

�� n=0 �N���J�����C�аѦ�Sample Input�C

Output

��X�C�Ӫ��a���Ӳv�]�|�ˤ��J��p���I�U3��^�A1�H1�C�A�p�G�Ӳv�L�N�q�A��X "-"�C���ո�ƶ��ЪŤ@�C�C

Sample Input  
2 4
1 rock 2 paper
1 scissors 2 paper
1 rock 2 rock
2 rock 1 scissors
2 1
1 rock 2 paper
3 1
1 rock 3 rock
2 paper 1 scissors
2 paper 3 paper
0

Sample Output

0.333
0.667

0.000
1.000

1.000
0.000
-

*/