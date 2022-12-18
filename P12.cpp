#include <iostream>

using namespace std;

main() {
	
	int n , m , T;
	
	cout << "Enter two numbers : ";
	cin >> n >> m;
	
	while(m != 0){
		
		T = n%m;
		n = m;
		m = T;
	}
	
	cout << "GCD = " << n;
	
}