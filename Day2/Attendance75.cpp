#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int ClassesAttended,ClassesHeld;
    cin>>ClassesHeld>>ClassesAttended;
    int percentage=(ClassesAttended*100)/ClassesHeld;
    if(percentage<75){
        cout<<"Classes Attended : "<<percentage<<"%"<<endl<<"Not able to sit in Examination because attendance is less than 75";
    }
    else{
        cout<<"Classes Attended : "<<percentage<<"%"<<endl<<"Able to sit in Examination";
    }
}
