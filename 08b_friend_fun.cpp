#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend Complex subcomplex(Complex o1, Complex o2);
    void print()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex subcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c1.print();

    c2.setNumber(4, 7);
    c2.print();

    sum = subcomplex(c1, c2);
    sum.print();
}