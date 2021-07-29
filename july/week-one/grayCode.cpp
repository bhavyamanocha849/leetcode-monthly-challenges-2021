#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int power(int num,int pow){
        if(pow==1)return num;
        return num*power(num,pow-1);
    }
    vector<int> getGrayCode(int n,int pow){
        //
        if(n == 1){
            return vector<int> {0,1};
        }
        
        vector<int> prevAns = getGrayCode(n-1,pow-1);
        vector<int> ans;
        for(int i=0;i<prevAns.size();i++){
            cout<<prevAns[i]<<" ";
            ans.push_back(prevAns[i]);
        }
        cout<<endl;
        for(int i=prevAns.size()-1;i>=0;i--){
            cout<<prevAns[i]+2*pow<<" ";
            ans.push_back(prevAns[i]+power(2,pow));
        }
        cout<<endl;
        return ans;
    }
    
    
    vector<int> grayCode(int n) {
            // if(n==1)return {0,1};
            if(n==0)return {0};
            return getGrayCode(n,n-1);
    }
};