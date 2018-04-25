//Drzewo binarne II

//Rafał Majewski
//Kuba Żeligowski
#include <cstdio>
#include <cmath>

int main() {
  int n; scanf("%d", &n);
  long long int num;
  int lev[62];
  for(int i = 0; i < n; i++) {
    scanf("%lld", &num);
    num = log2(num);
    lev[num] += 1;
  }
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%lld", &num);
    printf("%d\n", lev[num-1]);
  }
}
