#include <iostream>

using namespace std;
const int n=5;

main() {
	
	int a[n]={55,28,15,38,63};
	int i ;
	float s, min;
	
    min=a[0];
	for(i=0; i<n; i++){
		if(a[i]<min)
		min = a[i];
	}
	
	s=(float)( 50 - min * 1/100 * 50 );
	
	cout << "Result = " << s;
	
}