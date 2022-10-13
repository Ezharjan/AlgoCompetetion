/* 10878 Decode the tape Accepted C++ 0.016 2011-01-31 03:30:50 */
#include<stdio.h>
#include<string.h>
int main(){		
	char str[12];
	char head_tail[12]={"___________"};
	char result[10000];
	int index;
	bool start;
	start=false;
	while(gets(str)){
		if(strcmp(str,head_tail)==0){
			if(!start)
				index=0;
			if(start){
				result[index]='\0';
				printf("%s",result);}
			start=!start;			
			continue;}
		int i,j,sum;
		for(i=1,j=128,sum=0;i<11;i++){
			if(str[i]=='o')
				sum+=j;
			if(str[i]!='.')
				j/=2;}
		result[index++]=(char)sum;
	}
}
/*

�A���������@���¦��q�����a�l�C�a�l�W�����\�h�p�}�A�o�Ǥp�}�i��t���Y�Ǧ��Ϊ��T���C�A�����n��X�a�l�W��������˪��T���C

Input

��J�]�t�@���a�l�C

Output

��X�a�l�W���T���C�аѦ� Sample Input��Sample Output�A�A���ӥi�H��X�p�}�ο�X�r�������Y�C

Sample Input
___________
| o   .  o|
|  o  .   |
| ooo .  o|
| ooo .o o|
| oo o.  o|
| oo  . oo|
| oo o. oo|
|  o  .   |
| oo  . o |
| ooo . o |
| oo o.ooo|
| ooo .ooo|
| oo o.oo |
|  o  .   |
| oo  .oo |
| oo o.ooo|
| oooo.   |
|  o  .   |
| oo o. o |
| ooo .o o|
| oo o.o o|
| ooo .   |
| ooo . oo|
|  o  .   |
| oo o.ooo|
| ooo .oo |
| oo  .o o|
| ooo . o |
|  o  .   |
| ooo .o  |
| oo o.   |
| oo  .o o|
|  o  .   |
| oo o.o  |
| oo  .  o|
| oooo. o |
| oooo.  o|
|  o  .   |
| oo  .o  |
| oo o.ooo|
| oo  .ooo|
|  o o.oo |
|    o. o |
___________

Sample Output 

A quick brown fox jumps over the lazy dog.
 
*/