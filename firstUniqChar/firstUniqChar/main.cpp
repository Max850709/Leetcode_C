/*
Given a string s, return the first non-repeating character in it and return its index. If it does not exist, return -1.

 Example 1:
 
 Input: s = "leetcode"
 Output: 0
 Example 2:
 
 Input: s = "loveleetcode"
 Output: 2
 Example 3:
 
 Input: s = "aabb"
 Output: -1
 
*/

#include <iostream>
#include <time.h>
using namespace std;
#include <unordered_map>

class solution {
public:
    /*int firstUniq(string s) {
        int ans=-1;
        int i=0;
        for(int i=0;i<s.size();i++){
            int count=0;
            for(int j=0;j<s.size();j++){
                if(s[i]==s[j]){
                    count+=1;
                }
            }
            if(count==1){
                ans=i;
                break;
            }
            
        }
        return ans;
    }*/
    
    int firstUniqChar(string s){
        unordered_map<char,int> umap;
        for(auto s1:s){
            umap[s1]++;
        }
        for(int i=0;i<s.size();i++){
            if(umap[s[i]]==1){
                return i;
            }
        }
        return -1;    }
};

int main() {
    //clock_t tStart = clock();
    //cout << (double)(clock() - tStart)/CLOCKS_PER_SEC;
    solution s1;
    string str;
    getline(cin,str);
    
    cout << s1.firstUniqChar(str) << endl;;
    
    /*string a;
    getline(cin,a);
    unordered_map<char, int> u;
    for(auto &s1:a){
        u[s1]++;
    }
    for(int i=0;i<a.size();i++){
        cout << u[a[i]] << endl;
    }*/
    
    return 0;
}
