#include <iostream>
using namespace std;

class Box{
public:
    double length;
    double breadth;
    double hight;

};

int main(){
    Box box1;
    Box box2;
    double volume = 0.0;

    box1.hight=10.0;
    box1.breadth=6.0;
    box1.length=12.0;

    box2.hight=7.3;
    box2.breadth=6.0;
    box2.length=8.9;

    volume = box1.length*box1.breadth*box1.hight;
    cout<<"volume of box 1 = "<<volume<<endl;

    volume = box2.length*box2.breadth*box2.hight;
    cout<<"volume of box 2 = "<<volume<<endl;




}

