#include<iostream>

#include<functional>

#include<cmath>

using namespace std;

int main(){

 double a,c;

 char b;

 cout<<"Enter first no: "<<endl;

 cin>>a;

 cout<<"Enter second no: "<<endl;

 cin>>c;

 cout<<"Enter operation to be performed:(+,-,*,/,%) "<<endl;

 cin>>b;

 double result;

 bool validOperation=true;

 switch(b){

 case '+':

 plus<double>()(a,b);

 break;

 case '-':

 minus<double>()(a,b);

 break;

 case '*':

  multiplies<double>()(a,b);

  break;

  case '/':

  if (c== 0) {

        cout << "Cannot be divide by zero." <<endl;

        validOperation = false;

      } else {

        result = divides<double>()(a, c);

      }

      break;

      case '%':

       if (static_cast<int>(c) == 0) {

        cout << "Cannot be divide by zero." << endl;

        validOperation = false;

      } else {

        result = static_cast<int>(a) % static_cast<int>(c);

      }

      break;

    default:

      cout <<" Invalid choice" << endl;

      validOperation = false;

      break;

 }

 if (validOperation) {

    cout << "Result: " << result << endl;

  }

 return 0;

}
