#include <iostream>
#include <ComplexNumber.h>

using namespace std;

int main()
{
    cout << "Welcome to the Complex Number Calculator!" << endl;

    ComplexNumber c1;
    cin >> c1;

    ComplexNumber c2;
    cin >> c2;

    cout << "----------------------------------------" << endl;
    cout << c1 << " + " << c2 << " = \t" << c1 + c2 << endl;
    cout << c1 << " - " << c2 << " = \t" << c1 - c2 << endl;
    cout << c1 << " * " << c2 << " = \t" << c1 * c2 << endl;
    cout << c1 << " / " << c2 << " = \t" << c1 / c2 << endl;
    
    cout << "----------------------------------------" << endl;
    cout << "The conjugate of " << c1 << " is \t" << -c1 << endl;
    cout << "The conjugate of " << c2 << " is \t" << -c2 << endl;
    cout << "The magnitude of " << c1 << " is \t" << c1.getMagnitude() << endl;
    cout << "The magnitude of " << c2 << " is \t" << c2.getMagnitude() << endl;
    cout << "The phase of " << c1 << " is \t" << c1.getPhase() << endl;
    cout << "The phase of " << c2 << " is \t" << c2.getPhase() << endl;

    cout << "----------------------------------------" << endl;
    cout << "Incrementing " << c1 << " gives \t" << ++c1 << endl;
    cout << "Incrementing " << c2 << " gives \t" << ++c2 << endl;
    cout << "Decrementing " << c1 << " gives \t" << --c1 << endl;
    cout << "Decrementing " << c2 << " gives \t" << --c2 << endl;

    cout << "----------------------------------------" << endl;
    cout << "The complex number " << c1 << " is " << (c1 == c2 ? "" : "not ") << "equal to " << c2 << endl;
    cout << "The complex number " << c1 << " is " << (c1 != c2 ? "" : "not ") << "not equal to " << c2 << endl;

    return 0;
}
