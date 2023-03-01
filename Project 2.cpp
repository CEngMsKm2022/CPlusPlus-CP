/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// By Comments We Explain Program 

/* Kimia Mehri */
// The Second Star Project

/* Car Game */

// Start

#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>

#define screen_width 90
#define screen_height 26
#define win_width 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursoPosition;

int enemyY[3];
int enemyX[3];
int enemyflag[3];
char car[4][4]={ ' ','*','*',' ',
                 '*','*','*','*',
                 ' ','*','*',' ',
                 '*','*','*','*', };
int carpos = win_width/2;
int score = 0;

void gotoxy(int x, int y){
	CursoPosition.X = x;
	CursoPosition.Y = y;
	SetConsoleCursorPosition(console , CursoPosition);	 
}

void setcursor(bool visible, DWORD size){
	
	if(size == 0)
		size = 20;
		
		CONSOLE_CURSOR_INFO lpCursor;
		lpCursor.bVisible = visible;
		lpCursor.dwSize = size;
		SetConsoleCursorInfo(console,&lpCursor);
	
}

void drawBorder(){
	
	for(int i=0; i<screen_height; i++){
		for(int j=0; j<17; j++){
			gotoxy(0+j,i); cout << "*";
			gotoxy(win_width-j,i); cout << "*";
		}
	}
	for(int i=0; i<screen_height; i++){
		gotoxy(screen_width,i); cout << "*";
	}
}

void genEnemy(int ind){
	
	enemyX[ind] = 17 + rand()%(33);
}

void drawEnemy(int ind){
	
	if(enemyflag[ind] == true){
		gotoxy(enemyX[ind],enemyY[ind]);    cout << "****";
		gotoxy(enemyX[ind],enemyY[ind]+1);  cout << " ** ";
		gotoxy(enemyX[ind],enemyY[ind]+2);  cout << "****";
		gotoxy(enemyX[ind],enemyY[ind]+3);  cout << " ** ";
	}
}

void eraseEnemy(int ind){
	
	if(enemyflag[ind] == true){
		gotoxy(enemyX[ind],enemyY[ind]);    cout << "    ";
		gotoxy(enemyX[ind],enemyY[ind]+1);  cout << "    ";
		gotoxy(enemyX[ind],enemyY[ind]+2);  cout << "    ";
		gotoxy(enemyX[ind],enemyY[ind]+3);  cout << "    ";
	}
}

void resetEnemy(int ind){
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}

void drawCar(){
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carpos,i+22); cout << car[i][j];
		}
	}
}

void eraseCar(){
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carpos,i+22); cout << " ";
		}
	}
}

int collision(){
	
	if(enemyY[0]+4 >= 23){
		if(enemyX[0]+4-carpos >= 0 && enemyX[0] + 4 - carpos < 9){
			return 1;
		}
	}
	return 0;
}

void gameover(){
	
	system("cls");
	
	cout << endl;
	cout << "\t\t------------------------------"<< endl;
	cout << "\t\t-----------Game Over----------"<< endl;
	cout << "\t\t------------------------------"<< endl << endl;
	cout << "\t\tPress any key to go back to menu .";
	
	getch();
}

void updatescore(){
	
	gotoxy(win_width + 7 , 5); cout << "Score : " << score << endl;
	
}

void instructions(){
	
	system("cls");
	cout <<"instruction";
	cout <<"\n----------------";
	cout <<"\n Avoid cars by moving left or right . ";
	cout <<"\n\nPress 'a' to move left";
	cout <<"\nPress 'd' to move right";
	cout <<"\nPress 'x' to exit";
	cout <<"\n\nPress any key to go back to menu";
	
	getch();
	
}
	
void play(){
	
	carpos = -1 + win_width/2;
	score = 0;
	enemyflag[0] = 1;
	enemyflag[1] = 0;
	enemyY[0] = enemyY[1] = 1;
	
	system("cls");
	drawBorder();
	updatescore();
	genEnemy(0);
	genEnemy(1);
	
	gotoxy(win_width + 7 , 2); cout<<"Car Game";
	gotoxy(win_width + 6 , 4); cout<<"------------";
	gotoxy(win_width + 6 , 6); cout<<"------------";
	gotoxy(win_width + 7 , 12); cout<<"Control";
	gotoxy(win_width + 7 , 13); cout<<"--------";
	gotoxy(win_width + 2 , 14); cout<<"a key - left";
	gotoxy(win_width + 2 , 15); cout<<"d key - right";
	
	gotoxy(18 , 5); cout << "Press any key to start";
	getch();
	gotoxy(18 , 5); cout << "                      ";
	
	while(1){
		if(kbhit()){
			char ch = getch();
			if(ch == 'a' || ch == 'A'){
				if(carpos > 18)
				carpos -= 4;
			}
			if(ch == 'd' || ch == 'D'){
				if(carpos < 50)
				carpos += 4;
			}
			if(ch == 27){
				break;
			}
		}
		
		drawCar();
		drawEnemy(0);
		drawEnemy(1);
		if(collision() == 1){
			gameover();
			return;
		}
		
		sleep(50);
		eraseCar();
		eraseEnemy(0);
		eraseEnemy(1);
		
		if(enemyY[0] == 10)
		   if(enemyflag[1] == 0)
		      enemyflag[1] = 1;
		      
		if(enemyflag[0] == 1)
		enemyY[0] += 1;
		
		if(enemyflag[1] == 1)
		enemyY[1] += 1;
		
		if(enemyY[0] > screen_height - 4){
			
			resetEnemy(0);
			score++;
			updatescore();
		}
		
		if(enemyY[1] > screen_height - 4){
			
			resetEnemy(1);
			score++;
			cout << '\a';
			updatescore();
		}		
	}
}

int main(){
	
	
	setcursor(0,0);
	srand((unsigned)time(NULL));
	
	do{
		system("cls");
		gotoxy(10 , 5);  cout <<"-----------------------";
		gotoxy(10 , 6);  cout <<"|       Car Game      |";
		gotoxy(10 , 7);  cout <<"-----------------------";
		gotoxy(10 , 9);  cout <<"1. Start Game";
		gotoxy(10 , 10); cout <<"2. Instructions";
		gotoxy(10 , 11); cout <<"3. Quit";
		gotoxy(10 , 13); cout <<"Select Option : ";
		char op = getche();
		
		if(op == '1') play();
		else if(op == '2') instructions();
		else if(op == '3') exit(0);
		
	}
	
	while(1);
	
	return 0;
					
}

// Have a Good Time
// The End


