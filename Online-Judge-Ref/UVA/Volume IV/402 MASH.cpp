/* 402 M*A*S*H Accepted C++ 0.152 2011-02-03 06:18:09 */
#include<stdio.h>
#define END 0
int main(){
	int n,x;
	int count=1;	
	while(scanf("%d%d",&n,&x)==2){		
		int m[50];
		int b[20];
		int i,j,k;
		int alive;
		int start,pre;
		for(i=0;i<20;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n-1;i++)
			m[i]=i+1;
		alive=n;
		m[i]=END;
		for(i=0,start=0;i<20&&alive!=x;i++){			
			j=start;
			k=1;
			while(true){
				if(k%b[i]==0){
					alive--;
					if(j==start)
						start=m[j];
					else
						m[pre]=m[j];
				}
				if(m[j]==END||alive==x)
					break;				
				for(pre=start;m[pre]!=m[j];pre=m[pre]);
				j=m[j];
				k++;
			}
		}
		printf("Selection #%d\n",count++);
		printf("%d",start+1);
		for(i=m[start];i!=END;i=m[i])
			printf(" %d",i+1);		
		putchar('\n');
		putchar('\n');
	}
	return 0;
}
/*

Corporal Klinger�b���Դ����A�Щ������4077������|�C�L�Q�ɿ�k�n���}���Ӱ��a��C���n���곰�x�U�F�@�D�R�O�n�H�ֳz���覡���@�ǩ��B���å�]�@��X�ӤH�^�i�H�^����𰲡CKlinger�ݭn�A�������H���}���̡C

�ֳz���覡�O�o�˪��G�ǳƤ@�Ƽ��J�P�A�s�Ҧ��ѥ[���H�Ʀ��@�C�A�M��½�}���J�P�����Ĥ@�i�A���]�ӱi���J�P���I�ƬOK�A�����q�Ĥ@�ӤH��_�A���K �ӤH���ӤH�N�Q�^�O�X�C�A�M��U�@�ӤH�S�q1��_�A��K�ӤH�S�Q�^�O�X�C�A�p���U�h������̫�@�H����C��⧹�̫�@�H�ɡ]���޺��h�֡^�A½�}�U�@�i ���J�P�A�M��̷ӤW�����I�ƤS�q�Ĥ@�ӤH�q1�}�l��A�åB��ӫe�����覡�^�O�H�C�p���@������U�h�C��M�A�b�^�O���L�{���A�p�G�ѤU���H�Ƭ�X�H�A�C���N �����F�A�oX�H�N�O�i�H�^����𰲪����B�̡C

Klinger����k�b���J�P�W���ʤ�}�A�ҥH�L�i�H�ƥ����D���J�P���I�ơA���O�b�ֳz�}�l���e�@�����L���L�k���D�쩳�|���h�֤H�|�ѥ[�ֳz�C�A�����ȴN�O���L�g�@�ӵ{���A�b�̫�@�������D���h�֤H�ѥ[��A���W���L��X�L�ӯ��b���@�Ӧ�m�A�T�O�L�i�H�^����𰲡C

�b�����Ѥ@��²�檺�Ҥl�A�Y��10�ӤH�ѥ[�ֳz�A�B�u�঳2���B���å�A�Ӽ��J�P�X�{���I�ƨ̦��O3,5,4,3,2���ܡA����Klinger���ӭn�Ʀb��1�β�8�Ӧ�m�C

��J���� �G

�C�մ��ո��1�C�A�C�C�T�w��22�Ӿ�ơA�Ĥ@�Ӿ��N�]1 <= N <= 50�^�N���h�֤H�ѥ[�ֳz�C�ĤG�Ӿ��X�]1 <= X <= N�^�N���h�֭ө��B���å�i�H�^����𰲡C���U�Ӫ�20�Ӿ�ƨ̦���Klinger�Ҵ��Ѫ����J�P�X�{���I�ơA�o���I�Ƭ�1��11����ơC

��X���� �G

�C�մ��ո�ƽп�X�o�O�ĴX�մ��ո�ƥH��Klinger�i�H������m�]�Ѥp��j�ơ^�C�p�G�b20�i���J�P���A�C���S�������A�бN����ٳѤU���H�L�X�C�C�մ��ո�ƫ�Ť@�C�A�аѦ�Sample Output�C

�d�ҿ�J �G 

10 2 3 5 4 3 2 9 6 10 10 6 2 6 7 3 4 7 4 5 3 2
47 6 11 2 7 3 4 8 5 10 7 8 3 7 4 2 3 9 10 2 5 3

�d�ҿ�X �G

Selection #1
1 8

Selection #2
1 3 16 23 31 47

���� �G

* ����½Ķ�GLucky �� �^ �� 

�X�B �G

ACM 402 

*/