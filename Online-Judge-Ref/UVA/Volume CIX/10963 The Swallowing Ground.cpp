/* 10963 The Swallowing Ground Accepted C++ 0.012 2011-01-31 06:24:15 */
#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int i;
		bool first;
		first=true;
		for(i=1;i<=n;i++){
			int w;
			scanf("%d",&w);
			int j;
			int y1,y2;
			int temp;
			bool IS;
			scanf("%d%d",&y1,&y2);
			temp=y1-y2;
			for(j=2,IS=true;j<=w;j++){
				scanf("%d%d",&y1,&y2);
				if(y1-y2!=temp)
					IS=false;}
			if(!first)
				putchar('\n');
			else first=!first;
			if(IS)
				puts("Yes");
			else
				puts("No");
		}
	}
	return 0;
}
/*

�{�b�ʼw���H�w�g�Q�g�@�F�A���O���M�٦��@�ǨƱ��n���C�|�Ҩӻ��A�a���ݭn�ۦ汵�X�~��C�]�n���M���ܡA�n�H�i�O�|���p�߱��J�a�����A�o���Ӧn�C�^

�a���ǥѱY�򪺤覡�ӱN Don Giovanni �]�i�h�G���@�������a���Y��w�w���J�F�a���A�ӥB�Y��y�������f�N Don Giovanni �]�F�i�h�C�{�b�ߤ@��״_�a������k�A�N�O�ưʦa���ӱ��X���f�C�o�̦��ӽd�ҡA���䪺�ϡ]�q�Ť������ϡ^�O�@�Ӧ��۲`�����a���C���]�a���V�n�_�L�������A�ӪF���ݳ���F�ۥt�~���a���A���O�������i�ưʪ����_�C�p���@�ӡA�_�䪺�����i�H�V�n�ưʡA�n�䪺�����]�i�H�V�_�ưʡC�k�䪺�ϬO�ưʪ����G�A�ӵ��f���X�F�C

�o�̦��t�~�@�ӽd�ҡC�H���䪺�Ϩӻ��A�Ϥ������f�����ǥѷưʨӱ��X�C�k�䪺�ϬO�ɤO�ưʤ��᪺���G�A���O���M���Ӭ}�C

�мg�@���{���ӧP�_���f�ण�౵�X�C�a���Ѥ��ϲզ��A�䤤���n�X�Ӥ��O�Y��y�����}�A�ӵ��f�K�O�ѳo�Ǭ}�զ����C

Input

��J���Ĥ@�C���@�ӥ���ơA�N���U�Ӧ��h�ֲմ��ո�ơC

�C�����ո�ƪ��Ĥ@�泣�]�t�@�Ӿ�� W�A�N���檺�ƥءC���U�Ӫ� W �泣�|����Ӿ�� y1�By2�]-100 <= y1, y2 <= 100�^�A���O�N��ۨC�Ӫ�����A���f�̥_�ݩM�̫n�ݪ�Y�y�Ц�m�C��J�榡�аѦ� Sample Input�C

���ո�Ƥ@�w�|�O�Ӧ��Ī����f�G�Ҧ����}��n�N�a�������n�_����A���������|���}�A�]���|���t�ߪ������b���f�����C

Output

���C�մ��ո�ơA�p�G���f���X�N��X�@�� "Yes"�A�_�h�N��X�@�� "No"�C�C����X�����ЪŤ@��A�аѦ�Sample Output�C 
�󥿡G��X����"yes" or "no"�C

Sample Input 

2

5
2 1
0 -1
1 0
1 0
2 1

1
2 1

Sample Output

yes

yes 

*/