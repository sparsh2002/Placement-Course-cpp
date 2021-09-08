#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // string str;
    // cin >> str;
    // cout << str;
    // string str1(5,'n');
    // cout << str1 << endl;
    // getline(cin , str);
    // cout << str << endl;
    // string s1 = "fam";
    // string s2 = "ily";
    // s1.append(s2);
    // cout << s1 << endl;
    // cout << s1+ s2 << endl;
    // s1 = s1 + s2;
    // cout << s1;
    // string s3 = "ily";
    // cout << s1.compare(s2) << endl;
    // cout << s2.compare(s1) << endl;
    // cout << s2.compare(s3) << endl;
    // s3.clear();
    // cout << s3.empty() << endl;

    string s1 = "fglkabsfbvas";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}