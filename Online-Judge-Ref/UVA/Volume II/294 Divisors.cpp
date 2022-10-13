/* 294 Divisors Accepted C++ 0.236 2011-02-12 08:04:39 */
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		for(i=1;i<=n;i++){
			int a,b,k;
			int m,max;
			int count;
			scanf("%d%d",&a,&b);
			for(k=a,max=0;k<=b;k++){
				int j;
				for(j=1,count=0;j<=sqrt((double)k);j++)
					if(k%j==0)
						count+=2;
				for(j=1;j<=sqrt((double)k);j++)
					if(k==j*j)
						count--;
				if(count>max){
					max=count;
					m=k;}}
			printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,m,max);
		}
	}
	return 0;
}
/*

���A�@�ӽd�򪺼ơA�ЧA�g�@�ӵ{����X�b�o�ӽd�򤺪��ơA���@�ӼƦ��̦h�����ơ]�N�O�p�󵥩�o�ӼơA�B�i�H�Q�o�Ӽư��ɪ��ơC�Ҧp�G6��4�Ӱ��ơA���O�O1,2,3,6�^�C�ƪ��j�p�ܤj�A�d��]���p�A�ҥH�A���{���������Ĳv�A�_�h�i��L�k�b�X���]���C

Input

��J���Ĥ@�C���@�ӥ����N�A�N��H�U���X�մ��ո�ơC�C�մ��ո�Ƥ@�C�A�t��2�ӥ����L�AU�A�N��Y�@�d�򪺼Ƥ��̤p�γ̤j���ơC�åB 1 <= L <= U <= 1000000000�A0 <= U-L <= 10000

Output

��C�@�մ��ո�ơA��X�b�d�򤺦��̦h���ƪ���P�]�p�G������@�ӼƦ��̦h���ơA�Ч�̤p�����ӡ^�A�H�ΥL���h�֭Ӱ���D�C�M��̳o�˪��榡��X�G'Between L and H, P has a maximum of D divisors.�C�аѦ�Sample Output�C

Sample Input

3
1 10
1000 1000
999999900 1000000000

Sample Output

Between 1 and 10, 6 has a maximum of 4 divisors.
Between 1000 and 1000, 1000 has a maximum of 16 divisors.
Between 999999900 and 1000000000, 999999924 has a maximum of 192 divisors.

*/