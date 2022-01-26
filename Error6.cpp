#include <iostream>
using namespace std;
int main() {
	int a[]={7, 15, 22};
	int b[3];
	b = a;
	for (int index = 0; index < 3; index++) {
		cout << b[index] << endl;
	}
}
