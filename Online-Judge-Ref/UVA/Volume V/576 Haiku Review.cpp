/* 576 Haiku Review Accepted C++ 0.016 2011-02-03 06:59:50 */
#include<stdio.h>
#include<string.h>
int main(){
	char str[205];
	while(gets(str)){
		if(strcmp(str,"e/o/i")==0)
			break;
		int i,j,k;
		int base[]={5,7,5};
		bool YES;
		bool dou; 
		for(i=1,j=0,k=0,YES=true;i<=3;i++,j++,k=0){
			dou=false;
			for(;str[j]!='/'&&str[j]!='\0';j++){
				if(str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u'&&str[j]!='y')
					dou=false;
				else if(str[j]!=' '){
					if(!dou)
						k++,dou=true;}
				else
					dou=false;}
			if(k!=base[i-1]){
				printf("%d\n",i);
				YES=false;
				break;}
		}
		if(YES)
			puts("Y");
	}
	return 0;
}
/*

Haiku�]�֥y�^�O�饻�j�N���@�ظֵ��C�L�O�Ѥ����`�B�C���`�B�����`���T�y�@17���`�Ҳզ����u�֡CHaiku���ݭn�����C�H�U�O�@�ӨҤl�A�y�l���H�׽u���}�G

Computer programs/The bugs try to eat my code/I must not let them.

�A�����ȬO�g�@�ӵ{���AŪ�i�@��haiku�A���ˬd�䭵�`�C

��J���� �G

�C�մ��ո�Ƥ@�CHaiku�A�@�w�t��3�ӥy�l�A�C�ӥy�l�ܤ֧t��1�Ӧr�A�r�P�r���H�@�ťզr���α׽u���j�C�׽u�]�O�ΨӤ��j�y�l���A�ҥH�@�C���@�w�t��2�ӱ׽u�CHaiku�u�t���p�g���^��r���]a~z�^�A�׽u�A�ťզr���C�C�C�����פ��|�W�L200�Ӧr���C

��J�C��e/o/i�N���J�����C�аѦ�Sample Input�C

�A���{�ѬO�P�_�C�ӥy�l�O�_�����T�����`�]5/7/5�^�C�b�����D���A�@�ӭ��`�����O�s�򪺥����r���Φ����r���ǦC�C�����r���]�ta,e,i,o,u,y�C�C�Ӧr�ܤ֥]�t�@���`�C

�`�N�G�b�o�̺⭵�`���覡��^����k�ä��@�P�C�Ҧp�b�H�U��2��sample input���Acode�o�Ӧr�b���{�������Ӻ⬰2�ӭ��`�A�]��o�Me�ä��s��C�M�ӡA�Y�H�^���code�o�Ӧr���u���@�ӭ��`�C

��X���� �G

��C�@�մ��ո�ơA�p�G��Haiku�����T�A�п�X�Ĥ@�ӧt�����ﭵ�`�Ӽƪ��y�l�O���@�ӡC�]�]�N�O���G�Y�Ĥ@�ӥy�l�����`�ӼƤ���A�п�X1�C�_�h�A�Y �ĤG�ӥy�l�����`�ӼƤ���A�п�X2�C�_�h�A�Y�ĤT�ӥy�l�����`�ӼƤ���A�п�X3�C�^�Y�T�ӥy�l���`���Ӽƥ���h�п�XY�C

�d�ҿ�J �G 

happy purple frog/eating bugs in the marshes/get indigestion
computer programs/the bugs try to eat my code/i will not let them
a e i o u/this is seven syllables/a e i o u y
e/o/i

�d�ҿ�X �G

Y
2
3

���� �G

* ����½Ķ�GLucky �� �^ �� 

�X�B �G

ACM 576 

*/