/* 488 Triangle Wave Accepted C++ 0.332 2011-01-26 12:25:58 */
#include<stdio.h>
int main(){
	int n;	
	bool first;
	first=true;
	while(scanf("%d",&n)==1){
		if(!first)
			putchar('\n');
		first=false;
		int i,j,k,m;		
		bool data_first;
		data_first=true;		
		for(i=1;i<=n;i++){
			int a,f;			
			scanf("%d%d",&a,&f);
			for(j=1;j<=f;j++){
				if(!data_first)
					putchar('\n');
				data_first=false;
				for(k=1;k<=a;k++){
					for(m=1;m<=k;m++)
						printf("%d",k);
					putchar('\n');
				}
				for(k=a-1;k>=1;k--){
					for(m=1;m<=k;m++)
						printf("%d",k);
					putchar('\n');
				}	
			}
		}
	}
	return 0;
}
/*

�b�o�Ӱ��D���A�ھکҵ������T(Amplitude)���W�v(Frequency)�A�A���{���n���ͳo�˪��i�C

��J���� �G

��J���Ĥ@�C���@�Ӿ��n�A�N���X�մ��ո�ơC���U�ӨC�մ��ո�Ʀ�2�C�A�U��1�ӥ���ơ]A�BF�^�AA�N���T�]A<=9�^�AF�N���W�v�C �Ĥ@�C�H�ΦU�մ��ո�ƶ��Ҧ��@�ťզ�C�аѦ�Sample input�C

��X���� �G

�C�մ��ո�ƽп�XF�Ӫi�A�C�Ӫi���T���������׬�A�C�i�����O�H��"����"�����e�Ҳզ��C�C�Ӫi�����H�@�ťզ���j�}�ӡC ���ո�ƶ��]�H�@�ťզ���}�C �аѦ�sample output�C

�d�ҿ�J �G 

2

3
2
5
3

�d�ҿ�X �G

1
22
333
22
1

1
22
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1

1
22
333
4444
55555
4444
333
22
1

���� �G

* ����½Ķ�GLucky �� �^ �� 

�X�B �G

ACM 488

*/