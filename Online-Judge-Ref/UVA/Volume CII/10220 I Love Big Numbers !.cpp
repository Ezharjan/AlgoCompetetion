/* 10220 I Love Big Numbers ! Accepted C++ 0.056 2011-02-03 09:00:24 */
#include<stdio.h>
#include<string.h>
char str1[9999];
char str2[6];
char result[9999];
void mul(){
	int i,j,k,m,carry;
	int len_1,len_2;
	len_1=strlen(str1);
	len_2=strlen(str2);
	for(i=0;i<len_1+len_2+1;i++)
		result[i]='0';
	for(i=len_1-1;i>=0;i--)
		for(j=len_2-1;j>=0;j--){
			m=i+j+1;
			k=(str1[i]-'0')*(str2[j]-'0');
			carry=k/10;
			result[m]+=k%10;
			if(result[m]>'9'){
				carry++;
				result[m]-=10;}
			while(carry>0){
				result[m-1]+=carry;
				carry=0;
				if(result[m-1]>'9'){
					carry=(result[m-1]-'0')/10;
					result[m-1]=((result[m-1]-'0')%10+'0');}
				m--;
			}
		}
	result[len_1+len_2]='\0';
	if(result[0]=='0')
		for(i=0;result[i]!='\0';i++)
			result[i]=result[i+1];	
	strcpy(str1,result);		
}
int main(){
	int i,j;
	int sum;
	int p[1001];
	str1[0]='1';
	str1[1]='\0';		
	for(i=1;i<=1001;i++){
		for(j=sum=0;str1[j]!='\0';j++)
			sum+=str1[j]-'0';
		p[i-1]=sum;
		sprintf(str2,"%d",i);
		mul();}		
	int n;
	while(scanf("%d",&n)==1){
		printf("%d\n",p[n]);
	}
	return 0;
}
/*

���@�Ӧ~�����k�Ĩ��i�@�a��ޤ��ߡA�b���̦o�J��@�ӥs�����j1���������H�C�o�Ӥk�ķQ�n�@�ˤ@�U�����H�A�N�ݥL�G�u�A�|�ƾǶܡH�v�yYes�A�ڷR�ƾǡz�����H�^���C

�uOkey! ���ڴN���A�@�ӼơA�A�n��X�o�Ӽƪ����h�A�M��i�D�کҦ��Ʀr���M�O�h�֡I���]�o�ӼƬO5�A�A�����n�p��5!=120�A�M���X�Ʀr���M 1+2+0=3 �C�A�వ��ܡH�v

�yYes�A�ڥi�H����C�z

�u���]�o�ӼƬO100�A���׬O�h�֡H�v�o�ӮɭԾ����H�N�}�l��ҩM�p��C�g�L�X������u�ݨ���j1���Y�_�շϡA�äj�s�G�y�ɶ��z���F�I�z

���k�į��۹���j1�����G���׬O648. �����᦬�_�o�����O���q�������ӥh�A�d�U���j1���@�y����M�C

�A�����ȴN�O�n���U���j1���ѨM�o�Ӱ��D�C

��J���� �G

��J���C�@����ո�Ʀ�1�Ӿ�� n�] a <= 1000�^�C

��X���� �G


��C�@�ӿ�Jn�A��Xn!���ӼƦr�`�M�C�o�ӼƤ@�w�p��231-1�C

�d�ҿ�J �G 

5
60
100
�d�ҿ�X �G

3
288
648

���� �G

* Luck ��½Ķ

�X�B �G

ACM 10220 

*/