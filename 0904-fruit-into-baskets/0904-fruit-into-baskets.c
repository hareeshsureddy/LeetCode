#include <string.h>
#define MAX(a, b) (a > b ? a : b)
int totalFruit(int *fruits, int fruitsSize) {
  int freq[fruitsSize + 1], typeCnt = 0, rs = 0;
  memset(freq, 0, sizeof(freq));
  for (int l = 0, r = 0; r < fruitsSize; r++) {
    if (freq[fruits[r]]++ == 0)
      typeCnt++;
    while (typeCnt > 2)
      if (--freq[fruits[l++]] == 0)
        typeCnt--;
    rs = MAX(rs, r - l + 1);
  }
  return rs;
}