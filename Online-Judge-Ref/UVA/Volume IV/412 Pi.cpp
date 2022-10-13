/*  412 Pi Accepted C++ 0.108 2011-02-15 14:36:11 */
#include<stdio.h>
#include<math.h>
#define SWAP(x,y) { int temp=x; x=y; y=temp; }
int main(){
	int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int m[50];
		int total,count;
		int i,j,k;
		int a,b,c;
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(m[i]>m[j])
					SWAP(m[i],m[j]);
		for(i=count=0;i<n;i++)
			for(j=i+1;j<n;j++){ // �쥻���ؽ�ƪ�h�D�A�S�Q���������֡A�٧֪��n�h...
				a=m[j];
				b=m[i];
				do{
					c=a%b;
					a=b;
					b=c;
				}while(c!=0);
				if(a==1)
					count++;}
		total=n*(n-1)/2;
		double pi=sqrt((double)total*6/count);
		if(count==0)
			puts("No estimate for this data set.");
		else
			printf("%.6lf\n",pi);
	}
	return 0;
}
/*

�^��@�Ӥj�Ǳб�Robert A.J. Matthews�ھک]�Ť����L�ѻڪ��P�P����m�A���H��Y�����ץX����Pi�]��g�v�^���ǽT�סC��M�A�o�o���ƽת��z�פ����ΡC�b���A�ڭ̨S���]�šA���O�ڭ̭n�άۦP���z�רӦ��pPi���ȡG

�q�@�Ӽƶq�e�j���ƪ����X���H������2�ӼơA�o2�ӼƤ���]�N�O�S����1�j�����]�ơ^�����v�O:

�Ҧp�G���]�@�Ӽƪ����X��{2,3,4,5,6}�A�i�H�Φ�10��ơC�䤤(2,3), (2,5), (3,4), (3,5), (4,5), (5,6)�o6��Ƥ���C�ҥH�ڭ̥i�H���X�G

�b�o�Ӱ��D���A���A�@�ǼơA�n�ЧA���p�XPi���ȡC

Input

��J�]�t�h�մ��ո�ơC�C�մ��ո�ƪ��Ĥ@�C���@�ӥ����N�]1 < N < 50�^�A�N���X���������ӼơC���U�Ӫ�N�C�C�C�U���@�ӥ���ơA�N�����X�����ơC�o�ǼƳ��j��0�A�åB�p��32768�C

N=0�N���J�����C�аѦ�Sample Input�C

Output

��C�@�մ��ո�ơA��X�A�Ҧ��pPi���ȡA�|�ˤ��J��p���I��6��C�p�G�S������@��Ƥ���A�п�XNo estimate for this data set.

�аѦ�Sample Output�C

Sample Input

5
2
3
4
5
6
2
13
39
0

Sample Output

3.162278
No estimate for this data set.

*/