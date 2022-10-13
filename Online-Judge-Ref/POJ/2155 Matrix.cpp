/* 13913980	840502	2155	Accepted	4612K	485MS	G++	1114B	2015-02-26 14:19:45 */
#include<bits\stdc++.h>
using namespace std;
int n, q;
int BIT[1005][1005];
void update(int x, int y){
	for (int i = x; i > 0; i -= (i&-i))
		for (int j = y; j > 0; j -= (j&-j))
			BIT[i][j] ^= 1;
}
int query(int x, int y){
	int res = 0;
	for (int i = x; i <= n; i += (i&-i))
		for (int j = y; j <= n; j += (j&-j))
			res += BIT[i][j];
	return res % 2;
}
int main(){
	int t;
	scanf("%d", &t); 
	while (t--){
		scanf("%d%d", &n, &q);
		memset(BIT, 0, sizeof(BIT));
		while (q--){
			char command[5];
			int a, b, c, d;
			scanf("%s", command);
			if (command[0] == 'C'){
				scanf("%d%d%d%d", &a, &b, &c, &d);
				update(c, d);
				update(a - 1, d);
				update(c, b - 1);
				update(a - 1, b - 1);
			}
			else{
				scanf("%d%d", &a, &b);
				printf("%d\n", query(a, b));
			}
		}
		if (t)
			putchar('\n');
	}
	return 0;
}
/*

Matrix
Time Limit: 3000MS		Memory Limit: 65536K
Total Submissions: 19642		Accepted: 7370
Description

Given an N*N matrix A, whose elements are either 0 or 1. A[i, j] means the number in the i-th row and j-th column. Initially we have A[i, j] = 0 (1 <= i, j <= N).

We can change the matrix in the following way. Given a rectangle whose upper-left corner is (x1, y1) and lower-right corner is (x2, y2), we change all the elements in the rectangle by using "not" operation (if it is a '0' then change it into '1' otherwise change it into '0'). To maintain the information of the matrix, you are asked to write a program to receive and execute two kinds of instructions.

1.	C x1 y1 x2 y2 (1 <= x1 <= x2 <= n, 1 <= y1 <= y2 <= n) changes the matrix by using the rectangle whose upper-left corner is (x1, y1) and lower-right corner is (x2, y2).
2.	Q x y (1 <= x, y <= n) querys A[x, y].
Input

The first line of the input is an integer X (X <= 10) representing the number of test cases. The following X blocks each represents a test case.

The first line of each block contains two numbers N and T (2 <= N <= 1000, 1 <= T <= 50000) representing the size of the matrix and the number of the instructions. The following T lines each represents an instruction having the format "Q x y" or "C x1 y1 x2 y2", which has been described above.
Output

For each querying output one line, which has an integer representing A[x, y].

There is a blank line between every two continuous test cases.
Sample Input

1
2 10
C 2 1 2 2
Q 2 2
C 2 1 2 1
Q 1 1
C 1 1 2 1
C 1 2 1 2
C 1 1 2 2
Q 1 1
C 1 1 2 1
Q 2 1
Sample Output

1
0
0
1
Source

POJ Monthly,Lou Tiancheng

*/