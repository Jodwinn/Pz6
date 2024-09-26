#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	unsigned int x;
	unsigned int y;
	cin >> x;
	cin >> y;
	unsigned int not_x = ~x;
	cout << not_x << endl;
	unsigned int not_y = ~y;
	cout << not_y;
}
