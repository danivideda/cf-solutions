#include <iostream>
using namespace std;

int main(){
	long long m, n, a, b, c;
	long long answer;

	cin >> n;
	cin >> m;
	cin >> a;

	if (m%a == 0){
		b = m/a;
	}
	else {
		b = (m/a) + 1;
	}

	if (n%a == 0){
		c = n/a;
	}
	else {
		c = (n/a) + 1;
	}

	answer = b*c;
	cout << answer;
}