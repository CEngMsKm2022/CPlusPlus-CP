#include <iostream>

using namespace std;

main() {
	
	int n , m , p;
	
	cout << "Enter two integer numbers : ";
	cin >> n >> m;
	
	p=1;
	while(m > 0){
		p = p * n;
		m = m - 1;
	}
	
	cout << "Result : " << p;
	
}