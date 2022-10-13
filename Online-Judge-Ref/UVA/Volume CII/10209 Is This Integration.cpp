/* 10209 Is This Integration ? Accepted C++ 0.048 2011-01-25 05:59:39 */
#include<stdio.h>
#include<math.h>
int main(){
	double a;
	while(scanf("%lf",&a)==1){
		const double PI=2.0*acos(0.0);
		printf("%.3lf ",a*a*(1-sqrt(3.0)+PI/3));
		printf("%.3lf ",a*a*(1-(1-sqrt(3.0)+PI/3)-(4-sqrt(3.0)-2.0/3*PI)));
		printf("%.3lf\n",a*a*(4-sqrt(3.0)-2.0/3*PI));    
	}
	return 0;
}
/*

Input

��J���C�@����ո�Ʀ�1�ӯB�I�� a�] 0 <= a <= 10000�^�A�N����Ϊ�����C

Output

��C�@�ӿ�Ja�A��X3�Ӥ��P�᯾�ϰ쪺���n�A�п�X��p���I�H�U3��C�Ĥ@�ӼƬ������ϰ쪺���n�]�������@���^�A��2�ӼƬ��I���ϰ쪺���n�]4�Ӧ��I�����T���Ϊ��ϰ�^�A��3�Ӭ���l���ϰ쪺���n�C

Sample input

0.1
0.2
0.3

Sample Output

0.003 0.005 0.002
0.013 0.020 0.007
0.028 0.046 0.016

Attention

�ϥ�PI=3.14159�i�ण����T�A�Х�2.0*acos(0.0)�@��PI���ȡC

*/