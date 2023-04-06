#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> s(5);
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.pop() << s.pop() << s.pop() << endl;

    cout << "Try Reverse Words" << endl;
    Stack<char> s2(20);
    char str[] = "Hello world!";
    for (int i = 0; str[i] != '\0'; i++)
    {
        s2.push(str[i]);
    }
    cout << "Hello world!" << endl;
    while (!s2.isEmpty())
    {
        cout << s2.pop();
    }
    cout << endl;


    return 0;
}
