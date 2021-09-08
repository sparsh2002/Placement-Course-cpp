#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main(){
    string s;
    cin>> s;
    int count[26] =  {};
    for(int i=0 ; i< 26 ; i++){
        count[i] = 0;
    }
    for(int i=0 ; i<s.length() ; i++){
        int val = (int)s[i]-97;
        count[val]++;
    }

    int maxfreq = 0;
    char maxocc = s[0];
    for(int i=0 ; i<26 ; i++){
        if(count[i]>maxfreq){
            maxfreq = count[i];
            maxocc = (char)(i+97);
        }
    }

    cout << maxfreq << " " << maxocc << endl;
    return 0;
}