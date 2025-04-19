#include<bits/stdc++.h>
using namespace std;

// matrix for the tic tac toe
vector<vector<char>> ttt(3, vector<char>(3, '_'));


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

bool regame()
{
    system("cls");
    cout << "Do you want to play again? y/n";
    char ans; cin >> ans;
    if (ans == 'y' || ans == 'Y') return true;
    if (ans == 'n' || ans == 'N') return false;
    regame();
}

void game(vector<vector<char>> ttt)
{
    system("cls");
    cout << "its X 's turn." << endl;
    cout << "Enter any number from 1 - 9 : ";
    char val; cin >> val;

}

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