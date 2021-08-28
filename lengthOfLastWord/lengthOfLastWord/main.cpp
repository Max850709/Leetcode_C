//
//  main.cpp
//  lengthOfLastWord
//
//  Created by Max on 2021/7/28.
//  Copyright © 2021年 Max. All rights reserved.
//

#include <iostream>
using namespace std;

class solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        string::size_type found;
        found=s.find(' ');
        if(found==s.npos){
            return s.size();
        }
        if(s.at(s.size()-1)==' '){
            return s.size()-1;
        }
        
        for(int i=s.size()-1;i>0;i--){
            
            
            if(s[i]==' '){
                //return count;
                break;
            }
            count+=1;
            
        }
        return count;
    }
};


int main(int argc, const char * argv[]) {
    string str;
    getline(cin,str);
    
    solution s1;
    //cout<<s1.lengthOfLastWord(str)<<endl;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            if(i!=0 || str[i-1]==' '){
                count=0;
            }
            count++;
        }
    }
    cout<<count;
    return 0;
}
