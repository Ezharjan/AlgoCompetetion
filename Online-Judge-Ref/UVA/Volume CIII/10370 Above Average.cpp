/* 10370 Above Average Accepted C++ 0.024 2011-01-24 08:53:14 */
#include<stdio.h>
int main(){
	int c;
	while(scanf("%d",&c)==1){
		int i,j;
		int n;
		for(j=1;j<=c;j++){
			scanf("%d",&n);
			double avg;
			int total;
			int m[1000];		
			for(avg=i=0;i<n;i++){
				scanf("%d",&m[i]);
					avg+=m[i];}
			avg/=n;
			for(total=i=0;i<n;i++)
			if(m[i]>avg)
				total++;
			printf("%.3lf%%\n",(double)total/n*100);
		}
	}
	return 0;
}
/*

�ڻ��A90%���j�Ǥ@�~�ŷs�ʹ���L�̦ۤv�����Z��b���Z�������W�A�ЧA���������ҬݬݥL�̦��S���F���ؼСC

Input

��J���Ĥ@�C���@�Ӿ�� C �N��H�U���h�ֲմ��ո�ơC�C�ո�ƪ��Ĥ@�Ӿ�� N �N��Z���`�H�� ( 1 <= N <= 1000 )�C���U�Ӧ�N�ӥH�ťթδ���Ӷ��j����ơA�N��C�Ӿǥͪ������`���Z ( 0 <= ���� <= 100 )�C
�@
Output

��C�մ��ո�ƿ�X�@�C�A��X���h�֦ʤ��񪺾ǥͦ��Z����Z�������A�Х|�ˤ��J��p�ƲĤT��C

Sample Input Sample Output 
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

40.000%
57.143%
33.333%
66.667%
55.556%
 
*/