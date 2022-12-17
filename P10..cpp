#include <iostream>

using namespace std;

main() {
	
	int n , m , p=1 ,i;
	
	cout << "Enter two integer numbers : ";
	cin >> n >> m;
	
	for(i=m; i>0; i--){
		p = p * n;
	}
	
	cout << "Result : " << p;
	
}