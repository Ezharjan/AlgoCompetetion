/* Ecological Premium Accepted C++ 0.016 2011-01-07 11:22:59 */
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int a[MAX][MAX];
		for(int k=1;k<=n;k++){
			int f;
			scanf("%d",&f);
			for(int i=0;i<f;i++)
				for(int j=0;j<3;j++)
					scanf("%d",&a[i][j]);
			int sum=0;
			for(int i=0;i<f;i++)
			sum+=a[i][0]*a[i][2];
			printf("%d\n",sum);
		}
	}
	return 0;
}
/*

�w�ꪺ�A�ҮھڥL�̹A��������Q�o�������C�Q���H�U²�檺�W�h�G�A���D�A�����j�p�]���D���h�ְʪ���b�̭��C�b�o�̧ڭ̨ä��h���O���P���ʪ������򤣦P���B�]���M�o��{�꦳�Ǥ��X�^�C�������~�A�A�٪��D�A�Ҩϥ����O�]�ƤβߺD�����š]�٤����O���š^�A�o���ťH�j��0����ƨӪ�ܡC

�A�ұo�쪺�����O�ھڥH�U���p��G������X�C���ʪ������~���Ŷ��A�M�᭼�H�ӹA�Ҫ����O���šA�o�˧A�N�o��C���ʪ��i�H��h�ּ����C�̫�A��o�ӭȭ��H�Ҧ��ʪ����ƥءA�N�i�H��X�ӹA�ҥi�o��������ƥؤF�C

Input

��J���Ĥ@�C���@�Ӿ��n�]n<20�^�A�N��H�U���X�մ��ո�ơC�C�մ��ո�ƪ��Ĥ@�C��1�Ӿ�� f�]0 < f < 20�^�N��b�o�մ��ո�Ƥ����h�֭ӹA�ҡC���U�Ӧ� f �C�A�C�C��3�ӥ���ơA���O�N��U�A�ҹA�������n�A�A���̰ʪ����ƥءA�ӹA�Ҫ����O���šC�Ҧ���J����Ƴ����|��100000�j�A�]���|��0�p�C

Output

��C�մ��ո�ơA�п�X1�Ӿ�ơA�N��n�o���A�Ҫ��������`�ơC

Sample Input

3
5
1 1 1
2 2 2
3 3 3
2 3 4
8 9 2
3
9 1 8
6 12 1
8 1 1
3
10 30 40
9 8 5
100 1000 70

Sample Output

38
86
7445

*/