#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        if(n==1){
            return 0;
        }
        if(arr[0]>arr[1]){
            return 0;
        }
        if(arr[n-1]>arr[n-2]){
            return n-1;
        }

        while(lo<=hi){
            int mi=lo+(hi-lo)/2;
            if(arr[mi]>arr[mi+1] and arr[mi]>arr[mi-1]){
                return mi;
            }
            if(arr[mi]<arr[mi+1]){
                lo=mi+1;
            }
            else{
                hi=mi;
            }
        }
        return -11;
        
    }
};

int main(){

   return 0;
}