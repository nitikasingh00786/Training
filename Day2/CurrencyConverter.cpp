#include<iostream>
using namespace std;

void RsToPound(){
    float Rs;
    cout<<"Enter Rupee : ";
    cin>>Rs;
    cout<<(Rs/0.0094)<<"Pounds";
}
void RsToUsDoller(){
    float Rs;
    cout<<"Enter Rupee : ";
    cin>>Rs;
    cout<<(Rs/83.5)<<"Doller";
}
void UsDollerToRs(){
    float UsDoller;
    cout<<"Enter Doller : ";
    cin>>UsDoller;
    cout<<(UsDoller*83.5)<<"Rupees";
}
void RsToYuan(){
    float Rs;
    cout<<"Enter Rupee : ";
    cin>>Rs;
    cout<<(Rs/11.48)<<"Yuan";
}
void YuanToRs(){
    float Yuan;
    cout<<"Enter Yuan : ";
    cin>>Yuan;
    cout<<(Yuan*11.48)<<"Rs";
}

int main(){
    cout<<"1.RsToPound"<<endl<<"2.RsToUsDoller"<<endl<<"3.UsDollerToRs"<<endl<<"4.RsToYuan"<<endl<<"5.YuanToRs"<<endl;
    int choice;
    cout<<"Enter Your Choice : "<<endl;
    cin>>choice;
    switch(choice){
        case 1:RsToPound();break;
        case 2:RsToUsDoller();break;
        case 3:UsDollerToRs();break;
        case 4:RsToYuan();break;
        case 5:YuanToRs();break;

    }
}
