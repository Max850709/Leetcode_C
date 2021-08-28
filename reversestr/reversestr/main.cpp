/*Write a function that reverses a string. The input string is given as an array of characters s.
 
 Example 1:
 Input: s = ["h","e","l","l","o"]
 Output: ["o","l","l","e","h"]
 Example 2:
 Input: s = ["H","a","n","n","a","h"]
 Output: ["h","a","n","n","a","H"]
 
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;
class solution{
public:
    void reversestr(vector<char>& s){
        int len=s.size();
        int i = 0,j = len - 1;
        while(i < j){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            
            i++;
            j--;
        }
    }
};


int main() {
    solution s1;
    string temp;
    getline(cin,temp);
    vector<char> s(temp.begin(), temp.end());
    s1.reversestr(s);
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}
