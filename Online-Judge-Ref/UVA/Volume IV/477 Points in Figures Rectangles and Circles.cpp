/*477 Points in Figures: Rectangles and Circles Accepted C++ 0.024 2010-12-10 14:47:42 */
#include<stdio.h>
#include<math.h>
#define R 1
#define C 2
int main(){
	double m[100][4];
	int type[100]={0};              //1 r 2 c
	double n[2];
	char a;
	int count_r=0,count=0;		
	while(scanf(" %c",&a)==1)
		if(a=='r'){
			scanf("%lf%lf%lf%lf",&m[count_r][0],&m[count_r][1],&m[count_r][2],&m[count_r][3]);
			type[count_r]=R;
			count_r++;}
		else if(a=='c'){
			scanf("%lf%lf%lf%",&m[count_r][0],&m[count_r][1],&m[count_r][2]);
			type[count_r]=C;
			count_r++;}
		else
			break;
	while(scanf("%lf%lf",&n[0],&n[1])==2&&(n[0]!=9999.9&&n[1]!=9999.9)){
		int flag=0;
		for(int i=0;i<count_r;i++)
			if(type[i]==R){
				if((m[i][0]<=n[0] && m[i][2]>=n[0]) && (m[i][1]>=n[1] && m[i][3]<=n[1])){
					flag=1;
					printf("Point %d is contained in figure %d\n",count+1,i+1);}}
			else{
				double temp1=n[0]-m[i][0];
				double temp2=n[1]-m[i][1];
				if((double)sqrt(temp1*temp1+temp2*temp2)<m[i][2]){
					flag=1;
					printf("Point %d is contained in figure %d\n",count+1,i+1);}}
		if(flag==0)
			printf("Point %d is not contained in any figure\n",count+1);
		count++;
	}
	return 0;
}
/*
�bx-y�����W�A���A�@�ǹϧΡ]�x�ΡB��Ρ^�M�@���I�A�ЧA�^���o���I���b���ǹϧΤ��]�p�G�����ܡ^�C�t�~�A�b�o�Ӱ��D���A��n���b��W���I���������b�ӹϧΤ��C

Input

�����O�ϧΪ���ơA�C�ӹϧΤ@�C�A��1�Ӧr���N��ϧΪ����O�]r �N��x�ΡAc �N���Ρ^�A�p�G�ӹϬO�x�ΡA���U�ӷ|��4�ӼƭȤ��O�N��ӯx�Υ��W���Υk�U�����y�СC�p�G�ӹϬO��ΡA���U�ӷ|��3�ӼƭȤ��O�N��Ӷꪺ��߮y�ФΥb�|�C�ϧΪ��ӼƤ��|�W�L10�ӡC

�H�@�C�ȧt���@��*�N��ϧθ�Ƶ����C

���U�Ӫ��C�C���@���I���y�СA�]�N�O�n���ժ��I�C�Y�I�y�Ь�9999.9 9999.9�N���J�����]���I���ݿ�X�^�C�аѦ�Sample Input�C

Output

��C�@�Ӵ��ժ��I�A�Y�丨�b�Y�ϧΤ��A�h��X�U�C�榡���T���G

Point i is contained in figure j
�p�G�Y���I�S�����b����ϧΤ��A�h��X�G

Point i is not contained in any figure
�Ъ`�N�G�I�M�x�Ϊ��s���O���ӥL�̥X�{�binput�����ǡC�аѦ�Sample Output

Sample Input

r 8.5 17.0 25.5 -8.5
c 20.2 7.3 5.8
r 0.0 10.3 5.5 0.0
c -5.0 -5.0 3.7
r 2.5 12.5 12.5 2.5
c 5.0 15.0 7.2
*
2.0 2.0
4.7 5.3
6.9 11.2
20.0 20.0
17.6 3.2
-5.2 -7.8
9999.9 9999.9
Sample Output

Point 1 is contained in figure 3
Point 2 is contained in figure 3
Point 2 is contained in figure 5
Point 3 is contained in figure 5
Point 3 is contained in figure 6
Point 4 is not contained in any figure
Point 5 is contained in figure 1
Point 5 is contained in figure 2
Point 6 is contained in figure 4
*/