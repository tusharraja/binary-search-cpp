#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

bool isfunclesseq(int threshold,int mid,vector<int>&arr){

    int sum=0;
    if(mid==0){
        return false;
    }
    for(auto x:arr){

        if(x%mid==0){
            sum=sum + x/mid;
        }
        else{
            sum=sum+ x/mid;
            sum++;
        }

        if(sum>threshold){
            return false;
        }
    }

    cout<<threshold<<" "<<mid<<" "<<sum<<endl;
    
    return true;

}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        int mx=0;
        for(auto x:arr){
            mx=max(mx,x);
        }
        int lo=0;
        int hi=mx;
        int ans=hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(isfunclesseq(threshold,mid,arr)==true){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

        }
        return ans;
    }
};

int main(){

   return 0;
}