#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        if(n==1){
            return arr[0];
        }
        while(lo<=hi){
            int mi=lo+(hi-lo)/2;

            if(mi==0){
                return arr[0];
            }

            cout<<lo<<" "<<mi<<" "<<hi<<endl;
            if(arr[mi]!=arr[mi+1] and arr[mi]!= arr[mi-1]){
                return arr[mi];
            }
            if(arr[mi]==arr[mi+1]){
                if(mi%2==1){
                    hi=mi-1;
                }
                else{
                    lo=mi+1;
                } 
            }
            else if (arr[mi]==arr[mi-1]){

                 if(mi%2==1){

                    lo=mi+1;
                   
                }
                else{
                    

                     hi=mi-1;
                } 

                
            }
        }

        return -111;
        
    }
};


int main(){

   return 0;
}