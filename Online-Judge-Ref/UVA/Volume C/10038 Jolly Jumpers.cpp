/* 10038 Jolly Jumpers Accepted C++ 0.008 2011-01-10 13:26:02 */
#include<stdio.h>
bool distance(int x,int y,int n,bool once[]){
	int temp=x-y>=0?x-y:y-x;
	if(temp>=1&&temp<=n-1)
		if(!once[temp]){
			once[temp]=true;
			return true;
		}	
	return false;
}
int main(){
	int table[3000];
	int n,i;
	while(scanf("%d",&n)==1){
		bool YES;
		bool once[3000]={0};
		for(i=0;i<n;i++)
			scanf("%d",&table[i]);
		for(i=0,YES=true;i<n-1&&YES;i++)
			if(!distance(table[i],table[i+1],n,once))
				YES=false;
		if(YES)
			puts("Jolly");
		else
			puts("Not jolly");
	}
	return 0;
}
/*

��n�Ӿ�ƪ��ǦC�ڭ̺٬�jolly jumper�A�p�G�۾F��2�Ӽƨ�t������ȫ�n��1��n-1�C�Ҧp�G

1 4 2 3

�N�Ojolly jumper�]n=4�^�C�]���۾F2�ƪ��t������Ȭ�3,2,1�A�N�O1��n-1�C���O

1 4 2 -1 6 

���Ojolly jumper�]n=5�^�C�]���۾F2�ƪ��t������Ȭ�3,2,3,7�A�ëD1��n-1�C

�A�����ȬO�g�@�ӵ{���ӧP�_�@�Ӿ�ƧǦC�O�_��jolly jumper�C

Input

�C�մ��ո�Ƥ@�C�A�Ĥ@�ӥ���Ƭ� n�]n < 3000�^�A�N����ƧǦC�����סC���U�Ӧ�n�Ӿ�ơA�N����ƧǦC�C

Output

��C�@�մ��ո�ơA��X����ƧǦC�O�_��jolly jumper�C

Sample Input

4 1 4 2 3
5 1 4 2 -1 6

Sample Output

Jolly
Not jolly

*/