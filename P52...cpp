#include <iostream>

using namespace std;
const int n=5;

main() {
	
	int a[n];
	int i ;
	float s, min;
	
	cout << "Enter " << n << " elements : ";
	cin >> min;
	
    min=a[0];
	for(i=0; i<n; i++){
		if(a[i]<min)
		min = a[i];
	}
	
	s=(float)( 50 - min * 1/100 * 50 );
	
	cout << "Result = " << s;
	
}