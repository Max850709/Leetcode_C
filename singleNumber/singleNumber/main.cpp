//
//  main.cpp
//  singleNumber
//
//  Created by Max on 2021/7/27.
//  Copyright © 2021年 Max. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size();++i){
            ans ^= nums[i];
        }
        
        return ans;
    }
};

int main(int argc, const char * argv[]) {
    solution s1;
    vector<int> vec;
    int num;
    while(1){
        cin>>num;
        if(num==-1){
            break;
        }
        vec.push_back(num);
    }
    cout<<s1.singleNumber(vec)<<endl;
    
    
    return 0;
}
