#include<bits/stdc++.h>
using namespace std;

//solution
class Solution{
    public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size()-1;
        while(right - left + 1>k){
            if(x-arr[left] <= arr[right] - x ){
                right--;
            }
            else left++;
        }
        return vector<int> (arr.begin()+left,arr.begin()+right+1);
    }
};

//till here
int main(){
    Solution obj;
    vector<int> ar = {1,2,3,4,5,6};
    vector<int> ans = obj.findClosestElements(ar,4,3);
    for(int  i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}