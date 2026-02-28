#include<bits/stdc++.h>
using namespace std;

// optimized version in the other feature-bs-optimization branch

// adding this logic

class Solution {
public:
vector<int> ans;
    vector<int> searchRange(vector<int>& arr, int x) {
         
         
         auto lb=lower_bound(arr.begin(),arr.end(),x);
        int lbind=lb-arr.begin();
        int n=arr.size();
        if(lbind<n and arr[lbind]==x){
             ans.push_back(lbind);

        }
        else{
            return {-1,-1};
        }
       
        lb=upper_bound(arr.begin(),arr.end(),x);
         lbind=lb-arr.begin();
         lbind--;

         ans.push_back(lbind);
         return ans;

        
        
    }
};

int main(){

   return 0;
}


