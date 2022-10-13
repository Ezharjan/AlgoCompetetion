/* 382 Perfection Accepted C++ 0.024 2011-02-13 07:23:24 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	puts("PERFECTION OUTPUT");
	int temp;	
	while(scanf("%d",&temp)){			
		if(temp==0)
			break;
		int sum;
		int i;
		for(i=1,sum=0;i*i<temp;i++)
			if(temp%i==0)
				sum+=i+(temp/i);
		if(i*i==temp)
			sum+=i;
		sum-=temp;
		if(sum==temp)
			printf("%5d  PERFECT\n",temp);
		else if(sum>temp)
			printf("%5d  ABUNDANT\n",temp);
		else
			printf("%5d  DEFICIENT\n",temp);		
	}
	puts("END OF OUTPUT");
	return  0;
}
/*

�@�Ӿ��b�p�G�i�H�Q�t�@�Ӿ��a�㰣�]�b�o��a>b�^�A�ڭ̺�b�Oa���@�Ӧ]�ơC
Perfect Number�O�@�ӥ���ƨåB�����Ҧ��]�ƪ��M�C�Ҧp�G6�M28���Operfect number�C�]��6=1+2+3�A28=1+2+4+7+14�C�p�G�@�ӥ���Ƥ��Operfect�A���L�N�Odeficient�Ϊ̬Oabundant�A�ھڨ�Ҧ��]�ƪ��M�O�p��Τj��o�Ӽƥ����C�]���A9�Odeficient�]��1+3<9�C��12�Oabundant�]��1+2+3+4+6>12�C
�мg�@�ӵ{���D�X�Y�@�ӼƬOperfect, deficient �Ϊ�abundant�C

Input

���@�s��]���|�W�L100�ӡ^�������n�]1 <= n < 60000�^,n=0�N���J�����C

Output

�аѦ� Sample Output�C

�Ʀr������5�Ӧr�����סA�a�k����C�P��誺�ԭz����2�Ӫťծ�C

Sample Input

15 28 6 56 60000 22 496 0

Sample Output

PERFECTION OUTPUT
   15  DEFICIENT
   28  PERFECT
    6  PERFECT
   56  ABUNDANT
60000  ABUNDANT
   22  DEFICIENT
  496  PERFECT
END OF OUTPUT
�@
*/