/* 490 Rotating Sentences Accepted C++ 0.016 2011-02-16 12:35:25 */
#include<stdio.h>
int check(bool eof[],int max){
	int i;
	for(i=0;i<max&&eof[i];i++);
	if(i>=max)
		return false;
	else
		return true;
}
int main(){
	char str[100][101];
	bool eof[100]={false};
	int i,j,max;
	i=0;
	while(gets(str[i++]));
	max=i-1;
	for(i=0;check(eof,max)==1;i++){
		for(j=max-1;j>=0;j--){			
			if(eof[j])
				putchar(' ');
			else
				printf("%c",str[j][i]);
			if(str[j][i+1]=='\0')
				eof[j]=true;}
		putchar('\n');}
	return 0;
}
/*

�b�o�Ӱ��D���A�����N�ƦC��r�����ɰw��V����90�סC�]�N�O���N�쥻�ѥ���k�A�ѤW��U���y�l��X���ѤW��U�A�ѥk�쥪�C

Input and Output

��J�̦h���|�W�L100�C�A�C�C�̦h���|�W�L100�Ӧr���C
�X�k���r���]�A�G����A�ťաA�Ҧ������I�Ÿ��A�Ʀr�A�H�Τj�p�g�r���C�]�`�N�GTabs�ä���O�X�k�r���C�^

�̫�@�C��J����������X�b�̥���@��A��J���Ĥ@�C����������X�b�̥k��@��C

�аѦ�sample intput/output�C

Sample Input

Rene Decartes once said,"I think, therefore I am."

Sample Output

"RIe nteh iDnekc,a rttheesr eofnocree  sIa iadm,. "

*/