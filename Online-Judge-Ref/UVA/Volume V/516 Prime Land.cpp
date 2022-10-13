/* 516 Prime Land Accepted C++ 0.052 2011-02-17 12:19:07 */
#include<stdio.h>
#define INT_MAX 2147483647
static int prime[10000];
static int index;
int power(int x,int y){
	int temp;
	if(x==1||y==0)
		return 1;
	else if(y==1)
		return x;
	else if((y&1)==0){
		temp=power(x,y/2);
		return temp*temp;}
	else
		return x*power(x,y-1);
}
void make_prime(){
	int i,j;
	prime[0]=2;
	index=1;
	for(i=3;i<=32767;i+=2){
		for(j=0;j<index&&i%prime[j]!=0;j++);
		if(j>=index) prime[index++]=i;
	}
}
int main(){
	make_prime();
	int s,m;
	char c;
	int sum=1;
	while(scanf("%d",&s)==1){
		if(s==0) break;
		scanf("%d",&m);
		c=getchar();
		sum*=power(s,m);
		if(c=='\n'){
			int min=INT_MAX;
			int i,max;
			int count[10000]={0};
			for(i=max=0,sum-=1;sum>1;i++,max++)
				while(sum%prime[i]==0){					
					count[i]++;
					sum/=prime[i];}
			for(i=0;min>prime[i];i++)
				if(count[i]>0)	
					min=prime[i];
			for(i=max-1;i>=0;i--)
				if(count[i]>0)
					if(min==prime[i])
						printf("%d %d\n",prime[i],count[i]);
					else
						printf("%d %d ",prime[i],count[i]);}
	}
	return 0;
}
/*

�b��ưꤤ�H�̨ϥΥH��Ƭ��򩳪��Ʀr�t�ΨӪ�F�@�Ӿ�ơC�Y�H�ڭ̪��[�I�Ӭݪ��ܡA�N�O�C�@�Ӥj��1�����X���ΰߤ@���]�Ƥ��Ѫ��Φ��Ӫ�{�C�Y 

X = Pkex * ...... * P1e1 * P0e0 

�Ҧp�G�ڭ̪����40�b��ưꤤ�H�G5 1 2 3�Ӫ�ܡC�]���5��1���譼�H2��3����^ 

�o�˪��t�ι�ڭ̨ӻ���b�O���M�`�A�Ϊ̻��A���I���C�ƹ�W�A�b��ưꤤ���p�B�ͻݭn��n�X�~�Ӿǲߥ[�k�M��k�A���t�@�譱�A���k�ΰ��k��L�̨ӻ��o�O�ܮe�����C�{�b�A�����ȴN�O����ưꪺ�H�g�@�ӵ{����@�Ӽư�"��1"���ʧ@�A�M���X���G�C��M�A��J��X���O�H��ưꪺ�Ʀr�t�ΨӪ�ܡ]��ڭ̨ӻ��]�N�O�]�Ƥ��Ѫ��Φ��^�C 

Input

�C�մ��ո�Ƥ@�C�A�C�C���@��X�]2 < X <= 32767�^���]�Ƥ��Ѧ��C�̫�@�C�Ȧ��@��0�A�N���J�����A���C���ݿ�X�C

Output

��C�մ��ո�ƿ�X�@�C X-1 ���]�Ƥ��Ѧ��A�Ʀr�������@�ťաC�аѦ�Sample Output�C

Sample Input

17 1
5 1 2 1
509 1 59 1
0

Sample Output

2 4
3 2
13 1 11 1 7 1 5 1 3 1 2 1

*/