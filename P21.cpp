#include <iostream>

using namespace std;

main() {
	
	float gpa;
	
	cout << "Please enter your GPA : ";
	cin >> gpa;
	
	if(gpa >= 17){
		cout << "A";
	}
	else if(gpa >= 15 && gpa < 17){
		cout << "B";
	}
	else if(gpa >= 12 && gpa < 15){
		cout << "C";
	}
	else if(gpa >= 10 && gpa < 12){
		cout << "D";
	}
	else{
		cout << "F";
	}
	
}