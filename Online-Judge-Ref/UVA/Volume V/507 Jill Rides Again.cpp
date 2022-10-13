/* 9351563 507 Jill Rides Again Accepted C++ 0.120 2011-10-09 14:47:11 */
#include<stdio.h>
#include<string.h>
#define MAX(x,y) ( (x) >= (y) ? (x) : (y) )
int m[30000];
int DP[30000];
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int j,n;
		scanf("%d",&n);

		memset(DP,0,sizeof(DP));
		for(j=0;j<n-1;j++)
			scanf("%d",&m[j]);

		int max_start,max_end;
		int start,end,len,max;

		len=max=0;
		DP[0]=0;

		for(j=0;j<n-1;j++)
			if(DP[j]+m[j]<0)
				DP[j+1]=-1,start=j+1;
			else{
				DP[j+1]= (DP[j]==-1)?m[j]:DP[j]+m[j];
				max = MAX(max,DP[j+1]);
			}		
		if(max>0){
			bool first=true;
			j=n;			
			while(true){ // ���дM��̤j���Z�ѧ��}�l��
				for(j--,end=j+1;j>=1&&DP[j]!=max;j--,end=j+1);
				for(j--,start=j+1;j>=1&&DP[j]!=-1;j--,start=j+1);
				if(j<0&&!first) // i<0 �O�]���Y��b�ĤG��for���p��Xstart����m��j��0���� �����Z���n�ǤJ�Ҷq
					break;
				first=false;
				if(len<=end-start) // �Y���̤j���Z�ۦP���̫e�Y��
					len=end-start,max_start=start,max_end=end;
			}
			printf("The nicest part of route %d is between stops %d and %d\n",i,max_start,max_end);
		}
		else
			printf("Route %d has no nice parts\n",i);
	}
	return 0;
}