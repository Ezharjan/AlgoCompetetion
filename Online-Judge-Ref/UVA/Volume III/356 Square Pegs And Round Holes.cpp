/* 356 Square Pegs And Round Holes Accepted C++ 0.016 2011-02-13 06:06:31 */
#include<stdio.h>
#include<math.h>
int judge(int x,int y,double r){
	if(x*x+y*y<=r*r)
		return true;
	else 
		return false;
}
void in(int x,int y,int high[],double r){
	if(y==0)
		;
	else if(judge(x+1,y,r))
		in(x+1,y,high,r);
	else{
		for(int i=0;i<x;i++)
			high[i]++;
		in(x,y-1,high,r);}
}
void out(int x,int y,int high[],double r){
	if(y==0)
		;
	else if(judge(x,y-1,r))	
		out(x+1,y,high,r);
	else{
		for(int i=0;i<(int)x;i++)
			high[i]++;
		out(x,y-1,high,r);}	
}

int main(){
	int n;
	bool first=true;
	while(scanf("%d",&n)==1){		
		int inside;
		int outside;
		int high[200]={0};
		inside=outside=0;
		in(0,n-1,high,n-0.5);
		for(int i=0;i<n-1;i++){
			inside+=high[i];
			high[i]=0;}
		out(0,n,high,n-0.5);
		for(int i=0;i<n;i++){
			outside+=high[i];
			high[i]=0;}
		outside-=inside;
		inside*=4;
		outside*=4;
		if(!first)
			putchar('\n');
		else first=false;
		printf("In the case n = %d, %d cells contain segments of the circle.\n",n,outside);
		printf("There are %d cells completely contained in the circle.\n",inside);

	}
	return 0;
}
/*

�b�@�������2n������δѽL�����e�@�Ӫ��|��2n-1����A�H�U���Ϭ�n=3 

 �g�@�ӵ{���P�_���h�֭Ӯ�l�O�@�����b�ꤤ�A�H�Φ��h�֭Ӯ�l�O�����Q�]�t�b����C 

Input

��J�]�t�n�X����ո�ơA�C�榳�@�ӥ����n�]n<=150�^

Output

��C�@���J��ơA��X2��A�Ĥ@�欰�����Q�]�t�b�ꤤ���Ӥl�ơC�ĤG�欰�����Q�]�t�b�ꤤ����l�ơC��C�@�ӼƤJ��ơA��X��ƶ��n�Ť@��C�аѦ�Sample output

Sample Iutput

3
4 

Sample Output

In the case n = 3, 20 cells contain segments of the circle.
There are 12 cells completely contained in the circle.

In the case n = 4, 28 cells contain segments of the circle.
There are 24 cells completely contained in the circle.

*/