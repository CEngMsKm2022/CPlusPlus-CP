#include <iostream>

using namespace std;

main() {
	
	int a[5]={51,53,42,57,60};
	int b[5]={22,20,33,30,41};
	int i , j , temp ;
	
	    for(j=0; j<5; j++){
	    	
	    	temp = a[j];
	    	a[j] = b[j];
	    	b[j] = temp;
		}
		
		for(i=0; i<5; i++)
		    cout << " " << a[i];
        	cout << "\n Next " << endl;
		for(i=0; i<5; i++)
		    cout << " " << b[i];
		    
}