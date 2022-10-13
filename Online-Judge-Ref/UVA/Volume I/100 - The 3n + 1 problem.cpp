/*8382406	100	The 3n + 1 problem	Accepted	C++	0.664	2010-11-08 11:42:16*/
#include<stdio.h>
int n(int o){
	int length=1;
	while(o!=1){		
		if((o&1)==1)
			o=3*o+1;
		else
			o/=2;			
		length++;		
	}
	return length;
}
int main(){
	int i,j;
	while(scanf("%d%d",&i,&j)==2){
		printf("%d %d ",i,j);
		int max=1;
		if(i>j){
			int temp=i;
			i=j;
			j=temp;
		}
		for(int k=i;k<=j;k++){
			int length=n(k);			
			if(max<length)
				max=length;
		}
		printf("%d\n",max);

	}
	return 0;
}
/*
���e �G  
�Ҽ{�H�U���t��k�G

1.         ��J n
2.         �L�X n
3.         �p�G n = 1 ����
4.         �p�G n �O�_�� ���� n=3*n+1
5.         �_�h n=n/2
6.         GOTO 2

�Ҧp��J 22, �o�쪺�ƦC�G 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 

�ڱ������t��k������ƦӨ��|�פ� (��C�L�X 1 ���ɭ�)�C���M���t��k��²��A���H�W�������O�_�u��o�L�k���D�C�M�ӹ�Ҧ���n ( 0 < n < 1,000,000 )�ӻ��A�H�W�������w�g�Q���ҬO���T���C 

���@�ӿ�J n ,�z�L�H�W���t��k�ڭ̥i�H�o��@�ӼƦC�]1�@�������^�C���ƦC�����׺٬�n��cycle-length�C�W�����쪺�Ҥl, 22 �� cycle length�� 16. 

���D�ӤF�G���2�Ӿ��i�Aj�ڭ̷Q�n���D����i�Aj�]�]�ti�Aj�^�������ƩҲ��ͪ��ƦC���̤j�� cycle length �O�h�֡C
��J���� �G
��J�i��]�t�F�n�X�C���ո�ơA�C�@�C���@���Ƹ�� i�Aj �C 0< i�Aj < 1,000,000
��X���� �G
��C�@���J i , j �A���ӭn��X i, j �M���� i, j �������ƩҲ��ͪ��ƦC���̤j�� cycle length�C
�d�ҿ�J �G

1 10 100 200 201 210 900 1000
�d�ҿ�X �G

1 10 20 100 200 125 201 210 89 900 1000 174
���� �G
��J����̦h�F200000�C

�X�B �G
ms0472904 (�@�̡Gasas)
*/