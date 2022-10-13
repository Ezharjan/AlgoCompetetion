/* 130 Roman Roulette Accepted C++ 0.016 2011-02-09 11:48:17 */
#include<stdio.h>
void initial(int m[],int p[],int n){
	int i;
	for(i=0;i<n-1;i++)
		p[i]=m[i]=i+1;
	m[n-1]=0;
	p[n-1]=n;
}
int main(){
	int n,k;
	while(scanf("%d%d",&n,&k)==2){
		if(n==0&&k==0)
			break;
		int i,j,e,count,t;
		int pre_e,pre_j;
		int total;
		int p[100]; //  �H���s��
		int m[100]; //  �����䵲
		bool killed=false; // No.1 �Q��?		
		i=0;
		while(true){
			total=n; // �`�H��
			if(total==1) break;
			initial(m,p,n);			
			j=i;
			e=(i-1>=0)?i-1:n-1;
			while(!killed){
				for(pre_j=e,j=m[e],count=1;count!=k;pre_j=j,j=m[j],count++); // ��X�U�@�ӭn�Q�����H
				for(pre_e=j,e=m[j],count=1;count!=k;pre_e=e,e=m[e],e!=j?count++:0); // ��X�I����
				if(p[j]==1){ killed=true; break; }
				total--;
				if(total==1) break;
				m[pre_j]=m[pre_e]; // �Q�����H���e�@�Ӥ��䵲����I����
				m[pre_e]=m[e]; // �I���̪��e�@�Ӥ��䵲����I���̪��U�@�ӤH
				m[e]=m[j]; // �I���̤��䵲����Q�����H���䵲
			}
			if(!killed)			
				break;	
			i++;
			killed=false;
		}
		printf("%d\n",i+1);
	}
	return 0;
}
/*

�褸67�~�A�bù���M�S�ӤH���Ĭ𤤡A�v�Ǯa Josephus �M��L40�ӤH�Q���b�@�Ӭ}�ޤ��Cù���H���D Josephus ���U����Ʊ�L����ù���Ұ�C���O�L���P��̫o�����\�L�뭰�C�ҥHJosephus ��ĳ�L�̩������`�A�@�ӱ��@�ӡA�Q�������ǴN�ѩR�B�M�w�C�ǲΤW�L�̨M�w�R�B���覡���G�j�a�򦨤@�Ӷ��A�q�Y�ӤH�}�l��_�A�C��� 3 �ӤH���ӤH�N�Q�����A�p�����_�U�h�A����u�Ѥ@�ӤH�C��� Josephus �����ߤ@���s���̨ç뭰ù���C�ڭ̦����쪺�O�GJosephus �p���n�O���Ӧs���̡H�u���O�B��n�A�٬O�L�ƥ��b�t�a�̥� 41 �����Y�m�߹L�A�Ϊ̥L���@�ӼƾǪ���k�i�H���D�n���b���@�Ӧ�m�~�ন���̫᪺�s���̡H

ť�L�o�ӬG�ƫ�A�A�۷��~�߭n�O�N�ӬY�@�ѧA�]���{�P�˪����p�n����C�ҥH�A�M�w�ΧA����W���q���g�@�ӵ{����X���ӱq���ӤH�}�l��_�A�A�~�i�H�������ӳ̫�ߤ@�s�����H�C

�b�o�Ӱ��D���A�A���{��������ѨM Josephus �y�z���t�@���ܧΡC�� n �ӤH�Ʀ��@�Ӷ��A���V���A�̶�������V�s���q 1 �� n�C�A����m�b 1 �C���H�{�ǥѽs�� i ���H�}�l��_�]��������V�^�A������� k �ӤH�A���ӤH�ߨ�Q�����C�M��q�o�ӳQ�����H���䪺���ӤH�A��������V�� k �ӤH�A���ӤH�����t�d�I����~�Q�������ӤH�A�M��^�h���b��~�Q�������ӤH����m�C���U�ӱq�o�ӤH�����䨺�ӤH��_�A�� k �ӤH�S�Q�����A�p���@���U�h����u�ѤU�@�ӤH����C

�Ҧp�G�� n=5, k=2, i=1, ����Q�������Ǭ� 2, 5, 3, 1�A�s���̬�4�C

Input

��J�t���h�մ��ո�ơC

�C�մ��ո�Ʀ�2�Ӿ�� n, k �C�A�i�H���]�̦h�u�� 100 �ӤH�C

�Y n =  k = 0 �ɥN���J�����C�аѦ�Sample Input�C

Output

��C�մ��ո�ƿ�X�@�}�l�����ӱq���@�ӤH��_�]�]�N�O i�^�A�~��T�O�A�O�̫�ߤ@���s���̡C�аO��G�A����m�b 1�C�H�W�z���Ҥl�ӬݡA�����Ѳ� 3 �ӤH��_�A�̫�s�����H�~��O 1 �C

Sample Input 

1 1
1 5
5 2
5 4
7 3
100 53
100 2
11 93
0 0

Sample Output 

1
1
3
5
1
13
83
2

*/