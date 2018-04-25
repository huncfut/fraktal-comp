//korekta

//Rafał Majewski
//Kuba Żeligowski
#include <cstdio>

int main() {
  int wSum, lSum, gNum, w, l;
  int n; scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    wSum = 0; lSum = 0, gNum = 0;
    for(int j = 0; j < 3; j++) {
      scanf("%d %d", &w, &l);
      wSum += w;
      lSum += l;
    }
    gNum = w + l;
    printf("%d %d\n", gNum * 2 - wSum, gNum * 2 - lSum);
  }

  return 0;
}
