//
//  main.cpp
//  isPalindrome
//
//  Created by Max on 2021/7/4.
//  Copyright © 2021年 Max. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

class solution {
public:
    bool isPalindrome(string s) {
        stack<char> mystack;
        stack<char> mystack1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]>64 && s[i]<91){
                char temp=s[i]+32;
                mystack.push(temp);
            }
            else if(s[i]>96 && s[i]<123){
                mystack.push(s[i]);
            }
            else if(s[i]>47 && s[i]<58){
                mystack.push(s[i]);
            }
        }
        
        for(int i=s.size();i>=0;i--){
            if(s[i]>64 && s[i]<91){
                char temp=s[i]+32;
                mystack1.push(temp);
            }
            else if(s[i]>96 && s[i]<123){
                mystack1.push(s[i]);
            }
            else if(s[i]>47 && s[i]<58){
                mystack1.push(s[i]);
            }
        }
        
        while(!mystack.empty()){
            if(mystack.top()!=mystack1.top()){
                return false;
                break;
            }
            mystack.pop();
            mystack1.pop();
            
        }
        return true;
    }
};

int main() {
    class solution s1;
    
    
    string s;
    getline(cin,s);
    
    cout << s1.isPalindrome(s);
    
    return 0;
}


/*
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
*/
