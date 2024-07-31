//custom accumulation using lembda
#include<iostream>
#include<vector>
#include<string>
#include<numeric> // for accumulate
using namespace std;
int main()
{
    vector<string> words = {"Hello", "world", "from","C++"};
    //Using accumulate with a lambda to concentrate strings
    string result = accumulate(words.begin(), words.end(),string(""),[](const string& total, const string & word){
        return total + (total.empty() ?"" : " ") + word;
    });
    cout<<"Concatenated string: "<<result<<endl;
    return 0;
}
