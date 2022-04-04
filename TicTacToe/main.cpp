

#include <iostream>

#include <cstdlib>

using namespace std;


bool isWon(char curr_player, char board[][3]) {
    for (int i = 0; i < 3; i++) {
        //if on board 00,
        if (board[i][0] == curr_player)
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
                return true;
        if (board[0][i] == curr_player)
            if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
                return true;
        if (board[1][1] == curr_player)
            if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
                return true;

        if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
            return true;
        if (board[0][2] == curr_player)
            if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
                return true;
        return false;
    }
}
bool isDraw(char board[][3])
{
    //loop though row
    for (int i = 0; i < 3; i++)
    {
       // loop through column
        for (int j = 0; j < 3; j++)
        {
            //if is empty
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}


void displayBoard(char board[][3])
{
    cout << "-------------" << endl;
    // got through 1st columns and place |
    for (int i = 0; i < 3; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        //got tough each place space  and | ;
        {
            cout <<"  " << board[i][j] << "|";
        }
        cout << endl;
    }
    cout << "-------------" << endl;
}
void makeAMove(char board[][3], char curr_player) {
//for male th emove i need 2 int col and row
    int row;
    int col;
    cout << "Enter a row (0, 1, 2) for player " << curr_player << " : ";
    cin >> row;
    cout << "Enter a column (0, 1, 2) for player " << curr_player << " : ";
    cin >> col;
    //when rox an dcol not equal  to spcae
    while (board[row][col] != ' ') {
        cout << "The cell is already occupied. Try a different cell" << endl;
        cout << "Enter a row (0, 1, 2) for player ." << curr_player << " : ";
        cin >> row;
        cout << "Enter a column (0, 1, 2) for player " << curr_player << " : ";
        cin >> col;
    }
    //placeing the player marks
    board[row][col] = curr_player;
}

int main() {
    //
    // PLEASE DO NOT CHANGE main()
    //
    char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
    displayBoard(board);
    while (true) {
        // The first player makes a move
        makeAMove(board, 'X');
        displayBoard(board);
        if (isWon('X', board)) {
            cout << "X player won" << endl;
            exit(0);
        }
        else if (isDraw(board)) {
            cout << "No winner" << endl;
            exit(0);
        }
        // The second player makes a move
        makeAMove(board, 'O');
        displayBoard(board);
        if (isWon('O', board)) {
            cout << "O player won" << endl;
            exit(0);
        }
        else if (isDraw(board)) {
            cout << "No winner" << endl;
            exit(0);
        }
    }
    return 0;
}






