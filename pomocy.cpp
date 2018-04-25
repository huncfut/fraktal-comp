//POMOCY!

//Rafał Majewski
//Kuba Żeligowski
#include <cstdio>
#include <cmath>

int main() {
  int n; scanf("%d", &n);
  long long int num;
  int s, res;
  for(int i = 0; i < n; i++) {
    scanf("%lld %d", &num, &s);
    if(!num) {
      printf("1\n");
      break;
    }
    res = log2(num) + 1;
    printf("%d", res);
  }
}
