#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;
void findDuplicateWords(string str) {
    unordered_map<string, int> wordCount;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        wordCount[word]++;
    }
    cout << "Duplicate words in the string are:\n";
    for (auto &pair : wordCount) {
        if (pair.second > 1) {
            cout << pair.first << " -> " << pair.second << " times\n";
}}}
int main() {
    string str = "This is miet and miet is miet where we struggle for miet";
    findDuplicateWords(str);
    return 0;
}
