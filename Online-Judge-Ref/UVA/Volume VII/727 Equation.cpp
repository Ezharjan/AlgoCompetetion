/* 727 Equation Accepted C++ 0.036 2011-02-22 15:30:30 */
#include<stdio.h>
static char stack[1000000];
static int index;
void initial(){
	stack[0]='\0';
	index=1;
}
void push(char c){
	stack[index++]=c;
}
char top(){
	return stack[index-1];
}
char pop(){
	return stack[--index];
}
int priority(char c){
	switch(c){
	case '\0':
		return 0;
	case '(':
		return 1;
	case '+':
	case '-':
		return 2;
	case '*':
	case '/':
		return 3;
	}
}
int main(){
	int n;
	while(scanf("%d",&n)==1){
		(void)getchar(); // ����q������
		(void)getchar(); // �B��l���e������
		while(n--){
			char c;	
			while(c=getchar()){
				if(c=='\n'||c==EOF)
					break;
				if(c>='0'&&c<='9')
					printf("%c",c);
				else if(c=='(')
					push(c);
				else if(c==')'){
					while(stack[index-1]!='(')
						printf("%c",pop());
					(void) pop();}
				else{
					while(top()!='\0'&&priority(top())>=priority(c))
						printf("%c",pop());
					push(c);}
				c=getchar();}
			while(top()!='\0')
				printf("%c",pop());
			putchar('\n');
			if(n>0)
				putchar('\n');
		}
	}
	return 0;
}
/*

 ��J�P��X Input and Output
�ھڤU�C���W�w�g�@�ӵ{���N���m�B�⦡�令��m�B�⦡�C

1. ��J�����m�B�⦡�C��@�Ӧr���A�̦h50��C�Ҧp�A(3+2)*5 �N�H�U�C�Φ��X�{�G
 
(
3
+
2
)
*
5
2. ��J�ɲĤ@��|���@�ӼƦr��ܴ��ո�ƪ����ơC���U�ӷ|���n�X�ӹB�⦡�A�C�ӹB�⦡���e�|���@�ӪŦ�C 

3. ���{���ȳB�z +, -, *, / ���G���B��l�C

4. �B�⤸���@��ƼƦr�C

5. * �M / �B��l�u�����ǳ̰��C+ �M �V �B��l�h���̧C�C�ۦP�u�����Ǫ��B��l�h�ѥ��ܥk�B��C�A���h�O�Ψӧ����u�����Ǫ��s�ղŸ��C 

6. �C�ӫ�m�B�⦡��X���@��C�C�ӹB�⦡�����n���@�ӪŦ�C 

7. �C�����ո�Ƨ����X�k���B�⦡�C

�d�ҿ�J
 
1
 
(
3
+
2
)
*
5

�d�ҿ�X
 
32+5*

--------------------------------------------------------------------------------

Miguel Revilla 
2000-08-31 
������Ķ 
2007-05-25 

 */