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

德國的農夫根據他們農場的條件被發給獎金。想像以下簡單的規則：你知道農場的大小也知道有多少動物住在裡面。在這裡我們並不去分別不同的動物有什麼不同之處（雖然這跟現實有些不合）。除此之外，你還知道農夫使用環保設備及習慣的等級（稱之環保等級），這等級以大於0的整數來表示。

農夫得到的獎金是根據以下的計算：首先算出每隻動物平均居住的空間，然後乘以該農夫的環保等級，這樣你就得到每隻動物可以領多少獎金。最後再把這個值乘以所有動物的數目，就可以算出該農夫可得到獎金的數目了。

Input

輸入的第一列有一個整數n（n<20），代表以下有幾組測試資料。每組測試資料的第一列有1個整數 f（0 < f < 20）代表在這組測試資料中有多少個農夫。接下來有 f 列，每列有3個正整數，分別代表各農夫農場的面積，農場裡動物的數目，該農夫的環保等級。所有輸入的整數都不會比100000大，也不會比0小。

Output

對每組測試資料，請輸出1個整數，代表要發給農夫的獎金的總數。

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