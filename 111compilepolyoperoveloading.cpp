#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;
    int add()
    {
        return a + b;
    }
    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "The Output is " << value2 - value1 << endl;
    }
};
int main()
{
    A obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    return 0;
}