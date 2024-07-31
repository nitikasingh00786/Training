#include<iostream>
using namespace std;
int main(){

    bool red_light{false};
    bool green_light{false};

    if(red_light==true){
        cout<<"Stop!" <<endl;
    }
    else{
        cout<<"Go through!" <<endl;
    }
    if(green_light){
        cout<<"The light is Green!" <<endl;
    }
    else{
        cout<<"The light is not Green!" <<endl;
        }

    //sizeof()
    cout<<"sizeof(bool) : " << sizeof(bool) << endl;

    //Printing out a bool
    //1-->>true
    //0 -->> false_typecout<<endl;

    cout<<"red_light : "<< red_light <<endl;
    cout<<"green_light : "<< green_light <<endl;
    cout<<boolalpha;
    cout<<"red_alight : "<< red_light << endl;
    cout<<"green_light : "<<green_light<<endl;
       }
