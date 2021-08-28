/*
 Write a function to find the longest common prefix string amongst an array of strings.
 
 If there is no common prefix, return an empty string "".
 

*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty()){
            return "";
        }
        
        int len=INT_MAX;
        for(auto s:strs){
            if(s.size()<len){
                len=s.size();
            }
        }
        string temp;
        for(int i=0;i<len;i++){
            temp=strs[0].substr(0,i+1);
            for(auto s:strs){
                if(s.substr(0,i+1).find(temp)==string::npos){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0].substr(0,len);
    }
};

int main(int argc, const char * argv[]) {
    
    vector<string> strs;
    
    Solution s1;
    string str;
    while(str!="1"){
        getline(cin,str);
        if(str=="1"){
            break;
        }
        strs.push_back(str);
    }
    
    
    cout<<s1.longestCommonPrefix(strs)<<"\n";
    
    return 0;
}
