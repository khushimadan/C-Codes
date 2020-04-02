#include <iostream>

using namespace std;

int main()
{   int x;
    int f,s;
    cout << "WELCOME TO KHU$HI'S CALCULATOR " << endl;
    cout << " Enter 1 for addition" << endl;
    cout << " Enter 2 for subtraction" << endl;
    cout << " Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division " << endl;
    cin >> x;
      if (x>4)
        {
            cout << "Wrong option " << endl;
            return 0;
        }
        if (x<1)
            {
                cout << "wrong option" << endl;
                return 0;
            }

    cout << " Enter first number" << endl;
    cin >> f;
    cout << "Enter second number" << endl;
    cin >> s;
    cout << "Result = ";
    if( x==1 )
        cout << f+s << endl;
    if (x==2)
        cout << f-s << endl;
    if (x==3)
    cout << f*s << endl;
        if (x==4)
        cout << f/s << endl;



    return 0;
}
