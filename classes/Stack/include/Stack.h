#include <iostream>
using namespace std;

#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
    public:
        Stack(int size);
        virtual ~Stack();
        void push(T);
        T pop();
        bool isEmpty();
        bool isFull();
        void print();
    protected:

    private:
        T *arr;
        int marker;
        int stack_size;
};


template <class T>
Stack<T>::Stack(int size)
{
    arr = new T[size];
    marker = -1;
    stack_size = size;
}

template <class T>
Stack<T>::~Stack()
{
    delete [] arr;
}

template <class T>
void Stack<T>::push(T value)
{
    if (isFull())
    {
        cout << "Stack is full" << endl;
        return;
    }
    arr[++marker] = value;
}

template <class T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    return arr[marker--];
}

template <class T>
bool Stack<T>::isEmpty()
{
    return marker == -1;
}

template <class T>
bool Stack<T>::isFull()
{
    return marker == stack_size - 1;
}

template <class T>
void Stack<T>::print()
{
    for (int i = 0; i <= marker; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
#endif // STACK_H
