#include <iostream>

using namespace std;

main() {
	
	int salary , result;
	cout << "Please enter your salary : ";
	cin >> salary;
	
	if(salary < 6000000){
		result = salary - (salary *0/100);
	}
	else if(salary >= 6000000 && salary < 8000000){
		result = salary - (salary *5/100);
	}
	else if(salary >= 8000000 && salary < 10000000){
		result = salary - (salary *10/100);
	}
	else if(salary >= 10000000 && salary < 14000000){
		result = salary - (salary *15/100);
	}
	else if(salary >= 14000000 && salary < 18000000){
		result = salary - (salary *20/100);
	}
	else if(salary >= 18000000 && salary < 25000000){
		result = salary - (salary *25/100);
	}
	else{
		result = salary - (salary *35/100);
	}
	
	cout << "Result = " << result;

}