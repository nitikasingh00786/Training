#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {3,4,2,7};
    int size = a.size();
    cout<<"Size of array: "<<size<<endl;

    cout<<"Array at 3: "<<a.at(3);

    cout<<endl<<"Is array Empty: "<<a.empty();


    cout<<"Element at index="<<a.at(3)<<endl;
    bool trueFalse=a.empty();
    cout<<"true or flase= "<<trueFalse<<endl;
    bool empty=a.empty();
    cout<<"Is array is empty or not ="<<empty<<endl;
    cout<<"first element = "<<a.front()<<endl;
    cout<<"last element = "<<a.back()<<endl;

}
