#include <iostream>

using namespace std;

main() { 

    int x , y , z;
    float B;
    
    cout << "Enter three integer values : ";
    cin >> x >> y >> z;
	
	B = (float)((x-y)*(x+z))/((x+y+z)*(x+y+z) +1);
	
	cout << "Result = " << B;
    
}