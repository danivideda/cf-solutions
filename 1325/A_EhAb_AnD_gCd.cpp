#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  int n, x;
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    printf("%d %d \n", 1, x - 1);
    // printf("GCD: %d, LCM: %d\n", gcd(1, x - 1), lcm(1, x - 1));
  }

  return 0;
}