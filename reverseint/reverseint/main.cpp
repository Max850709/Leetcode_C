/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

#include <iostream>
using namespace std;

class solution{
public:
    int reverse(int x) {
        int ans=0;
        
        for(;x!=0;x/=10){
            if(x>0){
                if(ans > (INT_MAX - (x % 10)) / 10 )return 0;
            }
            else{
                if(ans < (INT_MIN - (x % 10)) / 10 )return 0;
            }
            
            ans=10*ans+(x%10);
            //x=x/10;
        }
        
        return ans;
        
    }
};

int main() {
    solution s1;
    
    int num;
    cin >> num;
    
    
    cout << s1.reverse(num);
    
    return 0;
}
