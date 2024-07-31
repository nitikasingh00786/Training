#include<iostream>
using namespace std;
int main(){
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);
    //int bad_initialization (doesnot exist3+doesnot exist4);
    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.89);

    cout<<"Apple Count " <<apple_count<<endl;
    cout<<"Orange Count " <<orange_count<<endl;
    cout<<"Fruit Count " <<fruit_count<<endl;
    cout<<"Narrowing conversion : " <<narrowing_conversion_functional<<endl;//Win loose info

    return 0;

}
