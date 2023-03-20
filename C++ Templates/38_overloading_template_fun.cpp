#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func()" << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatatised func()\n"
         << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatatised func()\n"
         << a << endl;
}

int main()
{
    Harry<float> h(5.7);
    //  Harry<char> h('c');
    //   Harry<int> h(87);
    cout << h.data << endl;
    h.display();

    func(4); // Exact match takes the highest priorty
    func1(4);
}