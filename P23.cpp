#include <iostream>

using namespace std;

main() {
	
	int n , m , result;
	char ch;
	
	cout << "Please enter expression : ";
	cin >> n >> ch >> m;
	
	switch(ch){
		case '+' :
			result = n + m;
			break;
		case '-' :
			result = n - m;
			break;
		case '*' :
			result = n * m;
			break;
		case '/' :
			result = n / m;
			break;
		case '%' :
			result = n % m;
	}
	
	cout << "Result = " << result;
	
}