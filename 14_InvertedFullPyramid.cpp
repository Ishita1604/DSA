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
        for (int sp = 0; sp < row; sp++)
        {
            cout << " ";
        }
        // Stars
        for (int star = 0; star < n - row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}