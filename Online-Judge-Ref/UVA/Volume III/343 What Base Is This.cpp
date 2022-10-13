/* 343 What Base Is This? Accepted C++ 0.020 2011-02-12 09:21:54 */
#include<stdio.h>
#include<string.h>
int change(char c){
	if(c>='0'&&c<='9')
		return (int)c-'0';
	if(c>='A'&&c<='Z')
		return (int)c-'A'+10;
}
int compare(char s1[],int digit_a,char s2[],int digit_b){
	int a,b;
	int i;
	for(i=a=0;s1[i]!='\0';i++){
		a*=digit_a;
		a+=change(s1[i]);}
	for(i=b=0;s2[i]!='\0';i++){
		b*=digit_b;
		b+=change(s2[i]);}
	if(a==b)
		return true;
	else
		return false;
}
int main(){
	char str1[100];
	char str2[100];
	while(scanf("%s%s",str1,str2)==2){		
		int temp,min_a,min_b;
		int i,j;
		bool found=false;
		for(min_a=i=temp=0;str1[i]!='\0';i++){			
			j=change(str1[i]);			
			if(min_a<j+1)
				min_a=j+1;}		
		for(min_b=i=temp=0;str2[i]!='\0';i++){			
			j=change(str2[i]);			
			if(min_b<j+1)
				min_b=j+1;}	
		for(i=(min_a>2)?min_a:2;i<=36&&!found;i++)
			for(j=(min_b>2)?min_b:2;j<=36&&!found;j++)
				if(compare(str1,i,str2,j))
					found=true;	
		if(found)
			printf("%s (base %d) = %s (base %d)\n",str1,i-1,str2,j-1);
		else
			printf("%s is not equal to %s in any base 2..36\n",str1,str2);
	}
	return 0;
}
/*

�ڭ̪��D�b�@�ӼƦr�����P����m���v���]weight�^�O���P���C�Ҧp10�i�쪺�Ʀr362���A2���v���O100�A6���v���O101�A3���v���O102�C�ҥH�o�Ӽ�10�i�쪺��=3*102+6*101+2*100�C�P�˪�����]�A�Ω��L���i���C�M��362�o�ӼƦr�b9�i����14�i���ҥN���ȬO�M10�i��362���P���C

�b�����D���A���A2�ӼƦr�]�HX�BY�N��^�A�ЧA�g�@�ӵ{����XX�̤p�O�h�ֶi���A�BY�̤p�O�h�ֶi���A�~���X�AY�N��ۦP���ȡC�Ҧp�G���A12�M5�C�Y��10�i��Ӭݪ��ܡA�o2�ӼƩ���O���P���C���O���p�A��3�i��Ӭ�12,��6�i��Ӭ�5�O�H12(3�i��)=1*31+2*30=5(10�i��)�A��5(6�i��)=5(10�i��)�C�ҥH�p�G�A���i���ܡA12�M5�O�i�H�N��ۦP���Ȫ��C 

Input

�C�մ��ո�Ƥ@�C�A�]�t2�ӼƦrX�BY�CX�BY�i�H2�i����36�i���ӬݫݡC�b��F�W�A0��9�N�N��0��9�AA,B,C,......,Z�h���O�N��10,11,12,......,35 

Output

�C�մ��ո�ƿ�X���@�C�A�榡�аѦ�Sample Output�C�Ъ`�NX�BY���i��b2�i����36�i�����L�k�Ϥ��۵��C 

Sample Input

12   5
    10     A
12 34
  123   456
  1    2
  10   2
0 0

Sample Output

12 (base 3) = 5 (base 6)
10 (base 10) = A (base 11)
12 (base 17) = 34 (base 5)
123 is not equal to 456 in any base 2..36
1 is not equal to 2 in any base 2..36
10 (base 2) = 2 (base 3)
0 (base 2) = 0 (base 2)

*/