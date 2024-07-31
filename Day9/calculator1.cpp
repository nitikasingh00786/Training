#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    double num1,num2,result;
    int oper;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operation you want to do:"<<endl;
    cout<<"1. ADD"<<endl;
    cout<<"2. SUBTRACT"<<endl;
    cout<<"3. MULTIPLY"<<endl;
    cout<<"4. DIVISION"<<endl;
    cin>>oper;
    switch(oper){
        case 1 :
        {
            result=plus<double>()(num1,num2);
            cout<<result;
            break;
        }
        case 2 :
        {
            result=minus<double>()(num1,num2);
            cout<<result;
            break;
        }
        case 3 :
        {
           result=multiplies<double>()(num1,num2);
           cout<<result;
            break;
        }
        case 4 :
        {
            if(num2==0){
                cout<<"Cannot divide: "<<endl;
            }
            else{
            result=divides<double>()(num1,num2);
            cout<<result;
            }
            break;
        }
    }
    return 0;

}
