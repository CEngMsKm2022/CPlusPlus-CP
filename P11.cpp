#include <iostream>
#include <math.h>

using namespace std;

main() {
	
	int a , b , c , delta , x1 , x2;
	
	cout << "Please enter three values : ";
	cin >> a >> b >> c;
	
	delta = b * b - 4 * a * c;
	
	if(delta > 0){
		x1=(-b + sqrt(delta))/(2*a);
		x2=(-b - sqrt(delta))/(2*a);
		cout << "x1 = " << x1 << "\nx2 = " << x2;		
	}
	else if(delta == 0){
		x1=-b/(2*a);
		cout << "x1 = " << x1;
	}
	else{
		cout << "TN";
	}
}