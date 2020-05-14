#include <bits/stdc++.h>
using namespace std;

char data[100];
int main(){
	
	cin >> data;
	char temp;
	string status = "NO";
	int sum;
	int i = 0;
	while (data[i] == '1' || data[i] == '0'){
		sum = 0;
		temp = data[i];
		while (data[i] == temp){
			sum++;
			i++;
			//cout << sum << " ";
		}
		//cout << "OUT FROM WHILE" << endl;
		if (sum >= 7){
			status = "YES";
			goto endgame;
		}
		//cout << "END BIG-WHILE" << endl;
	}
	endgame:
	cout << status;
	return 0;
}

