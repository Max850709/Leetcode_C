/*
 The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
 
 countAndSay(1) = "1"
 countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
 To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.
*/

#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    string countAndSay(int n) {
        string a="1";
        if(n==1){
            return a;
        }
        int j=0;
        
        string tmp="";
        while(j<n-1){
            for(int i=0;i<a.size();i++){
                
                int count=1;
                int temp=i;
                while(a[i]==a[i+1]){
                    count+=1;
                    temp=i;
                    i++;
                }
                
                tmp+=to_string(count);
                tmp+=a[temp];
            }
            a=tmp;
            tmp="";
            j++;
        }
        return a;
    }
};


int main() {
    solution s1;
    int n;
    cin >> n;
    cout << s1.countAndSay(n);
    
    return 0;
}
