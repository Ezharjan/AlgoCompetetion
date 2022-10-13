/* 446 Kibbles "n" Bits "n" Bits "n" Bits Accepted C++ 0.012 2011-02-15 12:09:57 */
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
void two_digit(int a,char s[]){
	int i,j;
	for(i=j=1;j<=13;i<<=1,j++);
	for(j=0;i>1;i/=2,j++){
		if(i/2<=a){
			s[j]='1';
			a-=i/2;}
		else
			s[j]='0';}
	s[j]='\0';
}
int main(){
	int n;
	while(scanf("%d",&n)==1){
		char c=getchar();
		int i;
		char str[100];
		for(i=1;i<=n;i++){			
			gets(str);
			int a,b;			
			int j;
			char s1[100];
			char s2[100];
			char result[100];
			bool plus;
			for(j=a=0;str[j]!=' ';j++)
				a=a*16+change1(str[j]);
			if(str[++j]=='+')
				plus=true;
			else
				plus=false;
			for(j+=2,b=0;str[j]!='\0';j++)
				b=b*16+change1(str[j]);
			two_digit(a,s1);
			two_digit(b,s2);			
			if(plus)
				printf("%s + %s = %d\n",s1,s2,a+b);
			else
				printf("%s - %s = %d\n",s1,s2,a-b);
		}
	}
	return 0;
}
/*

�@�ӫܯh�ª��{���]�p�v���b�]�p�@��{���i�H�P��Ū�J��ӤQ���i�쪺�Ʀr�A�N���̬ۥ[�ά۴��H�Q�i���ܪk��X�C�P�ɡA�o��ӤQ���i��Ʀr���G�i���ܪk�]������X�A�N���U��sample output���榡�@�ˡC

�o��{���]�p�v�ַܼN�ۤv�����o�Ӵ��q���p�{���A���O��L�յ۰���2���ഫ�ɡA�L�o��M�P�V�F�¯l�C�ҥH�p�G�A�@�N���L�����o��p�{���A�L�|�D�`�a�P�§A�C

�A�i�H���]�H�U�����`�O���ߡG

�bŪ�J���Q���i��Ʀr���̤j���W�LFFF�C

�����k�B��ɲĤG�ӼƦr�û���Ĥ@�ӼƤp�A�]�N�O���A�B�⵲�G���|�O�t���C

�ťզr���b��ӿ�J�ɤ��|�H�Τ@�榡�X�{�A�]�N�O���C�檺�}�Y���|���ťզr���A�b�ӼƦr�ιB�⤸�����|���@�ťզr���C�]�аѦ�sample input�^
Input

�o���D�ت���J�Ӧۤ@�ӥѤU�C�榡�զ����ɮסG 


N �]�N��N�ӹB�⦡�n�p��^ 

�Q���i��1 (+ �� -) �Q���i��2 �]�Ĥ@�ӹB�⦡)�^ 

. 

. 

. 

�Q���i��1 (+ �� -) �Q���i��2 �]�� N �ӹB�⦡�^ 

Output

��X�ɥ�����u�H�U�榡�G 


�G�i��1 (+ �� -) �G�i��2 = �Q�i�� �]�Ĥ@�ӹB�⵲�G�^ 

. 

. 

. 

�G�i��1 (+ �� -) �G�i��2 = �Q�i�� �]�� N �ӹB�⵲�G �^ 

Sample Input

2
A + 3
AAA + BBB
Sample Output

0000000001010 + 0000000000011 = 13
0101010101010 + 0101110111011 = 5733

*/