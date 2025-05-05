#include<bits/stdc++.h>
using namespace std;

// matrix for the tic tac toe
vector<vector<char>> ttt(3, vector<char>(3, '_'));

// game logic check
bool check = true;

// function declaration
void game_logic(vector<vector<char>> &ttt);
void game(vector<vector<char>> &ttt);


void print(vector<vector<char>> &v)
{
    for (vector<char> &i : v)
    {
        for (char &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// regame
bool regame()
{
    system("cls");
    cout << "Do you want to play again? y/n";
    char ans; cin >> ans;
    if (ans == 'y' || ans == 'Y') return true;
    if (ans == 'n' || ans == 'N') return false;
    return regame();
}

void x_turn()
{
    cout << "its X 's turn." << endl;
    cout << "Enter any number from 1 - 9 : ";
    int val; cin >> val;
    int row = (val - 1) / 3;
    int col = (val - 1) % 3;
    if (ttt[row][col] == '_')
    {
        ttt[row][col] = 'X';
    }
    else
    {
        cout << "Invalid move! Try again." << endl;
        x_turn();
    }
    check = false;

    game(ttt);
    
}
void y_turn()
{
    cout << "its O 's turn." << endl;
    cout << "Enter any number from 1 - 9 : ";
    int val; cin >> val;
    int row = (val - 1) / 3;
    int col = (val - 1) % 3;
    if (ttt[row][col] == '_')
    {
        ttt[row][col] = 'O';
    }
    else
    {
        cout << "Invalid move! Try again." << endl;
        y_turn();
    }
    check = true;
    game(ttt);
}

// game logic
void game_logic(vector<vector<char>> &ttt)
{
    for (int i = 0; i < 3; i++)
    {
        if (ttt[i][0] == ttt[i][1] and ttt[i][1] == ttt[i][2])
        {
            cout << ttt[i][0] << " is the winner!";
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (ttt[0][i] == ttt[1][i] and ttt[1][i] == ttt[2][i])
        {
            cout << ttt[0][i] << " is the winner !";
        }
    }

    if (ttt[0][0] == ttt[1][1] and ttt[1][1] == ttt[2][2])
    {
        cout << ttt[0][0] << " is the winner !";
    }
    
    if (ttt[2][0] == ttt[1][1] and ttt[1][1] == ttt[0][2])
    {
        cout << ttt[1][1] << " is the winner !";
    }
}

// main game
void game(vector<vector<char>> &ttt)
{
    system("cls");
    print(ttt);

    
    if (check)
    {
        x_turn();
    }
    else
    {
        y_turn();
    }
}

// functioncallmain
int main()
{
    system("cls");

    cout << R"(
    _____ _        _____            _____          
   |_   _(_)      |_   _|          |_   _|         
     | |  _  ___    | | __ _  ___    | | ___   ___ 
     | | | |/ __|   | |/ _` |/ __|   | |/ _ \ / _ \
     | | | | (__    | | (_| | (__    | | (_) |  __/
     \_/ |_|\___|   \_/\__,_|\___|   \_/\___/ \___|
                                                   
                                                    
    )" << endl;
   

    // print(ttt);

    cout << R"(Press 1 to start
Press 0 to exit >)";
    int it; cin >> it;

    if (it == 1) game(ttt);
    else if (it == 0) exit(0);
    else main();

    return 0;
}