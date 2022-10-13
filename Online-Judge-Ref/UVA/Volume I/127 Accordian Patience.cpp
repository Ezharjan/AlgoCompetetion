/* 127 "Accordian" Patience Accepted C++ 0.300 2011-02-09 09:02:41 */
#include<stdio.h>
#define COPY(x,y) { x=y; }
struct card{
	char flower;
	char point;
};
static struct card table[52][52];
static int top[52]; // table ���Y�@�|���̤W�h
void initial(char str1[],char str2[]){ // �N��J�ഫ�� table �W����l���A
	int i,j;
	for(i=j=0;str1[i]!='\0'&&j<26;i++,j++){
		if(str1[i]==' ') i++;
		table[j][0].point=str1[i++];
		table[j][0].flower=str1[i++];		
		top[j]=0;}
	for(i=0;str2[i]!='\0'&&j<52;i++,j++){
		if(str2[i]==' ') i++;
		table[j][0].point=str2[i++];
		table[j][0].flower=str2[i++];		
		top[j]=0;}
}
void copy(struct card *x,struct card *y){
	(*x).flower=(*y).flower;
	(*x).point=(*y).point;
}
void move(int n,int *quantity){
	int i,j;
	for(i=n;i+1<*quantity;i++){
		for(j=0;j<=top[i+1];j++)
			copy(&table[i][j],&table[i+1][j]);
		top[i]=top[i+1];
	}
	(*quantity)--;
}

int main(){
	char str1[100];
	char str2[100];
	int result[52];
	int count=0;
	int index=0;
	while(gets(str1)){		
		if(str1[0]=='#') break;
		gets(str2);
		int i,j;
		int quantity;
		initial(str1,str2);
		for(i=1,quantity=52;i<quantity;){			
			if((j=i-3)>=0&&(table[i][top[i]].flower==table[j][top[j]].flower||table[i][top[i]].point==table[j][top[j]].point)){
				copy(&table[j][++top[j]],&table[i][top[i]--]);
				if(top[i]==-1) move(i,&quantity); // ���|�P�w�� ����
				i=j;}
			else if((j=i-1)>=0&&(table[i][top[i]].flower==table[j][top[j]].flower||table[i][top[i]].point==table[j][top[j]].point)){				
				copy(&table[j][++top[j]],&table[i][top[i]--]);
				if(top[i]==-1) move(i,&quantity);
				i=j;}
			else i++;}
		for(j=0;j<quantity;j++)
			result[index++]=top[j]+1;	
		if(index==1)
			printf("%d pile remaining:",index);
		else
			printf("%d piles remaining:",index);
		for(i=0;i<index;i++)
			printf(" %d",result[i]);
		putchar('\n');
		index=0; // ���m index			
		
	}
	return 0;
}
/*

�A�����ȬO�����@�إs�uAccordian�v���ȵP�C���A�L���C���W�h�p�U�G

�@�Ƽ��J�P��52�i�P�A������ȵP�@�i�@�i�ѥ���k�Ʀn�]���঳���|�A�ҥH�@��52��P�A�C��@�i�^�A��Y�@�i�P�P�L���䨺�i�P�Ϊ̥��䪺�ĤT�i�P���uMatch�v���ɭԡA�N��o�i�P���쨺�i�P�W���h�C�b�o�̨�i�P�uMatch�v�����O�o��i�P�����]suit�^�Ϊ��I�ơ]rank�^�@�ˡC��A���F�@�Ӳ��ʤ���A�n��ݬO�_�٥i�H����L�����ʡC�b����ɶ��A�u���̤W�����i�P�i�H�Q���ʡC�p�G�]�����ʤ@�i�P�ϱo���ͤ@�ӪŮ�]�]�N�O�Q���ʪ�����P�u���@�i�P�^�A�A������k��Ҧ����P�啕�����@��C�p�����_���M��i���ʪ��P�A����S���@�i�P�i�H���ʹC���N�����F�C

�b��ܥi�H���ʪ��P���ɭԥi�঳�Ǫ��p�|�o�͡C�p�G����i�P���i�H���ʡA�A���ӭn���ʳ̥��䪺���i�P�C��@�i�P�i�H�Q���ʨ쥪��@��A�Υ���T�檺�ɭԡA�A�������ʨ쥪��T��C

Input

��J�]�t�h�մ��ո�ơC�C�մ��ո�ƨ�C�A�C�C��26�i�P����ơC�C�i�P�H2�Ӧr���N��C�Ĥ@�Ӧr���N��P���I�ơ]A=Ace, 2~9, T=10, J=Jack, Q=Queen, K=King�^�A�ĤG�Ӧr���N��P�����]C=Clubs, D=Diamonds, H=Hearts, S=Spades�^

�Y�J��ȧt#���@�C�N���J�����C�аѦ�Sample Input�C

Output

��C�մ��ո�ƿ�X�C�������ɳѤU�X��P�A�H�ΨC��P���h�ֱi�P�C�Ъ`�N�p�G�u��1��P�Apile��S���[s�A�аѦ�Sample Output�C

Sample input

QD AD 8H 5S 3H 5H TC 4D JH KS 6H 8S JS AC AS 8D 2H QS TS 3S AH 4H TH TD 3C 6S
8C 7D 4C 4S 7S 9H 7C 5D 2S KD 2D QH JD 6D 9D JC 2C KH 3D QC 6C 9S KC 7H 9C 5C
AC 2C 3C 4C 5C 6C 7C 8C 9C TC JC QC KC AD 2D 3D 4D 5D 6D 7D 8D TD 9D JD QD KD
AH 2H 3H 4H 5H 6H 7H 8H 9H KH 6S QH TH AS 2S 3S 4S 5S JH 7S 8S 9S TS JS QS KS
#

Sample Output

6 piles remaining: 40 8 1 1 1 1
1 pile remaining: 52

*/