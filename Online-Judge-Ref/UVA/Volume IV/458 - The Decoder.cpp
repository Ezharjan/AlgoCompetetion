/*8382459	458	The Decoder	Accepted	C++	0.040	2010-11-08 12:03:23*/
#include<stdio.h>
int main(){	
	char str[1000];
	while(gets(str)!=NULL){
		for(int i=0;str[i]!='\0';i++)
			printf("%c",str[i]-7);
		for(int i=0;i<1000;i++)
			str[i]='\0';
		printf("\n");
	}
	return 0;
}
/*
�b�K�X�Ṋ̀����@�ث�²�檺�[�K�覡�A�N�O����X���C�Ӧr���[�W�Y�@�Ӿ��K�ӱo��K�X���r���]���X�αK�X�r���@�w���bASCII�X���i�C�L���d�򤺡^�C�Ҧp�YK=2�A����apple�g�L�[�K��N�ܦ�crrng�F�C�ѱK�h�O�ϹL�Ӱ��C�o�Ӱ��D�O���A�@�ӱK�X�r��A�ЧA�̷ӤW�z���ѱK�覡��X���X�C

�ܩ�b�����Ȥ�K�쩳�O�h�֡A�Цۦ�ѷ�Sample Input��Sample Output���X�ӧa�I�۷�²�檺�C

Input

�C�����ո�Ƥ@�C�C�C�C��1�Ӧr��A�N�O�ݭn�ѱK�����X�C

Output

��C�@���ո�ơA�п�X�ѱK�᪺�K�X�C

Sample Input

1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5
1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5
1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5
Sample Output

*CDC is the trademark of the Control Data Corporation.
*IBM is a trademark of the International Business Machine Corporation.
*DEC is the trademark of the Digital Equipment Corporation.
*/