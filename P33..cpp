#include <iostream>

using namespace std;

main() {
	
	int n , fact=1 , i;
	
	cout << "Please enter a number : ";
	cin >> n;
	
	for(i=1; i<=n; i++){
		fact = fact * i;
	}
	
	cout << "Fact " << n << " = " << fact;
	
}