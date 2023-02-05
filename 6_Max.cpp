#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a > b && a > c)
        cout << a << endl;
    else if (b > a && b > c)
        cout << b << endl;
    else
        cout << c << endl;

    return 0;
}