/* 102 Ecological Bin Packing Accepted C++ 0.032 2011-02-09 04:46:35 */
#include<stdio.h>
#define INT_MAX 2147483647
int main(){
	int B[3],G[3],C[3];
	while(scanf("%d%d%d%d%d%d%d%d%d",&B[0],&G[0],&C[0],&B[1],&G[1],&C[1],&B[2],&G[2],&C[2])==9){
		char str[4];		
		str[3]='\0';
		int k;
		int min=INT_MAX,type=0;
		if((k=B[1]+B[2]+C[0]+C[2]+G[0]+G[1])<min) // BCG type 1
			min=k,type=1;
		if((k=B[1]+B[2]+C[0]+C[1]+G[0]+G[2])<min) // BGC type 2
			min=k,type=2;
		if((k=B[0]+B[2]+C[1]+C[2]+G[0]+G[1])<min) // CBG type 3
			min=k,type=3;
		if((k=B[0]+B[1]+C[1]+C[2]+G[0]+G[2])<min) // CGB type 4
			min=k,type=4;
		if((k=B[0]+B[2]+C[0]+C[1]+G[1]+G[2])<min) // GBC type 5
			min=k,type=5;
		if((k=B[0]+B[1]+C[0]+C[2]+G[1]+G[2])<min) // GCB type 6
			min=k,type=6;
		switch(type){
			case 1:
				printf("BCG %d\n",min); break;
			case 2:
				printf("BGC %d\n",min); break;
			case 3:
				printf("CBG %d\n",min); break;
			case 4:
				printf("CGB %d\n",min); break;
			case 5:
				printf("GBC %d\n",min); break;
			case 6:
				printf("GCB %d\n",min); break;}
	}
	return 0;
}
/*

��3�ӱ�l�ΨӸ˦^���������~�A�����~���C�⦳�T�ءG�Ħ�]Brown�^�B���]Green�^�B�z����]Clear�^�C�b�o�Ӱ��D�̧ڭ̷|�i�D�A�C�ӱ�l�ت������~���C��μƶq�A�{�b�n�h����l�ت������~�ϱo�̫�C�ӱ�l�̳��u����@�C�⪺�����~�A�H��K�^���C�A�����ȴN�O�n��X�̤p�h�����~�l�ơC�A�i�H���]�C�ӱ�l���e�q�L���j�A�åB�`�@�h�����~�l�Ƥ��|�W�L231�C

Input

�C�����ո�Ƥ@��A�C�榳9�Ӿ��.�e3�ӥN���1�ӱ�l��Brown, Green, Clear�C�⪺�~�l�ơC���U�Ӫ�3�ӼƥN�� ��2�ӱ�l��Brown, Green, Clear�C�⪺�~�l�ơC�̫᪺3�ӼƥN���3�ӱ�l��Brown, Green, Clear�C�⪺�~�l�ơC

�Ҧp�G10 15 20 30 12 8 15 8 31 

��ܦ�20��Clear�⪺�����~�b��1�ӱ�l�ءA12��Green�⪺�����~�b��2�ӱ�l�ءA15��Brown�⪺�����~�b��3�ӱ�l�ءC

Output

��C�@�����ո�ơA��X3�ӱ�l���̫�s�񤧬����~�C��A�H�γ̤p�h�����~�l�ơC�ХH�j�g��'G'�B 'B'�B 'C' ���O�N����]Green�^�B�Ħ�]Brown�^�B�z����]Clear�^�C

�Ҧp�GBCG 30

�N��̫�h�������G��1�ӱ�l���������~�C�⬰Brown�A��2�ӱ�l���������~�C�⬰Clear�A��3�ӱ�l���������~�C�⬰Green.�åB�`�@�h���F30�Ӭ����~�C

�p�G�̤p�h���~�l�Ʀ��@�եH�W���զX�A�п�X�r�嶶�ǳ̤p�����@�յ��סC

Sample input

1 2 3 4 5 6 7 8 9
5 10 5 20 10 5 10 20 10

Sample Output

BCG 30
CBG 50

*/