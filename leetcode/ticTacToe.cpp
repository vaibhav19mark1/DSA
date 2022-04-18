#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int a[3][3] = {0};
int row[3] = {0}, col[3] = {0}, diag[2] = {0};
int gameEnd = 0, won = 0;

void move(int r, int c, int p)
{
    int val = p == 1 ? 1 : -1;

    row[r] += val;
    col[c] += val;
    if (r == c)
        diag[0] += val;
    if (r + c == 2)
        diag[1] += val;

    if (abs(row[r]) == 3 || abs(col[c]) == 3 || abs(diag[0]) == 3 || abs(diag[1]) == 3)
    {
        won = p;
        gameEnd = 1;
    }
}

int main()
{
    while (gameEnd != 1)
    {
        int r, c, p;
        cin >> r >> c >> p;
        a[r][c] = (p == 1) ? 1 : 2;
        move(r, c, p);

        if (won == 1)
            cout << "player 1 won";
    }
    cout << "player 2 won";
    return 0;
}