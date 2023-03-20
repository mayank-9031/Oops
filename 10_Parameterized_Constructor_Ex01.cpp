#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(2, 5);
    b.printNumber();

    return 0;
}
