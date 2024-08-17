#include<iostream>
using namespace std;

int choice , row , column;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
bool draw = false;

void display_board()
{
	system("cls");
	cout<<"\n\t Tic-Tac-Toe"<<endl;
	cout<<"\n   Player 1 [X] \n   Player 2 [O]\n\n";
	cout<<"\t     |     |     \n";
	cout<<"\t   "<<board[0][0]<<" |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
	cout<<"\t     |     |     \n";
	cout<<"\t   "<<board[1][0]<<" |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
    cout<<"\t     |     |     \n";
	cout<<"\t   "<<board[2][0]<<" |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
    cout<<"\t     |     |     \n";
}

void player_turn()
{
	if(turn=='X')
	cout<<"\n\t Player1 [X] turn:";
	if(turn=='O')
	cout<<"\n\t Player2 [O] turn:";
	
    cin>>choice;

    switch(choice){
    case 1: row=0; column=0; break;
    case 2: row=0; column=1; break;
    case 3: row=0; column=2; break;
    case 4: row=1; column=0; break;
    case 5: row=1; column=1; break;
    case 6: row=1; column=2; break;
    case 7: row=2; column=0; break;
    case 8: row=2; column=1; break;
    case 9: row=2; column=2; break;
    
    default:
    	cout<<"Invalid Choice\n";
    	break;
	}
	// replacement error solved !
	if(turn== 'X' && board[row][column]!='X'&& board[row][column]!='O')
	{
		board[row][column]='X';
		turn='O';
	}
	else if(turn== 'O'&& board[row][column]!='X'&& board[row][column]!='O')
	{
		board[row][column]='O';
		turn='X';
	}
	else{
		cout<<"\n\n   BOX already filled :(\n   Please try again !!!!\n\n";
		player_turn();
	}
}

bool gameover()
{
	// row win 
	for(int i=0;i<3;i++)
	if(board[i][0]==board[i][1] && board[i][0]==board[i][2])  
	return false;
	
	// column win
	for(int i=0;i<3;i++)
	if( board[0][i]==board[1][i] && board[0][i]==board[2][i])
	return false;
	
	// diagonal win
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][0]==board[2][0])
	return false;
	
	// if there is not any box filled 
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	if(board[i][j]!='X' && board[i][j]!='O')
	return true;
	
	// game draw condition
	draw=true;
	return false;
}


int main()
{
	while(gameover())
	{
	display_board();
    player_turn();
	display_board();
	gameover();
    }
    
    if(turn=='X' && draw == false)
    cout<<"\n\nPlayer2 [X] Wins !!! Congratulations \n";
    else if(turn=='O' && draw == false)
    cout<<"Player1 [X] Wins !!! Congratulations \n";
    else 
    cout<<"Game DRAW :)\n";
}
