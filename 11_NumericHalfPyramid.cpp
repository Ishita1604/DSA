// Numeric Half Pyramid
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    return 0;
}