#include <bits/stdc++.h>
using namespace std;

char data[100];
int main(){
	cin >> data;
	int i = 0;
	while (data[i] != 0){
		if ((data[i] != 'A' && data[i] != 'a') && (data[i] != 'O' && data[i] != 'o') && (data[i] != 'Y' && data[i] != 'y') && (data[i] != 'E' && data[i] != 'e') && (data[i] != 'U' && data[i] != 'u') && (data[i] != 'I' && data[i] != 'i')){
			cout << '.'; putchar(tolower(data[i]));
		}
		i++;
	}
}