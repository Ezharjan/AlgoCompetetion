/* 10018 Reverse and Add Accepted C++ 0.012 2011-01-05 14:06:34 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d ",&n)==1){
		for(int i=1;i<=n;i++){
			char str1[11],str2[11],str3[11];
			int count=0;
			for(int k=0;k<11;k++)
				str1[k]=str2[k]=str3[k]='0';
			gets(str1);
			while(true){
				int p_str,carry=0;	
				bool right=false,to=false;
				for(p_str=0;str1[p_str]!='\0';p_str++);
				p_str-=1;
				for(int k=p_str;k>=0;k--)
					str2[p_str-k]=str1[k];
				for(int k=p_str,i=0;k>=0;k--,i++){
					str3[i]=str1[k]+str2[k]-'0'+carry;
					carry=0;
					while(str3[i]>'9'){	
						if(k==0)
							to=true;
						str3[i]-=10;
						carry=1;}}
				if(to)
					p_str++;
				if(carry)
					str3[p_str]++;
				for(int k=0;k<=p_str+1;k++)
					str1[k]=str3[p_str-k];
				
				str1[p_str+1]='\0';
				count++;
				for(int k=0,j=p_str;j>=k;k++,j--)
					if(str1[k]==str1[j]){
						if(k==j-1||k==j)
							right=true;
						continue;}
					else
						break;
				if(right)
					break;
				
			}
				printf("%d %s\n",count,str1);
		}
	}
	return 0;
}
/*

��@�ӼƦr����ìۥ[����k��²��G�N�O��Ʀr����å[�W��Ӫ��Ʀr�C���p�o�өM���O�@�Ӱj��]���o�ӼƦr�q����k�M�q�k�쥪���ۦP�^�A�N�@�����Ƴo�ӵ{�ǡC�|�һ����G

195 �}�l���Ʀr
591
-----
786
687
-----
1473
3741
-----
5214
4125
-----
9339 �j��X�{�F

�b�o�ӨҤl���A�g�L�F4���ۥ[��o��F�j��9339�C�X�G��Ҧ�����Ƴo�Ӥ�k���|�o��j��A���O�]�����쪺�ҥ~�C196�O��1�ӥγo�Ӥ�k�䤣��j�媺�Ʀr�A�M�ӨèS���ҩ��Ӱj�夣�s�b�C

�{�b���A�@�Ӷ}�l���Ʀr�A�A�����ȴN�O�D�X�g�L�h�֦��ۥ[��A�|���ͭ��@�Ӱj��C��Ҧ������ո�ơA�A�i�H���]�G1. ���|��1�ӵ��סC2. �b1000�Ӭۥ[�����|�o�쵪�סC 3. ���ͪ��j�夣�|�j��4294967295.

Input

��1�C���@�Ӿ��N�]0 < N <= 100�^�A�N��H�U���X�մ��ո�ơC�C�����ո�Ƥ@�C�A�U��1�Ӿ�� P�A�N�O�}�l���Ʀr�C

Output

��C�@���ո�ơA�п�X2�ӼƦr�G�o��j��һݪ��̤֦��ƪ��ۥ[�A�H�θӰj��C

Sample Input

5
195
265
750
2
99

Sample Output

4 9339
5 45254
3 6666
1 4
6 79497
*/