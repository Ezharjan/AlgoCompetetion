/*494 Kindergarten Counting Game Accepted C++ 0.008 2010-12-14 14:34:53 */
#include<stdio.h>
int main(){	
	char str[1000];
	int flag,count,i;
	while(gets(str)){
		for(i=0,count=0,flag=0;str[i]!='\0';i++)
			if((('A'<=str[i]&&str[i]<='Z')||('a'<=str[i]&&str[i]<='z'))){
				if(flag==0)
					count++;
				flag=1;				
			}
			else
				flag=0;
		printf("%d\n",count);
	}
	return 0;
}
/*
��@��C�榳�X�Ӧr�]word�^�C
Word���w�q�O�s�򪺦r���]letter: A~Z a~z�^�Ҳզ����r�C

Input

���ո�ƨC���@��A�C��ܤ֦��@�Ӧr�C

Output

��X�C�@�檺word�ơC

Sample input

Meep Meep!
I tot I taw a putty tat.
I did! I did! I did taw a putty tat.
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
Sample Output

2
7
10
9
*/