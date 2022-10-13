/* 389 Basically Speaking Accepted C++ 0.080 2011-02-14 11:33:38 */
#include<stdio.h>
int change1(char c){
	if(c>='0'&&c<='9')
		return c-'0';
	else
		return c-'A'+10;
}
char change2(int n){
	if(n>=0&&n<=9)
		return n+'0';
	else
		return n-10+'A';
}
int main(){
	char s[100];
	char result[100];
	int a,b;
	while(scanf("%s%d%d",s,&a,&b)==3){		
		char c=getchar();
		int sum;
		int i,j;
		for(i=0;i<100;i++)
			result[i]='\0';
		for(i=sum=0;s[i]!='\0';i++){
			sum*=a;
			sum+=change1(s[i]);}
		if(sum==0){
			printf("%7d\n",0);
			continue;}
		for(j=1,i=0;j<=sum;j*=b,i++);
		if(i>7){
			puts("  ERROR");
			continue;}
		for(j/=b,i=0;j>0;j/=b,i++){
			result[i]=change2(sum/j);
			sum%=j;}
		result[i]='\0';
		printf("%7s\n",result);
		
	}
	return 0;
}
/*

���@�a�s�y�p��������q�ЧA�����]�p�s�����p����C�o�x�p��������i�H�����P�Ʀr�t�Ϊ��ഫ�]�Ҧp�G�N�@��2�i�쪺�Ʀr�ഫ��10�i�쪺�Ʀr�^�C�o�x�p����٥������U�C���S�ʡG

�� 7-digit ����� 
���F�� 0 �� 9 �����s���~�A�٦� A �� F �����s 
�䴩 2 �i��� 16 �i�� 
Input

��J�t���h�մ��ո�ơC

�C�մ��ո�Ƥ@�C�A�t�� 3 �ӼƦr�C�Ĥ@�ӼƦr���A�ҭn�ഫ���Ʀr�C�ĤG�ӼƦr���n�ഫ���Ʀr���h�ֶi��C�ĤT�ӼƦr���n�N�o�ӼƦr�ন�h�ֶi�쪺�ơC�b�o3�Ӽƫe��i�঳�@�Φh�Ӫťզr���s�b�C

�HSample Input �Ĥ@�մ��ո�Ƭ��ҡG�N 1111000 �q 2 �i�� �ഫ�� 10 �i��C

Output

��C�մ��ո�ƿ�X�@�C �A��X�ഫ��X�{�b�p�����ܾ��W���Ʀr�C�o�ǼƦr���׬� 7�A�a�k����C�p�G�o�ӼƦr�Ӥj�L�k�H�p�����ܾ���ܡA�h��X "ERROR"�C��X�榡�аѦ� Sample Output�C

Sample Input 
1111000  2 10
  1111000  2  16  
2102101    3  10
2102101  3 15
  12312  4  2
     1A 15  2
1234567 10 16
   ABCD 16 15
   0 10 2
 000234 10 10  
   F00000 16 10

Sample Output 

    120
     78
   1765
    7CA
  ERROR
  11001
 12D687
   D071
      0
    234
  ERROR
 
*/