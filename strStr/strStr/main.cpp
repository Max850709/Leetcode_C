/*
 Implement strStr().
 
 Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 
 Clarification:
 
 What should we return when needle is an empty string? This is a great question to ask during an interview.
 
 For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/

#include <iostream>
using namespace std;

class solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos/*or haystack.find(needle)<haystack.length() */){
            return haystack.find(needle);
        }
        else if(needle.empty()){
            return 0;
        }
        
        return -1;
        
    }
};

int main() {
    solution s1;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout << s1.strStr(str1,str2) <<'\n';
    return 0;
}
