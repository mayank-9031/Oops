#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string stream;
    int course;
    int sid;
};

int main()
{
    student mayank;
    student diwanshu;
    student aman;

    mayank.stream = "Btech";
    mayank.course = 14;
    mayank.sid = 31;

    diwanshu.stream = "mbbs";
    diwanshu.course = 13;
    diwanshu.sid = 4256;

    aman.stream = "Bsc";
    aman.course = 15;
    aman.sid = 2;

    cout << "sid = " << mayank.course << endl;
    cout << aman.stream;

    return 0;
}