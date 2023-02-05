#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter the Number of Rows: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // Spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}