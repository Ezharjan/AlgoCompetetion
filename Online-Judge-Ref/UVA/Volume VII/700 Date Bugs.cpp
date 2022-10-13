/* 700 Date Bugs Accepted C++ 0.012 2011-02-22 14:20:25 */
#include<stdio.h>
int main(){
	int k=1;
	int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int y[20],a[20],b[20];
		int i,j,gap,year,temp;
		bool found=false,wrong=false;
		for(i=0;i<n;i++)
			scanf("%d%d%d",&y[i],&a[i],&b[i]);
		for(year=y[0],gap=b[0]-a[0];year<10000&&!found;year+=gap){
			wrong=false;
			for(j=1;j<n&&!wrong;j++){
				if(year<a[j])
					break;
				temp=year;
				while(!(temp>=a[j]&&temp<b[j])) // temp<b[j] �S�O�`�N
					temp=temp-(b[j]-a[j]);
				if(temp!=y[j])
					wrong=true;}
			if(j>=n&&!wrong)
				break;}
		printf("Case #%d:\n",k++);
		if(year>=10000)
			puts("Unknown bugs detected.");
		else
			printf("The actual year is %d.\n",year);
		putchar('\n');
	}
	return 0;
}
/*

�ڻ��b����2000�~���ɭԳ\�h�q���|���·СC�o�O�]���o�ǹq���u�Ψ�ӼƦr�����~���A�ҥH�~���|�q1999��M�ܦ�1900�C�ƹ�W�A���\�h���������p�o�͡G�Y�Ǩt�Ψϥ�32�줸������x�s�q�Y�ӯS�w�����ثe�����ơC�H�o�˪����ΨӬݡA2^32��(�j��136�~)����A����N�|���^�쥻�Y�ӯS�w������C

�Q���@�U�A����x�q��C1�MC2�A�ӥB�o��x�q�������P�����D�G�@�x��Y2K-Bug(�]�N�O�� 
b1:=2000 �N�|�٭쬰 a1:=1900) �ӥt�@�x�q���b b2:=2040���ɭ��٭�� a2:=1904�C���]�q��C1��ܪ��~���� y1:=1941�AC2��ܤF y2:=2005�C����A�i�H���X�H�U����(�b�S����L���D�����p�U)�G�u��~����M���i��O1941�A�]���p�G�O1941�~���ܷӲz�ӻ���x�q�����ӭn��ܤ@�˪��~���C�ӭY�u��~����2005�A����C1���ӭn���1905�A�]����C�p�G�u�[��C1�A�ڭ̪��D�u��~�����ӬO�U�C�䤤���@�G1941, 2041, 2141...�C�o�Ǧ~���p�G�bC2�W��ܡA���ӷ|�O�G1941, 1905, 2005...�C�ҥH�A�ƹ�W�A��ڪ��~����2141�C

����ڦ~���O�@�ӫܳ·Ъ��u�@(�۫H�A�]���Ʊ�b�A�ѰO�u��~�����ɭԨC�����n�o�˺�C)�ҥH�A�A���u�@�N�O�g�@�ӵ{���A�i�D�A�Y�ǹq����ܪ��~���H�ΨC�x�q���U�۪����D(�Ҧp��bi�~��ܦ�ai�~)�A��X�Ĥ@�ӥi�઺��ڦ~���C�ѩ�b�q���o���H��~���o�˪����D�X�{�A�ҥH�A�n�䪺��ڦ~�����Ӧb�Ҧ���ai����C

Input

��J�ɮפ��]�t�F�\�h���ո�ơC�C�����ո�ƲĤ@�C�]�t�F�@�Ӿ�� n(1<=n<=20)�A�N��q�����ƶq�C���U�ӨC�C����ܤF�@�x�q������ơA�̧ǬOyi,ai,bi (0<=ai<=yi<bi<10000)�Cyi�O�q����ܪ��~���Abi�O�|�X�{���D���Ĥ@�~�A�ӳo�~����ܪ��~���^��Fai�C 

Output

���C�����ո�ơA��X�@�C "Case #k:"�Ak�N��ĴX�����ո�ơC���U�ӿ�X�@�C``The actual year is z.''�Az�N��̤p���i���ڦ~��(�����Ҧ��q���åB�j��ε��� u = max{ai}�C)�p�G���s�b�p��10000���i��~���A��X``Unknown bugs detected.''�C�åB�b�C�����ո�Ƥ����X�@�ӪťզC�C�аѦ�Sample Output�C

Sample Input  

2
1941 1900 2000
2005 1904 2040
2
1998 1900 2000
1999 1900 2000
0

Sample Output

Case #1:
The actual year is 2141.

Case #2:
Unknown bugs detected.

--------------------------------------------------------------------------------

Translated by tmt

*/