#include<iostream>
using namespace std;
int main(){
    int bike_count=2;
    int truck_count=7;
    int vehicle_count=bike_count+truck_count;
    int narrowing_conversion_assignment=2.9;
    cout<<"Bike count:"<<bike_count<<endl;
    cout<<"Truck count:"<<truck_count<<endl;
    cout<<"Vehicle count:"<<vehicle_count<<endl;
    cout<<"Narrowing Conversion:"<<narrowing_conversion_assignment<<endl;

    cout<<"sizeof int: "<<sizeof(int)<<endl;
    cout<<"size of truck_count: "<<sizeof(truck_count)<<endl;
    return 0;

}
