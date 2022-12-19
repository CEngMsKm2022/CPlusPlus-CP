#include <iostream>

using namespace std;

main() {
	
	int n , m , i , GCD;
	
	cout << "Please enter two integer values :";
	cin >> n >> m;
	
	for(i=1; i<=n && i<=m; i++){
		if(n%i == 0 && m%i == 0)
		GCD = i;
	}
	
	cout << "GCD of " << n << " and " << m << " is " << GCD;
	
}