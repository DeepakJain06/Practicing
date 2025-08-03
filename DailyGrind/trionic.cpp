#include <bits/stdc++.h>
using namespace std;

class solution{
    public:

    bool isTrionic(vector<int>& nums){
        int n = nums.size();

        for (int p = 1; p < n - 2; ++p){

            for (int q = p + 1; q < n - 1;++q){

                bool ince1 = true, dec =true, inc2= true;

                for (int i = 0; i < p;++i){
                    if(nums[i]> nums[i+1]){
                        ince1 = false;
                        break;
                    }

                }

                for (int i = p; i < n-1;++i){
                    if (nums[i]<nums[n-1]){
                        dec = false;
                        break;
                    }
                }

                for (int i = q; i < n - 1; ++i){
                    if(nums[i]>nums[n-1]){
                        inc2 = false;
                        break;
                    }
                }

                if(inc2&& ince1&&dec){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){

    vector<int> nums = { };
    solution obj;

    bool result = obj.isTrionic(nums);
    cout << (result ? "ture" : "false") << endl;
    return 0;
}