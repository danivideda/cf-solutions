#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b, sum = 0;
	cin >> n;
	for (int i = 0; i < n; ++i){
		b = 0;
		for (int j = 0; j < 3; ++j){
			cin >> a;
			b += a;
		}
		if (b >= 2){
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}