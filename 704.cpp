#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int x) {

        int n=arr.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo +(hi-lo)/2;
            if(arr[mid]==x){
                return mid;
            }
            else if(arr[mid]<x){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return -1;




        
        
    }
};

int main(){

   return 0;
}