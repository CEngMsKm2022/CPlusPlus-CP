#include <iostream>

using namespace std;

const int n=5;

main() {
	int a[n];
	int b[n];
	int i , j , temp ;
	
	cout << "Enter " << n << " Elements :" ;
	for(i=0; i<n; i++){
	cin >> a[i];
	}
	cout << "Enter " << n << " Elements :" ;
	for(i=0; i<n; i++){
	cin >> b[i];
	}
	
			
	    for(j=0; j<n; j++){
	    	
	    	temp = a[j];
	    	a[j] = b[j];
	    	b[j] = temp;
		}
		
		for(i=0; i<n; i++)
		    cout << " " << a[i];
        cout << " Next " << endl;
		for(i=0; i<n; i++)
		    cout << " " << b[i];
		    
}