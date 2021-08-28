/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).
*/

#include <iostream>
using namespace std;

class solution {
public:
    int myAtoi(string s) {
        
        if(s[0]=='+' || s[0]=='-' || s[0]>47 && s[0]<58 || s[0]==' '){
            try {
                return stoi(s);
            } catch (out_of_range) {
                if(s.find('-')<s.length()){
                    return INT_MIN;
                }
                else{
                    return INT_MAX;
                }
                
            }
            catch(invalid_argument){
                return 0;
            }
            
            
        }
        return 0;
    }
};

int main() {
    solution s1;
    
    string str;
    getline(cin,str);
    cout << s1.myAtoi(str) <<'\n';
    return 0;
}
