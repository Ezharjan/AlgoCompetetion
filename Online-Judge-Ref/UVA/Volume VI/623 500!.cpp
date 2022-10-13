/* 623 500! Accepted C++ 0.040 2011-02-03 12:04:35 */
#include<stdio.h>
#include<string.h>
char str1[5000];
char str2[6];
char result[5000];
char table[1001][5000];
void mul(){
	int i,j,k,m,carry;
	int len_1=strlen(str1);
	int len_2=strlen(str2);
	for(i=0;i<len_1+len_2+1;i++)
		result[i]='0';
	for(i=len_1-1;i>=0;i--){
		for(j=len_2-1,carry=0;j>=0;j--){	
			m=i+j+1;
			k=(str1[i]-'0')*(str2[j]-'0')+(result[m]-'0')+carry;
			result[m]='0'+k%10;
			carry=k/10;}
		k=i;
		result[i]+=carry;
		while(result[k]>'9'){
			result[k-1]++;
			result[k]-=10;
			k--;}
	}
	result[len_1+len_2]='\0';
	if(result[0]=='0')
		for(i=0;result[i]!='\0';i++)
			result[i]=result[i+1];
	strcpy(str1,result);
}
int main(){
	str1[0]='1';
	str1[1]='\0';
	int i;
	for(i=1;i<=1001;i++){
		strcpy(table[i-1],str1);
		sprintf(str2,"%d",i);		
		mul();}			
	int n;
	while(scanf("%d",&n)==1){
		printf("%d!\n",n);
		if(n==0){
			puts("1");
			continue;}
		printf("%s\n",table[n]);
		
	}
	return 0;
}
/*

�A�����ȬO�g�@�ӵ{���p��n�����]n<=500�^�C500!�����ץi�F1135�ӼƦr�A�S�������ƪ���ƫ��A�i�H�ϥΡA�ҥH�A�����ϥΦr������ƫ��A�Ӽ�������ƪ����k�C

��J���� �G

��J���C�@�榳�@�Ӿ�� n �]0 <= n<= 1000�A�����h�áA���M�D�جO500�I�^

��X���� �G

��C�@���J�U��X2��Ĥ@�欰��J��n�[�W!�A�ĤG�欰n!�����e

�d�ҿ�J �G 

10
30
50
100

�d�ҿ�X �G

10!
3628800
30!
265252859812191058636308480000000
50!
30414093201713378043612608166064768844377641568960512000000000000
100!
93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000���� �G

* Luck ��½Ķ

�X�B �G

ACM 623 

*/