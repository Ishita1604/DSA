#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n, i;
    cout << "Enter a Number: ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            break;
        }
    }
    if (i == n)
        cout << "Prime" << endl;

    return 0;
}