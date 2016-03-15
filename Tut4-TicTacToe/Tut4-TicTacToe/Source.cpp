#include <iostream>
using namespace std;

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };  // box numbers for reference
class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();
	int Move();
	int over();// checks if there has been a win for every irration 
	void Print();  // board drawing 

	const void reset();
};
int main(){
	char restart;
	TicTacToe game;
	game.Move();
	game.over();
	game.Print();
	std::cout << "Do you want to play again? Enter (y/n): ";
	std::cin >> restart;
	if (restart == 'y')
	{
		std::cout << "\n\n\n";
		game.Print();
	}
	else if (restart == 'n')
		return 0;
}

int TicTacToe::Move(){
	int	i, choice;
	int player = 1;
	char mark; // game marker

	do
	{
		int	board();
		player = (player % 2) ? 1 : 2;// Alternate user

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;  // player to enter the box the want to mark 

		mark = (player == 1) ? 'X' : 'O';
		//conditional testing

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout << "Invalid move "; // this disallows an out of range box number ie 0-9

			player--;
			cin.ignore();
			cin.get();     // this will ignore the choice if the player and will wait for a valid entry to be stored
		}
		i = over();     // checks with every stroke if the game has been won/lost or a draw

		player++;

	} while (true);
	{

	}
{

}
//Game loop
while (i == -1);
Print();
if (i == 1)

cout << "==>\aPlayer " << --player << " win ";
else
cout << "==>\aGame draw";

cin.ignore();
cin.get();
return 0;
}
int TicTacToe::over()
{
	if (square[1] == square[2] && square[2] == square[3]) // these are the checks for all possible win solutions
		 
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}
void Print()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
