/* 484 The Department of Redundancy Department Accepted C++ 0.040 2011-02-16 12:13:20 */
#include<stdio.h>
int main(){
	int x;
	int i;
	int count[100000];
	int m[10000];
	int max=0;
	while(scanf("%d",&x)==1){
		for(i=0;i<max;i++)
			if(m[i]==x){
				count[i]++;
				break;}
		if(i>=max){
			m[max]=x;
			count[max++]=1;}
	}
	for(i=0;i<max;i++)
		printf("%d %d\n",m[i],count[i]);
	return 0;
}
/*

�g�@�ӵ{���ӭp��b�@��Ʀr���A�C�ӼƦr�X�{�����ơC 

Input

��J�]�t�F�@�s�ꪺ��ơ]�i�঳�D�`�h�ӡ^�C  

Output

��C�@�Ӥ��P����J�Ʀr�A�п�X�ӼƦr�Ψ�X�{�����ơA�����H�@�ӪŮ���}�C��X���Ʀr���ǻݩM��J���Ʀr�X�{�����ǬۦP�C�аѦ�Sample Output 

Sample Iutput

3 1 2 2 1 3 5 3 3 2 

Sample Output

3 4
1 2
2 3
5 1

*/