/* 483 Word Scramble Accepted C++ 0.012 2011-02-16 11:58:01 */
#include<stdio.h>
#define SWAP(x,y) { char temp=x; x=y; y=temp; }
int main(){
	char str[100000];
	while(gets(str)){
		int i,j,k;		
		for(i=0;str[i]!='\0';i++){
			if(str[i]==' ')				
				continue;
			for(j=i+1;str[j]!=' '&&str[j]!='\0';j++);
			k=(--j);
			for(;j>i;i++,j--)
				SWAP(str[i],str[j]);
			i=k;
		}
		printf("%s\n",str);
	}
	return 0;
}
/*

�g�@��{���i�H�N�C�@�ӳ�r���ӨC�Ӧr���X�{�����ǤϧǱƦC�C

Input

��J�ɥ]�t�ƦC�A�C�C�U���ƭӳ�r�C��r�P��r���Ѫťզr�����j�}�ӡC

Output

��X���C�ƻP�r�ƥ����P��J�@�ˡC���O�C�ӳ�r�����r�������ϧǱƦC�C

Sample Input

I love you.
You love me.
We're a happy family.

Sample Output

I evol .uoy
uoY evol .em
er'eW a yppah .ylimaf

*/