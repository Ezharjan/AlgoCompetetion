/* 10082 WERTYU Accepted C++ 0.012 2011-01-07 12:26:42 */
#include<stdio.h>
char change(char a){
	switch(a){
		case '1':
			return '`';
		case '2':
			return '1';
		case '3':
			return '2';
		case '4':
			return '3';
		case '5':
			return '4';
		case '6':
			return '5';
		case '7':
			return '6';
		case '8':
			return '7';
		case '9':
			return '8';
		case '0':
			return '9';
		case '-':
			return '0';
		case '=':
			return '-';
		case '\\':
			return '=';
		case 'W':
			return 'Q';
		case 'E':
			return 'W';
		case 'R':
			return 'E';
		case 'T':
			return 'R';
		case 'Y':
			return 'T';
		case 'U':
			return 'Y';
		case 'I':
			return 'U';
		case 'O':
			return 'I';
		case 'P':
			return 'O';
		case '[':
			return 'P';
		case ']':
			return '[';
		case 'S':
			return 'A';
		case 'D':
			return 'S';
		case 'F':
			return 'D';
		case 'G':
			return 'F';
		case 'H':
			return 'G';
		case 'J':
			return 'H';
		case 'K':
			return 'J';
		case 'L':
			return 'K';
		case ';':
			return 'L';
		case '\'':
			return ';';
		case 'X':
			return 'Z';
		case 'C':
			return 'X';
		case 'V':
			return 'C';
		case 'B':
			return 'V';
		case 'N':
			return 'B';
		case 'M':
			return 'N';
		case ',':
			return 'M';
		case '.':
			return ',';
		case '/':
			return '.';
		case ' ':
			return ' ';
	}
}
int main(){
	char str[10000];
	while(gets(str)){
		char c;
		for(int i=0;str[i]!='\0';i++){
			c=change(str[i]);
			putchar(c);
		}
		putchar('\n');
	}
	return 0;
}
/*

���r�ɤ@�ӱ`�������~�N�O�S������b���T��m�A�ӬO���k��@�Ӧ�m�C�ҥH�|�o��Q�Q����W�AJ�Q����K���������p�C�A�����ȴN�O�n�⥴�����r�ץ��^�ӡC

Input

��J�]�t�\�h�C�A�C�C�i��]�t���Ʀr�A�ťզr���A�j�g�^��r���]Q�BA�BZ���~�^�A���I�Ÿ��]`���~�^�C

Output

��C�@�C�����C�Ӧr���A�п�X�b��L�]�p�W�ϡ^�W�䥪��@�Ӧ�m���r���C���O��J�����ťզr���A��X�ɥ�п�X�ťզr���C

Sample input

O S, GOMR YPFSU/
URD. ,U [JPMR MI,NRT OD 8346333
Sample Output

I AM FINE TODAY.
YES, MY PHONE NUMBER IS 7235222

*/