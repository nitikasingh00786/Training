#include<iostream>
using namespace std;
extern int globalVar;
int main() {

        globalVar++;
        cout<<globalVar;
    }
