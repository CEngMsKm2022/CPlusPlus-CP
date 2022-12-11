#include <iostream>

using namespace std;

main() {
	
	int a , b , c , min;
	
	cout << "Please enter three integer values : ";
	cin >> a >> b >> c;
	
	if(b > a && c > a){
		min = a;
		cout << "min is " << min;
	}
	else if(a > b && c > b){
		min = b;
		cout << "min is " << min;
	}
	else {
		min = c;
		cout << "min is " << min;
	}
}