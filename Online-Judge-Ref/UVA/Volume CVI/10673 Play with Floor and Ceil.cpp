/* 10673 Play with Floor and Ceil Accepted C++ 0.024 2011-01-31 06:08:51 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		for(i=1;i<=n;i++){			
			long long int x,k;
			long long int p,q;
			long long int s,t;
			long long int temp;
			scanf("%llu%llu",&x,&k);
			s=x/k;
			if(s==(float)x/k)
				t=s;
			else if(s<(float)x/k)
				t=s+1;
			p=q=0;
			if(s==t)				
				while(x!=(p+q)*s){
					if((p+q)*s>x)
						q--;
					else
						p++;}
			else{
				if(s==0)
					q=x;
				else{
					p=x/s;
					if(x%s!=0){
						temp=x%s;
						p-=temp;
						q+=temp;}}}
			printf("%lld %lld\n",p,q);
		}
	}
	return 0;
}
/*

�����2�Ӿ�� x �M k�A�s�b�t2�Ӿ�� p �M q �ϱo�G

�n�ҩ��W�������l�O�@��۷�e�����ơA�ҥH�ڭ̤��|�n�D�A�h���C�ڭ̭n�A�����ƬƦܧ�e���@�ǡC���A x �M k ���ȡA�ЧA��X p �M q �ϱo�W�������l���ߡC

Input

��J���Ĥ@�C���@�Ӿ�ƥN��H�U�@���h�ֲմ��ո�ơ]���|�W�L1000�ա^�C

�C�մ��ո�Ƥ@�C�C�t�� 2 �ӥ����  x �M k�]���p�� 108�^�C

Output

��C�մ��ո�ƿ�X�@�C�A�t2�Ӿ�� p �M q �C���p�s�b���u�@�յ��סA��X����@�ӳ��i�H�C

���O���F���U�ڭ����o�ӥ���²��@�I�A�нT�O �M �o2�ӭȥi�H�H64�줸������x�s�C

Sample Input 

4
5 2
40 2
24444 6
2 3

Sample Output

1 1
1 1
0 6
0 2
 
*/