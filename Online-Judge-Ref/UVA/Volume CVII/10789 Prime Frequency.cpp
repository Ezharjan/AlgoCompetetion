/* 10789 Prime Frequency Accepted C++ 0.020 2011-01-26 07:40:44 */
#include<stdio.h>
int prime[1000];
int count;
void make_prime(){
	int i,j;	
	bool found;
	prime[0]=2;
	for(i=3,count=1;i<2001;i+=2){
		found=false;
		for(j=0;j<count&&!found;j++)
			if(i%prime[j]==0){
				found=true;
				break;}
		if(!found)
			prime[count++]=i;
	}		
}
int main(){
	make_prime();
	int t;
	while(scanf("%d",&t)==1){
		char c=getchar();
		bool empty;
		int i,k;		
		char str[2001];
		for(i=1;i<=t;i++){
			int j;
			int m[150]={0};			
			gets(str);
			for(j=0;str[j]!='\0';j++)
				m[str[j]]++;
			printf("Case %d: ",i);
			for(j=0,empty=true;j<150;j++)
				if(m[j]>0)
					for(k=0;k<count;k++)
						if(prime[k]==m[j]){
							empty=false;
							printf("%c",j);
						}
			if(empty)
				printf("empty");
			putchar('\n');
		}
	}
	return 0;
}
/*

���A�@�ӥu���Ʀr�έ^��r���]0-9�BA-Z��a-z�^���r��A�A�ݭn�p��C�@�Ӧr���X�{���W�v�A�åB�P�_���@�Ӧr���X�{���W�v�O��ơC�ҿת���ƬO���i�H�Q 1 �M�ۤv�㰣���ơA�Ҧp�G2�B3�B5�B7�B11�K���C

Input

��J���Ĥ@�C���@�Ӿ�� T �]1��T��201�^�A�N��H�U���h�ֲմ��ո�ơC

�C�մ��ո�Ƥ@�C�C�C�մ��ո�ƥu���Ʀr�έ^��r���A���ո�ƪ����פj�� 0 �B�p�� 2001 �C

Output

���C�մ���п�X�@�C�A���e�O�X�{�W�v�O��ƪ��r���F��X�����ǥ��ݨ̷� ASCII �ȥѤp��j�ƦC�C�аѦ� sample input �� sample output�C

�p�G�S������r�����X�{�W�v�O��ơA�п�X empty �C

Sample Input

3
ABCC
AABBBBDDDDD
ABCDFFFF

Sample Output

Case 1: C
Case 2: AD
Case 3: empty

*/