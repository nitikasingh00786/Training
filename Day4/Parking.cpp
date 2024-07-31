#include<iostream>
using namespace std;
int main(){
    cout<<"1.Park Car"<<endl<<"2.Park Bike"<<endl<<"3.Park Rickshaw"<<endl<<"4.Exit"<<endl<<"5.Do you want to perform again"<<endl;
    int choice;
    int Car=0;
    int Bike=0;
    int Rickshah=0;
    while(1){
        cout<<"Enter Your Choice : ";
        cin>>choice;
    switch(choice){
        case 1:
        {
            Car++;
            cout<<Car<<" Car is Parked"<<endl;
            break;
        }
        case 2:
        {
            Bike++;
            cout<<Bike<<" Bike is Parked"<<endl;
            break;
        }
        case 3:
        {
            Rickshah++;
            cout<<Rickshah<<" Rickshaw is Parked"<<endl;
            break;
        }
        case 4:
        {
            exit(0);
        }
        case 5:
        default:
        {
            cout<<"Please Enter a Valid Choice"<<endl;
        }
    }
    cout<<"Do you want to perform again : ";
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y'){
        continue;
    }
    if(ch=='N'||ch=='n'){
        break;
    }
}
}
