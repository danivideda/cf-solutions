#include <bits/stdc++.h>
using namespace std;

int c_genap = 0, c_ganjil = 0;
void check(int i) {
  if (i % 2 == 0) {
    c_genap++;
  } else {
    c_ganjil++;
  }
}

void perform(int genap, int ganjil) {
  if (genap > ganjil) {
    cout << ganjil;
  } else {
    cout << genap;
  }
}

int main() {
  int N;
  cin >> N;
  int data[N];

  for (int i = 0; i < N; i++) {
    cin >> data[i];
    check(data[i]);
  }

  perform(c_genap, c_ganjil);
  return 0;
}