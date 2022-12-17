#include <iostream>

using namespace std;

main() {
	
	int n , m , k=1 , j=1;
	
	cout << "Please enter two positive integer values : ";
	cin >> n >> m;
	
	while(j <= m){
		k = k * n;
		j = j + 1;
	}
	
	cout << "Result : " << k;
}