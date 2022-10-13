/* 1063764	840502	1499	Accepted	34968 kb	1224 ms	C++/Edit	2409 B	2015-08-04 23:28:17 */
#include<bits\stdc++.h>
using namespace std;
int mx[] = { 1,-1,0,0 };
int my[] = { 0,0,1,-1 };
int n, m, x, y, K;
char str[205][205];
int DP[205][205][205];
void cal(int time, int dir, int interval) {
  int end, step;
  int Q[405], L, R;
  if (dir == 0 || dir == 1) {
    for (int i = 1; i <= m; i++) {
      if (dir == 0)
        end = 0, step = -1;
      else
        end = n + 1, step = 1;
      L = R = 0;
      for (int j = (dir == 0) ? n : 1; j != end; j += step) {
        if (DP[time - 1][j][i] != -1) {
          while (L<R && DP[time - 1][j][i] > DP[time - 1][Q[R - 1]][i] + abs(j - Q[R - 1])) R--;
          Q[R++] = j;
        }
        while (L < R && (abs(j - Q[L]) > interval || str[j][i] == 'x')) L++;
        if (L < R)
          DP[time][j][i] = DP[time - 1][Q[L]][i] + abs(j - Q[L]);
      }
    }
  }
  else {
    for (int i = 1; i <= n; i++) {
      if (dir == 2)
        end = 0, step = -1;
      else
        end = m + 1, step = 1;
      L = R = 0;
      for (int j = (dir == 2) ? m : 1; j != end; j += step) {
        if (DP[time - 1][i][j] >= 0) {
          while (L < R && DP[time - 1][i][j] > DP[time - 1][i][Q[R - 1]] + abs(j - Q[R - 1]))  R--;
          Q[R++] = j;
        }
        while (L<R && (abs(j - Q[L]) > interval || str[i][j] == 'x'))  L++;
        if (L < R)
          DP[time][i][j] = DP[time - 1][i][Q[L]] + abs(j - Q[L]);
      }
    }
  }
}
int main() {
  scanf("%d%d%d%d%d", &n, &m, &x, &y, &K);
  for (int i = 1; i <= n; i++)
    scanf("%s", str[i] + 1);
  memset(DP, -1, sizeof(DP));
  DP[0][x][y] = 0;
  for (int i = 1; i <= K; i++) {
    int a, b, dir;
    scanf("%d%d%d", &a, &b, &dir);
    cal(i, --dir, b - a + 1);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      ans = max(DP[K][i][j], ans);
  printf("%d\n", ans);
  return 0;
}
/*

1499: [NOI2005]��????

Time Limit: 3 Sec  Memory Limit: 64 MB
Submit: 1115  Solved: 660
[Submit][Status][Discuss]
Description

�A��?????�H?��??�_�A?�A??�۫߷�?�R�B�A�O���O���@�����B�P�Ҫ�?�N�H?�ҩP���A��????�A�̭��n���O���n����?�C���O�ܤ֦��L?�H���D�A�@�ɤW��?�j��?�^�a�@�ͳ��}�y�b�j���W�A�L���W�r�s����?���w��?T.D.??�c?1900�A�B��?���s�L1900�C 1900�b20�@?���Ĥ@�~�X�ͦb����_?����??���N��??�W�A�ܤ����L?�X�ʹN�Q??�F�A���F�t�I�C1900�t?����?�b���N��??�W�A?����?????�̪��@�ɡC�]?�O?�L�R?��??�A�W�Ҭ��i?���p�ѨϦ��?��?�L�C�i��O�ѨϪ�?�ơA1900?�����i��?��?�^��?�G?�����H�СA??��???�A���L?��??�ۤv���P??�X�̨G�H�ߵʪ��۫ߡC?1900����??�o??�W�Ҧ��H��?��?�A�L�~8?�A�Ӧ�?���L�w?��?��?����?���j?50�E���F�C??�O?�^�_�~�A��1900?�O?�Ĥl�A�L��?�M�@��k�Ĥ@?���n�_�M?�֡A�u��?��h�@?��������m?�F�G?�O�@??�B��[���]�ߡA��?���_??�����祴?���N��??�A????����?�P��??�C��W���s?�J����?�J��?����?��F�A1900�۩I�����M�L�@�_���W�R?����?�^�A�M�Z�Q?�F�T�w?�^��?�A�_�O�A?�^??��?��?�׷�?�_?�C���̪�?�A��?���D��1900�B?�^�B????1900���۫ߤ@�_���_�F???�A??��?��������?���A������?��g�]�_?�몺�����F�C�Z?�����b�^??�W?�D�G�j��?��?��?�ϧ�????�h�ֳt����??�M�a��ڷN?���?���b�M�j���@�_���R�u�O������?�g���R�̱ߤW�b���⪺�a�O�W��?����????�O���O��?�N�O�H�]?�A��?��?�F�@?�H�A���N�O���?�A�o�i???�G�o��?�b��?��?�ԬI�i�]�k?�U1900�A��??�^�I�W�R?�����a��C����??�R?�O�@?N��M�C���x?�A�x?�����Y�Ǥ��W���F�@�Ǯa��A��L��?�O�Ŧa�C?�^�i�H�b�Ŧa�W��?�A�����༲�W�a��ηƥX�R?�A�_???��?�^�M�a��A��???����?�C�C??��A?�^��???���^?�ת���V�V��?������?�@��A��?�����i�H�O�V?�B�V��B�V�n�ΦV�_���C�Ӧ��?�i�H??�I�]�k�Τ��I�]�k�G�p�G���I�]�k�A??�^?��?�F�p�G�I�]�k�A??�^?��a��?�C���?�O?�ѨϡA�o���D�C�q??�����^��?�ױ�?�C�o�Q��?�^�b�R?���Ʀ���{?�q?�A??1900?�D�`��?�A�P?�]���Q�_�v?������?��C�����??�Ӥp�A��?��A�ҥH�Ʊ�A��?�U�o�C

Input

?�J��󪺲Ĥ@��]�t5??N, M, x, y�MK�CN�MM�y�z�R?���j�p�Ax�My??�^����l��m�]x��y�C�^�F��??���^?�ױ�?�O��??��???�y�z���A�B?1?�l?�q??�A��p���b[1, 3]??���V??�סA[4, 5]??���V�_?�ס��A�]��?����K���??��?�ءC�H�UN��A�C��M?�r�šA�y�z�R?�����a��C��i���j�C���r�ŭY?�� . ���A?���?��m�O�Ŧa�F�Y?�� x ���A?��ܦ��a��C�H�UK��A?�Ǵy�zK?????�A�榡?�Gsi ti di�C��ܦb????[si, ti]?�A���^���O�Vdi��V?�ת��Cdi?1, 2, 3, 4�����@?�A�̦���ܥ_�B�n�B��B?�]��???�x?�����W�B�U�B���B�k�^�C?�J�O???�O??���A�Y s1 = 1 si = ti-1 + 1 (1 < i ? K) tK = T

Output

?�X���?��1��A�]�t�@?��?�A���?�^�Ʀ檺��?�Z��(�Y��l?)�C

Sample Input

4 5 4 1 3
..xx.
.....
...x.
.....
1 3 4
4 5 1
6 7 3

Sample Output

6

HINT

Source

Dpɬ��

*/