/* 498 Polly the Polynomial Accepted C++ 0.308 2011-02-17 11:35:48 */
#include<stdio.h>
long long int power(long long int x,int y){
	long long int temp;
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
int main(){
	char c;
	long long int m[1000];
	long long int s;
	int max=0;
	while(scanf("%lld%c",&m[max++],&c)==2){		
		if(c=='\n'){	
			while(scanf("%lld%c",&s,&c)==2){
				int i,y;
				long long int sum;
				for(sum=i=0,y=max-1;i<max;y--,i++)
					sum+=m[i]*power(s,y);
				printf("%lld%c",sum,c);
				if(c=='\n')	break;}
			max=0;}
	}
	return 0;
}
/*

�ٰO�o�N�ơ]algebra�^�ܡH�o�Ӱ��D�O���A�@x�h������x���ȡA�ЧA��X�h�������ȡC

Input

�C�մ��ո��2�C�A�Ĥ@�C�����e��{c0, c1, c2, ......, cn}�A���O�N��h�����U�����Y�ơC�p�U�ҥܡG

c0xn + c1xn-1 + c2xn-2 +...... + cnx0

�ĤG�C�����e�]�t�F�ƭ�x���ȡA{x0, x1, x2, ......, xm}

Output

��C�մ��ո�ƿ�X�@�C�A�t��m�Ӿ�ơC�]�N�O��C��x���ȡA��X��h�������ȡC

Sample Input

-2
5 0 1 6
1 -1
7 6 -1
Sample Output

-2 -2 -2 -2
6 5 -2

*/