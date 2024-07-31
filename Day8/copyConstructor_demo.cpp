#include<iostream>
#include<string>
using namespace std;
class Teacher
{
  private:
  double salary; //data hiding
  public:
  string name;
  string dept;
  string subject;
  void changeDept(string newDept)
  {
    dept = newDept;
  }
  void getInfo()
  {
    cout<<"Teacher name: "<<name<<endl;
    cout<<"Teacher subject: "<<subject<<endl;
  }
  void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }
    Teacher(){
    cout<<"constructor is calling "<<endl;
    }
    Teacher(string s,string d,string sub,double sal){
    name=s;
    dept=d;
    subject=sub;
    salary=sal;
    }
};
int main()
{
  Teacher t1;
  t1.name = "sarang";
  t1.subject = "Math";
  t1.changeDept ("CSE");
  t1.getInfo();
  cout<<t1.name<<endl;
  t1.setsalary(35000);
  cout<<t1.getsalary()<<endl;

  Teacher t2("Aarush","CSE","C++",1500000);
  t2.getInfo();
}
