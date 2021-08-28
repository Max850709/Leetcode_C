//
//  main.cpp
//  isAnagram
//
//  Created by Max on 2021/7/2.
//  Copyright © 2021年 Max. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;


class solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        
        if(s.size()!=t.size()){
            return false;
        }
        for(auto s1:s){
            umap1[s1]++;
        }
        for(auto t1:t){
            umap2[t1]++;
        }
        for(int i=0;i<s.size();i++){
            if(umap1[s[i]]!=umap2[s[i]]){
                return false;
            }
        }
        return true;
    }
};


int main() {
    solution s1;
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    //s1.isAnagram(str1, str2);
    cout << s1.isAnagram(str1, str2) << endl;
    return 0;
}
