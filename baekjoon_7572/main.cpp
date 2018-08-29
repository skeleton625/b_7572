#include <iostream>
using namespace std;

char a1[12] = { 'I', 'J', 'K', 'L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
char b1[10] = { '6', '7', '8', '9', '0', '1', '2', '3', '4', '5' };
int n, a, b;
int main() {
	cin >> n;
	n %= 60;
	if (n == 0) n = 60;
	for (int i = 1; i <= n; i++) {
		a = (a + 1) % 12;
		b = (b + 1) % 10;
	}
	cout << a1[a] << b1[b] << endl;
	return 0;
}