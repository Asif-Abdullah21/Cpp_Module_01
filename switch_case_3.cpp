#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2)
    {
    case 0:
        cout << "EVEN\n";
        break;
    default:
        cout << "ODD\n";
    }
    return 0;
}