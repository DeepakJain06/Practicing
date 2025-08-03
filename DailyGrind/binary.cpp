#include <bits/stdc++.h>
using namespace std;

int binarysearch(int& nums, int target ){
    int left = 0;
    int right = 0;
    int n = nums.size();

    while(nums[left]<= nums[right]){
        int mid = left + (right - left) / 2;

        if(target == mid){
            return mid;
        }

        else if(mid>target){
            left = mide - 1;
        }

        else{
            right = mid + 1;
        }
    }
    return num[mid];
}

int main(){
    int nums[] = {2, 6, 8, 66, 89, 99};
    int target = 5; 
    int result = binaySearch(nums, target);
    cout << result;
    return 0;
}