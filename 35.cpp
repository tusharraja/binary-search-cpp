#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {

        auto lb= lower_bound(arr.begin(),arr.end(),x);

        int lbind=lb-arr.begin();

       return lbind;

        

        
    }
};


int main(){

   return 0;
}