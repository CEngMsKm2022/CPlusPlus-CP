#include <iostream>

using namespace std;
 
main() {
	
	int n , m , k , j;
	
	cout << "Please enter two positive integer values : ";
	cin >> n >> m;
	
	k=1;
	for(j=1; j<=m; j++){
		
		k = k * n;
	}
	
	cout << "Result : " << k;
}