#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> numbers {1,2,3,4};
    cout<<"Given List : ";
    for(int i: numbers){
        cout<<i<<" ";
        }

    numbers.push_front(10);//push at beginning
    numbers.push_back(12);//push at end


    cout<<"\nAfter push_back and push_front : ";
    for(int i: numbers){
        cout<<i<<" ";
        }

    cout<<"\nFirst element : "<<numbers.front()<<endl;

    cout<<"Last element : "<<numbers.back()<<endl;

    numbers.pop_front();
    cout<<"\nAfter pop from front : ";
    for(int i: numbers){
        cout<<i<<" ";
        }

    cout<<"\nAfter pop from back : ";
    numbers.pop_back();
    for(int i: numbers){
        cout<<i<<" ";
        }


}



