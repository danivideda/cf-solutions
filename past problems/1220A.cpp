#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  char data[N];
  cin >> data;
  int c_zero = 0;
  for (int i = 0; i < N; i++) {
    if (data[i] == 'z') {
      c_zero++;
    }
  }

  int c_one = (N - (c_zero * 4)) / 3;
  for (int i = 0; i < c_one; i++) {
    cout << "1 ";
  }
  for (int i = 0; i < c_zero; i++) {
    cout << "0 ";
  }
}