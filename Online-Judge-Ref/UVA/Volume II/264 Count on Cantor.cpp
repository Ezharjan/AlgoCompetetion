/* 264 Count on Cantor Accepted C++ 0.024 2011-02-12 07:33:22 */
#include<stdio.h>
int main(){
	unsigned long long n;
	while(scanf("%llu",&n)==1){
		if(n==1){
			puts("TERM 1 IS 1/1");
			continue;}
		unsigned long long i,j;
		for(i=2,j=(i+1)*i/2;j<n;i++,j=(i+1)*i/2);
		if((i&1)==0)
			printf("TERM %llu IS %llu/%llu\n",n,i+n-j,j-n+1);
		else
			printf("TERM %llu IS %llu/%llu\n",n,j-n+1,i+n-j);
	}
	return 0;
}
/*

�{�N�ƾǤ����@�Ӧ��W���ҩ��]��Georg Cantor�Ҵ��X���^�G���z�ƬO�i�ƪ��C�L�ϥΤ@�ӹϪ�]Cantor's �C�|�^�C�|�X���z�ơA�p�U�ϩҥܡG  
 
�b���Ϥ��A�Ĥ@���O1/1,��2���O1/2,�ĤT���O2/1,�ĥ|���O3/1,�Ĥ����O2/2,�H�U�̦������C 

Input and Output

��J�C�����1��A�t��1�ӥ����n (1<=n<=107)�C
��C���J�A��X�bCantor's �C�|�Ϥ�����n���C 

Sample Iutput

3
14
7

Sample Output

TERM 3 IS 2/1
TERM 14 IS 2/4
TERM 7 IS 1/4

*/