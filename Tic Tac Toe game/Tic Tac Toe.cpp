//Program to play Tic Tac Toe against a player or the computer
//Written by Ralphas
#include <stdlib.h>  //include libraries needed
#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdio.h>   
using namespace std; //make our lives easier

char c = '0'; //our turn variable

char grid[3][3] = { //the Tic Tac Toe Grid where we play
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'},
		};
int player1(char x){ //Player X functions
	switch(x){ //switch for each case of user input
		case '1':
			if (grid[0][0] == '1'){ //Placing X in the selected place on the grid
			
				grid[0][0] = 'X';
			
				return c = '0';//change turns
			}
			else{
				
				
				return c = '1';//replay in case of false input
			
				}
			break;
		case '2': 
			if (grid[0][1] == '2'){
			
				grid[0][1] = 'X';
				return c = '0'; 
			}
			else{
			
				
				return c = '1'; 
			
				}
			break;
		case '3':
			if (grid[0][2] == '3'){ 
			
				grid[0][2] = 'X';
				return c = '0';
			}
			else{
			
				return c = '1';
			
				}
			break;
		case '4':
			if (grid[1][0] == '4'){
			
				grid[1][0] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		case '5':
			if (grid[1][1] == '5'){
			
				grid[1][1] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		case '6':
			if (grid[1][2] == '6'){
			
				grid[1][2] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		case '7':
			if (grid[2][0] == '7'){
			
				grid[2][0] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		case '8':
			if (grid[2][1] == '8'){
			
				grid[2][1] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		case '9':
			if (grid[2][2] == '9'){
			
				grid[2][2] = 'X';
				return c = '0';
			}
			else{
			
				
				return c = '1';
			
				}
			break;
		default:
			
				
				return c = '1';
			break;
				
				
	}
	
}
int player2(char o){ // player O functions
	switch (o){//switch for each case of user input
		case '1'://Placing O in the selected place on the grid
			if (grid[0][0] == '1'){
			
				grid[0][0] = 'O';
				return c = '1';//change turns
			}
			else{
			
				
				return c = '0';//replay in case of false input
			
				}
			break;
		case '2':
			if (grid[0][1] == '2'){
			
				grid[0][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case '3':
			if (grid[0][2] == '3'){
			
				grid[0][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		case '4':
			if (grid[1][0] == '4'){
			
				grid[1][0] = 'O';
				return c = '1';
			}
			else{
				
				
				return c = '0';
			
				}
			break;
		case '5':
			if (grid[1][1] == '5'){
			
				grid[1][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case '6':
			if (grid[1][2] == '6'){
				grid[1][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		case '7':
			if (grid[2][0] == '7'){
			
				grid[2][0] = 'O';
				return c = '1';
			}
			else{
			
				
				
				return c = '0';
			
				}
			break;
		case '8':
			if (grid[2][1] == '8'){
			
				grid[2][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case '9':
			if (grid[2][2] == '9'){
			
				grid[2][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		default:
		
				
				return c = '0';
			break;
	}
}
int computerMove(){// Computer's functions 
	srand(time(NULL));
	int randomNumber = rand() % 9; //generate random number for the computer to play
	switch (randomNumber){//placing O depending on the number generated
		case 0:
			if (grid[0][0] == '1'){//Placing O on the grid
			
				grid[0][0] = 'O';
				return c = '1';//change to player's turn
			}
			else{
			
				
				return c = '0';//replay in case of error
			
				}
			break;
		case 1:
			if (grid[0][1] == '2'){
			
				grid[0][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case 2:
			if (grid[0][2] == '3'){
			
				grid[0][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		case 3:
			if (grid[1][0] == '4'){
			
				grid[1][0] = 'O';
				return c = '1';
			}
			else{
				
				
				return c = '0';
			
				}
			break;
		case 4:
			if (grid[1][1] == '5'){
			
				grid[1][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case 5:
			if (grid[1][2] == '6'){
				grid[1][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		case 6:
			if (grid[2][0] == '7'){
			
				grid[2][0] = 'O';
				return c = '1';
			}
			else{
			
				
				
				return c = '0';
			
				}
			break;
		case 7:
			if (grid[2][1] == '8'){
			
				grid[2][1] = 'O';
				return c = '1';
			}
			else{
		
				
				return c = '0';
			
				}
			break;
		case 8:
			if (grid[2][2] == '9'){
			
				grid[2][2] = 'O';
				return c = '1';
			}
			else{
			
				
				return c = '0';
			
				}
			break;
		default:
		
				
				return c = '0';//replay in case of error
			break;
	}
	
	
	
}
int chooseTurn(char p){//Function so the player can choose if they want to play first or second
	
	if (p == '0')//if user wants to play first
		return c = '1';
	else if (p == '1')//if user wants to play second
		return c = '0';
	else//terminates programm in case of any other input other than '0' or '1'
		exit(1);
}
bool FirstTurn() {//Random first turn for player mode
	int b;
	srand(time(NULL));//generates random number
	b = rand() % 2;
	if (b == 1)//if player X is first
		return c='1';
	if (b == 0)//if player O is first
		return c='0';
}

bool win() {//win conditions
	for(int i=0; i < 3; i++){//check horizontal lines for win condition
		if(grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O'){//check if player O has won
			cout<<"Player O has won";
		
			return false;
		}
		else if(grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X'){//check if player X has won
			cout<<"Player X has won";
		
			return false;
		}
		}
	
	
	for(int i=0; i < 3; i++){//check vertical lines for win condition
	
		if(grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O'){//check if player O has won
			cout<<"Player O has won";
		
			
			return false;
		
		}
		if(grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X'){//check if player X has won
			cout<<"Player X has won";
		
			return false;
		
		}
		}
	
		if(grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O'){//check for diagonal win condition
			cout<<"Player O has won";
		
			return false;
			
		}
		else if(grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X'){//check for diagonal win condition
			cout<<"Player X has won";
		
			return false;
			
		}
		if(grid[0][2] == 'O' && grid[1][1] == 'O' &&  grid[2][0] == 'O'){//check for diagonal win condition
			cout<<"Player O has won";
			return false;
			
	}
		else if(grid[0][2] == 'X' && grid[1][1] == 'X' &&  grid[2][0] == 'X'){//check for diagonal win condition
			cout<<"Player X has won";
		
			return false;
			
	}
		else if(grid[0][0] != '1' && grid[0][1] != '2' && grid[0][2] != '3' && grid[1][0] != '4' && grid[1][1] != '5' && grid[1][2] != '6' && grid[2][0] != '7' && grid[2][1] != '8' && grid[2][2] != '0')
		{//Check for draw
			cout<<"it's a Draw!";
			return false;
		}
		else
		return true;
}

int main(){
 	int randomNumber;
	char mode, turn, square;//Our variables
	
	
	cout<<"choose mode (0 = 2 Player mode , 1 = Player vs PC) : ";//gives the player the option to select mode
	cin>>mode;//chooses
	if (mode == '0')
		FirstTurn();//generates random number to decide if Player X or O plays first
	if(mode == '1'){
		cout<<"you want to play first or second? (0 = first , 1 = second) : ";//Gives the option to the player to decide wrether they want to play first or not
		cin>>turn;//chooses 
		chooseTurn(turn);//function that decides who plays first depending on the user's input
	}

	
	//first turn
	if(mode == '0' || mode == '1'){//check if the correct mode is selected
	
	if(c == '1')//If player X plays First
	cout<<"player X plays first"<<endl;
	if(c == '0')//If player O plays First
			cout<<"player O plays first"<<endl;
	//Game
	while(win()){//While loop so that we can play the game
		
		if(c == '1')//If its player X turn
	cout<<"Its player's X turn"<<endl;
		else if(c == '0')//If it's player O turn
	cout<<"Its player's O turn"<<endl;
		
		for(int i=0; i<3; i++){//Print the grid on terminal
			for(int j=0; j<3; j++)
					cout<<grid[i][j]<<"|";
			cout<<endl;
		
			
	}
		cout<<endl;
		cout<<"Choose a square (1-9) : ";//gives the player the option to choose a place in the grid to place their respective Char
		if(mode == '0'){
			cin>>square;//choice input
			if (c == '1')
				player1(square);//to place player X 's choice
			else if (c == '0')
				player2(square);//to place player O's choice
				
			
			}	
		else if(mode == '1'){//in case the user wants to play with the computer
			if (c == '1') {
				cin>>square;//Input of player X's choice
				player1(square);
		}
			
			else if (c == '0') {
				
				computerMove();//calls function in computer's turn
			}
			}
			system("cls");//Clears screen 
	
}
		
		
		
		

}

	else{//in case of any other input other than '0' or '1' the programm is terminated
	
		exit(1);	
	}
	cout<<endl;
	cout<<"Written by Ralphas©  (press anything to end the program)";
	cin>>randomNumber;
}
