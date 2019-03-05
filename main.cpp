#include <iostream>

using namespace std;

int main()
{
    cout << "enter A and B: " << endl;
    int a,b;
    cin >> a >> b;
    cout << "A + B = " << a + b << endl
         << "A - B = " << a - b << endl
         << "A * B = " << a * b << endl
         << "A / B = " << a / b << endl;
<<<<<<< HEAD
         if (a>b) cout << "MAX = " << a;
         else cout << "MAX = " << b;
=======
         if (a>b) cout << "MIN = " << b;
         else cout << "MIN = " << a;
>>>>>>> code: боб с минимумом
    return 0;
}
