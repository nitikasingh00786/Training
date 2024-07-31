#include<iostream>
#include<string>
#include<vector>
using  namespace std;

class Car {
    private:
        string licensePlate;
        string owner;

    public:
        Car(string lp,string o): licensePlate(lp),owner(o){}

        string getLicensePlate() const{
            return licensePlate;
        }
        //Write getter and setter for private

        void setlp(string lp){
        licensePlate=lp;
    }
    void seto(string o){
        owner=o;
    }
    string getlp(){
        return licensePlate;
    }
    string geto(){
        return owner;
    }
};

int main() {

}
