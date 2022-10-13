/* 555 Bridge Hands Accepted C++ 0.092 2011-02-18 12:31:10 */
#include<stdio.h>
struct card{
	char patten;
	char point;
};
static struct card hand[4][13]; // [0] S [1] W [2] N [3] E �ѥ����k �Ѥp�ܤj
void initial(char str1[],char str2[],char c){
	int i,j,k,count;
	switch(c){
		case 'S': i=1; break;
		case 'W': i=2; break;
		case 'N': i=3; break;
		case 'E': i=0; break;}
	for(j=k=count=0;str1[j]!='\0';i++,count++){
		if(i==4) i=0;
		if(count==4){ k++,count=0;}
		hand[i][k].patten=str1[j++];		
		hand[i][k].point=str1[j++];}
	for(j=0;str2[j]!='\0';i++,count++){
		if(i==4) i=0;
		if(count==4) { k++,count=0; }
		hand[i][k].patten=str2[j++];
		hand[i][k].point=str2[j++];}
}
void swap(card *x,card *y){
	card temp;
	temp.patten=(*x).patten;
	temp.point=(*x).point;
	(*x).patten=(*y).patten;
	(*x).point=(*y).point;
	(*y).patten=temp.patten;
	(*y).point=temp.point;
}
int compare(card x,card y){
	if(x.patten==y.patten)
		if(x.point=='A')
			return true; 
		else if(y.point=='A')
			return false; // Do not swap.
		else if(x.point=='K')
			return true;
		else if(y.point=='K')
			return false;
		else if(x.point=='Q')
			return true;
		else if(y.point=='Q')
			return false;
		else if(x.point=='J')
			return true;
		else if(y.point=='J')
			return false;
		else if(x.point=='T')
			return true;
		else if(y.point=='T')
			return false;
		else if(x.point>y.point) // �ѤU����2~9
			return true;
		else
			return false;
	else{
		if(x.patten=='H')
			return true;
		else if(y.patten=='H')
			return false;
		else if(x.patten=='S')
			return true;
		else if(y.patten=='S')
			return false;
		else if(x.patten=='D')
			return true;
		else if(y.patten=='D')
			return false;}
}
int main(){
	char c;
	while(scanf("%c",&c)==1){
		if(c=='#') break;
		char temp=getchar();
		int i,j,k;
		char str1[100];
		char str2[100];
		gets(str1);
		gets(str2);
		initial(str1,str2,c);
		for(i=0;i<4;i++)
			for(j=0;j<13;j++)
				for(k=j+1;k<13;k++)
					if(compare(hand[i][j],hand[i][k]))
						swap(&hand[i][j],&hand[i][k]);
		for(i=0;i<4;i++){
			switch(i){ 
				case 0: printf("S:"); break;
				case 1: printf("W:"); break; 
				case 2: printf("N:"); break; 
				case 3: printf("E:"); break;}
			for(j=0;j<13;j++)
				printf(" %c%c",hand[i][j].patten,hand[i][j].point);
			putchar('\n');}
	}
	return 0;
}
/*

�ܦh���J�P�C���A�Ҧp���P�A��������52�i�P���y�o��4�Ӫ��a�C�ҥH�C�Ӫ��a��13�i�P�C�F�`�����a����P�N�i�H�������F�A���O�@�몺���a�q�`�ݭn����P���Ӫ����I�ƱƧǤ@�U�C

�b�o�Ӱ��D�̭��A�ڭ̩w�q���j�p�����Ǭ��GCLUBS<DIAMONDS<SPADES<HEARTS�]�ڭ̱q�{�b�_���O�HC�BD�BS�BH�ӥN��H�W�|�Ӫ��^�C�ܩ��I�Ƥ譱�A�ڭ̩w�q�j�p�����Ǭ��G2<3<4<5<6<7<8<9<T<J<Q<K<A�]T�N��10�AJ�N��Jack�AQ�N��Queen�AK�N��King�AA�N��Ace�^�C

�|�Ӫ��a���O���b�F�n��_�|�Ӧ�m�C�䤤�@�ӳQ���w���o�P�̡A��L�o�P���ɭԬO�q�L���䨺�@��}�l�̶�������V�o�_�A�����̫�@�i�P�o���ۤv�C�аѦҤU�ϡC�����D�N�O�ЧA�g�@�ӵ{���Ӽ����o�P�αƧǪ��L�{�C

Input

��J�]�t�n�X�մ��ո�ơA�C�մ��ո��3�C�C�Ĥ@�C���@�Ӧr���N��o�P�̡]N,E,S,W�䤤���@�A�Y���r����#�N���J�����^�A���U�Ӫ�2�C���P�����e�A�C�C26�i�P�C�o52�i�P�N�O�o�P�̭n�̧ǵo���U�a���P�]�C2�Ӧr���N��@�i�P�A�Ҧp�GCQ�N���i�P��⬰CLUB�B�I�Ƭ�Q�^�C�аѦ�Sample Input�C

Output

�C�տ�J��ƽп�X�|�C�A�C�쪱�a�@�C�A�åB����S,W,N,E�����ǿ�X�C�Ъ`�N�G���a��W���P�ݸg�L�ƧǡC��X�榡�аѦ�Sample Output

Sample Input

N
CQDTC4D8S7HTDAH7D2S3D6C6S6D9S4SAD7H2CKH5D3CTS8C9H3C3
DQS9SQDJH8HAS2SKD4H4S5C7SJC8DKC5C2CAHQCJSTH6HKH9D5HJ
#

Sample Output

S: C3 C5 C7 CT CJ D9 DT DJ S3 SK H2 H9 HT
W: C2 C4 CK D4 D5 D6 DQ DA S4 S8 ST SJ H8
N: C6 C8 C9 CA D8 S9 SA H4 H5 H6 H7 HJ HA
E: CQ D2 D3 D7 DK S2 S5 S6 S7 SQ H3 HQ HK

*/