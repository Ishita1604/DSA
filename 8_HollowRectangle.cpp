// Hollow Rectangle
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int rowCount, colCount;
    cout << "Enter Rows: ";
    cin >> rowCount;
    cout << "Enter Columns: ";
    cin >> colCount;
    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int i = 0; i < colCount; i++)
            {
                cout << " * ";
            }
        }
        else
        {
            cout << " * ";
            for (int i = 0; i < colCount - 2; i++)
            {
                cout << "   ";
            }
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}