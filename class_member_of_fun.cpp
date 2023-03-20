#include <iostream>
using namespace std;

class car
{
public:
    string BMW;
    int id;

    void printname();
    void printid()
    {
        cout << "BMW id is " << id;
    }
};

void car ::printname()
{
    cout << "car name is " << BMW;
}

int main()
{
    car obj1;
    obj1.BMW = "bmw ";
    obj1.id = 18;
    obj1.printname();
    cout << endl;
    obj1.printid();
}