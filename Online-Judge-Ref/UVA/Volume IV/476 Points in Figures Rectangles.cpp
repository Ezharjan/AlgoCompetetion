/*476 Points in Figures: Rectangles Compiling C++ 0.000 2010-12-10 12:21:35*/
#include<stdio.h>
int main(){
	double m[100][4];
	double n[2];
	char a;
	int count_r=0,count=0;	
	while(scanf(" %c",&a)==1)
		if(a=='r'){
			scanf("%lf%lf%lf%lf",&m[count_r][0],&m[count_r][1],&m[count_r][2],&m[count_r][3]);
			count_r++;}
		else 
			break;
	while(scanf("%lf%lf",&n[0],&n[1])==2&&(n[0]!=9999.9&&n[1]!=9999.9)){
		int flag=0;
		for(int i=0;i<count_r;i++)			
			if((m[i][0]<=n[0] && m[i][2]>=n[0]) && (m[i][1]>=n[1] && m[i][3]<=n[1])){
				flag=1;
				printf("Point %d is contained in figure %d\n",count+1,i+1);}
		
		if(flag==0)
			printf("Point %d is not contained in any figure\n",count+1);
		count++;
	}
	return 0;
}
/*
�bx-y�����W�A���A�@�ǯx�ΩM�@���I�A�ЧA�^���o���I���b���ǯx�Τ��]�p�G�����ܡ^�C�t�~�A�b�o�Ӱ��D���A��n���b��W���I���������b�ӯx�Τ��C

Input

�����O�x�Ϊ���ơA�C�ӯx�Τ@�C�A��1�Ӧr���N��ϧΪ����O�]r �N��x�Ρ^�A���U�Ӧ�4�ӼƭȤ��O�N��ӯx�Υ��W���Υk�U�����y�СC�x�Ϊ��ӼƤ��|�W�L10�ӡC

�H�@�C�ȧt���@��*�N��x�θ�Ƶ����C

���U�Ӫ��C�C���@���I���y�СA�]�N�O�n���ժ��I�C�Y�I�y�Ь�9999.9 9999.9�N���J�����]���I���ݿ�X�^

Output

��C�@�Ӵ��ժ��I�A�Y�丨�b�Y�x�Τ��A�h��X�U�C�榡���T���G

Point i is contained in figure j
�p�G�Y���I�S�����b����x�Τ��A�h��X�G

Point i is not contained in any figure
�Ъ`�N�G�I�M�x�Ϊ��s���O���ӥL�̥X�{�binput�����ǡC�аѦ�Sample Output

Sample Input

r 8.5 17.0 25.5 -8.5
r 0.0 10.3 5.5 0.0
r 2.5 12.5 12.5 2.5
*
2.0 2.0
4.7 5.3
6.9 11.2
20.0 20.0
17.6 3.2
-5.2 -7.8
9999.9 9999.9
Sample Output

Point 1 is contained in figure 2
Point 2 is contained in figure 2
Point 2 is contained in figure 3
Point 3 is contained in figure 3
Point 4 is not contained in any figure
Point 5 is contained in figure 1
Point 6 is not contained in any figure
*/