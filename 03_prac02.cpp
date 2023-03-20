#include <iostream>
using namespace std;

class student
{
private:
    int sid;

public:
    int std;
    string stream;
    void getData()
    {
        cout << sid << endl;
        cout << std << endl;
        cout << stream << endl;
    }
    void setData(int std, string stream);
    void readData(int sid);
};

void student ::setData(int a, string b)
{
    std = a;
    stream = b;
}

void student ::readData(int c)
{
    sid = c;
}

int main()
{
    student monty;
    monty.setData(14, "Engineering");
    monty.readData(31);
    monty.getData();

    return 0;
}
