/* 10141 Request for Proposal Accepted C++ 0.016 2011-01-22 07:46:31 */
#include<stdio.h>
#include<string.h>
int main(){
	int n,p,count;
	char b;
	bool first;
	count=1;
	first=true;
	while(scanf("%d%d",&n,&p)==2&&(n!=0&&p!=0)){		
		char temp[100];
		char company[100];
		int max_supply,temp_supply;
		double min_price,temp_price;

		int i,j;
		b=getchar();
		for(i=1;i<=n;i++)
			gets(temp);		
		for(min_price=max_supply=0,i=1;i<=p;i++){
			gets(temp);			
			scanf("%lf%d",&temp_price,&temp_supply);
			if(temp_supply>max_supply){
				max_supply=temp_supply;
				min_price=temp_price;
				strcpy(company,temp);}
			else if(temp_supply==max_supply)
				if(temp_price<min_price){		
					max_supply=temp_supply;
					min_price=temp_price;
					strcpy(company,temp);}
			b=getchar();
			for(j=1;j<=temp_supply;j++)
				gets(temp);
		}
		if(!first)
			putchar('\n');
		first=false;
		printf("RFP #%d\n",count++);
		printf("%s\n",company);
	}
	return 0;
}
/*

��F�������Υ��~�b�ݭn���ʮɡA�L�̷|�C�@�i���ʻݨD��]Request for Proposal, RFP�^�C�b�W���|�C�X�L�̻ݭn���F��C�U�t�ӷ|���X�ۤv��������]�W�����ണ�Ѫ��ݨD���ؤγ����^�H�����q��C

�F�������Υ��~�|���@�����̨ӵ����ַ|�o�СC�������覡�O�L��C�a�t�Ӱ��@�i������A�W�������ʻݨD���U���ݨD�C�p�G�o�t�ӯണ�ѬY�@���ݨD�A�N�b�ӻݨD�W�����@�ӤġC���ĤĪ��ƥإN���a�t�ӯມ�����ʻݨD���{�סC�����̳̫�|��X���Ĥļƥس̦h���t�Өӵ����q��C�p�G���h�a�t�ӥ��ĤĪ��ƥؤ@�˦h���ܡA�N������̧C�����a�C�p�G�s�������@�ˡA�N���J���e�������a�C

Input

�C�մ��ո�ƪ��Ĥ@�C��2�Ӿ�� n �M p�Cn�]0 < n <= 1000�^�N����ʻݨD��W���ݨD�����ؼƥءAp�N���мt�Ӫ��ƥءC�]�Yn=0,p=0�N���J�����C�^

���U�Ӫ�n�C�����ʻݨD���ݨD���ءA�C�C�̦h���|�W�L80�Ӧr���A�j�p�g�������P���r���C

�A���U�Ӧ��op�a�t�Ӫ��������ơC�C�a�t�Ӹ�ƪ��Ĥ@�C���o�a�t�Ӫ��W�r�C���U�Ӫ��@�C���@�ӯB�I�� d �Τ@�Ӿ��  r�]0 <= r <= n�^�Ad�N������h�֡Ar�N������̥��ĤĪ��ƥءA�]�N�O�ŦX���ʻݨD���ت��ƥءC�A���U�Ӫ�r�C�C�C���@���ݨD���ءA�C�@�����|�b���ʻݨD��W�A�åB���|�����ƪ��X�{�C

�аѦ�Sample Input�C

Output

��C�մ��ո�ƽп�X�o�O�ĴX�մ��ո�ƥH�αo�мt�Ӫ��W�r�C

���ո�ƶ��ЪŤ@�C�A�аѦ�Sample Output�C

Sample Input

6 4
engine
brakes
tires
ashtray
vinyl roof
trip computer
Chevrolet
20000.00 3
engine
tires
brakes
Cadillac
70000.00 4
ashtray
vinyl roof
trip computer
engine
Hyundai
10000.00 3
engine
tires
ashtray
Lada
6000.00 1
tires
1 1
coffee
Starbucks
1.50 1
coffee
0 0

Sample Output

RFP #1
Cadillac

RFP #2
Starbucks
 
*/