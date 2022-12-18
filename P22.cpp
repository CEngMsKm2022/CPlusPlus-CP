#include <iostream>

using namespace std;

main() {
	
	int season;
	
	cout << "Please season number : ";
	cin >> season;
	
	switch(season){
		case 1 :
			cout << "First season is Spring";
		    break;
		case 2 :
			cout << "Second season is Summer";
			break;
		case 3 :
			cout << "Third season is Fall";
			break;
		case 4 :
			cout << "Forth season is Winter";
	}

}