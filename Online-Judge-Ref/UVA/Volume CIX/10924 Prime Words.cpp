/* 10924 Prime Words Accepted C++ 0.012 2011-01-28 13:11:23 */
#include<stdio.h>
int prime[500];
int total;
void make_prime(){
	int i,j;	
	bool IS;
	prime[0]=1;
	prime[1]=2;
	total=2;
	for(i=3,IS=true;i<1040;i+=2,IS=true){
		for(j=1;j<total;j++)
			if(i%prime[j]==0){
				IS=false;
				break;}
		if(IS)
			prime[total++]=i;
	}
}
int main(){
	make_prime();
	char str[25];
	while(gets(str)){
		int i;
		int sum;
		bool found;
		for(sum=i=0;str[i]!='\0';i++)
			if(str[i]>='a'&&str[i]<='z')
				sum+=str[i]-'a'+1;
			else
				sum+=str[i]-'A'+27;
		for(i=0,found=false;i<total;i++)
			if(prime[i]==sum){
				puts("It is a prime word.");
				found=true;
				break;}
		if(!found)
			puts("It is not a prime word.");
	}
	return 0;
}
/*

��ƴN�O�@�ӼƦr�u����Ӧ]�ơG1�M�ۤv�A�Ҧp�G1,2,3,5,17,101�M10007���O��ơC

�b�o���D���A�ݭnŪ�J�@�դ�r�A�C�Ӧr�O�� a-z �M A-Z �զ��A�C�Ӧr�������L���ȡA�r�� a �� 1�A�r�� b �� 2 ... ��r�� z �� 26�A�P�˪��r�� A �� 27�AB �� 28�A Z �� 52�C

�A���ӭn�g�ӵ{�����ˬd�o�զr�O���Oprime word�A�p�G�o�դ�r���r�����`�M����ƪ��ܡA�L�N�O prime word�C

��J���� �G

��J�t���h�մ��ո�ơA�C�դ@�C�A�B�� L �]1 <= L <= 20�^�Ӧr���C�аѦ�Sample Input�C

��X���� �G

��C�@�զr�A�p�G���O prime word ���ܡA��X "It is a prime word."�C�_�h�A�п�X "It is not a prime word."�C

�d�ҿ�J �G 

UFRN
contest
AcM
a
A

�d�ҿ�X �G

It is a prime word.
It is not a prime word.
It is not a prime word.
It is a prime word.
It is not a prime word.

���� �G

Lucky �� �^ ��

�X�B �G

UVa ACM 10924 (�@�̡Gsnail) 

*/