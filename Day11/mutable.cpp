#include<iostream>
using namespace std;

class Example
{
    public:
        mutable int value;
        Example(int val): value(val) {}
        void modify() const {value++;};
};
int main()
{
    Example E1(5);
    E1.modify();
    cout<<E1.value;
}
