#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0;
	string op;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> op;
		if (op == "++X" || op == "X++"){
			sum++;
		}
		else {
			sum--;
		}
	}
	cout << sum;
}