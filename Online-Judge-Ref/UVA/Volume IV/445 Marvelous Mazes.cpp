/* 445 Marvelous Mazes Accepted C++ 0.016 2011-02-15 11:35:14 */
#include<stdio.h>
int main(){
	char str[150];
	while(gets(str)){
		int i,j;
		int temp;
		for(i=temp=0;str[i]!='\0';i++){
			if(str[i]>='0'&&str[i]<='9')
				temp+=str[i]-'0';
			if(str[i]>='A'&&str[i]<='Z'){
				for(j=1;j<=temp;j++)
					printf("%c",str[i]);
				temp=0;}
			if(str[i]=='b'){
				for(j=1;j<=temp;j++)
					putchar(' ');
				temp=0;}
			if(str[i]=='*'){
				for(j=1;j<=temp;j++)
					putchar('*');
				temp=0;}
			if(str[i]=='!')
				putchar('\n');}
		putchar('\n');
	}
	return 0;
}
/*

���D���A�����ȬO�g�@��i�H�e�g�c���{���A�o�Ӱg�c�N�ѢϡТ�26�Ӧr����*�]�P���^�M�ťզr���զ��C

Input and Output

�A���{�������qinputŪ�J�g�c����T�A��J�N�]�t�ƦC�r���A�A���{�������̷ӫ��ܵe�X�g�c�C�g�c���C�@�C���|�ǥѤ@�t�C���Ʀr�M�r���Ӫ�F�A�Ʀr�N��o�Ӧr���Q�ϥΦh�֦��C�p�G�Ʀr�W�L�@��ƫh�o�Ӧr�����ƥX�{�����Ƭ��C�@��Ƭۥ[���`�X�C

�binput���p�g��"b"�N��ťզr���A��ĸ��]!�^�H�δ��泣�N�����@�C�C

�g�c���C�ƨèS������A���O�C�@�C���|�W�L132�Ӧr���C

Sample Input

1T1b5T!1T2b1T1b2T!1T1b1T2b2T!1T3b1T1b1T!3T3b1T!1T3b1T1b1T!5T1*1T
 
11X21b1X
4X1b1X
Sample Output

T TTTTT
T  T TT
T T  TT
T   T T
TTT   T
T   T T
TTTTT*T
 
XX   X
XXXX X

*/