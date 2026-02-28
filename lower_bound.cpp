#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int x) {
       
        // auto lb= lower_bound(arr.begin(),arr.end(),x);
        
        // int indlb= lb-arr.begin();
        
        // return indlb;
        
          int n=arr.size();
        int lo=0;
        int hi=n-1;
        int ans=n;
        while(lo<=hi){
            int mid=lo +(hi-lo)/2;
            if(arr[mid]==x){
                ans=mid;
                hi=mid-1;
            }
            else if(arr[mid]<x){
                lo=mid+1;
            }
            else{
                ans=mid;
                hi=mid-1;
            }
        }
        return ans;


        
    }
};



int main(){

   return 0;
}