/* 10340 All in All Accepted C++ 0.012 2011-01-07 15:00:15 */
#include<stdio.h>
char s[1000000],t[1000000];
int main(){	
	while(scanf("%s%s",s,t)==2){	
		bool YES=true;
		int i,j;
		for(i=j=0;YES&&s[i]!='\0';i++,j++){
			while(s[i]!=t[j]){
				if(t[j]=='\0'){
					YES=false;
					break;
				}
				j++;
			}
			if(!YES)
				break;
		}
		if(s[i]=='\0'&&YES)
			puts("Yes");
		else
			puts("No");
			
	}
	return 0;
}
/*

���A2�Ӧr��s,t�A�ЧA�g�@�ӵ{���P�_�O�_s�Ot���l�r��C�]�N�O����A����t�r�ꤤ���Y�Ǧr����A�ѤU���r��N�Os�C

Input

�C�����ո�Ƥ@�C�C�C�C��2�Ӧr��As��t�A�H�ťդ��j�C

Output

��C�@�C��J�A�п�X�O�_s�Ot���l�r��C

Sample Input

abc abc
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
Sample Output

Yes
Yes
No
Yes
No

*/