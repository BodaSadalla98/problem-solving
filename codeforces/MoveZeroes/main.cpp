#include <iostream>
#include"bits/stdc++.h"
using namespace std;
void moveZeroes(vector<int>& nums) {
        int n  = nums.size();
        int last = n-1;
        for(int i=0;i<last;i++){
            if(nums[i] == 0){
                for(int j=i;j<last;j++)
                                nums[j] = nums[j+1];

                nums[last--] = 0;
                i--;
            }


        }

    }
int main()
{
  vector<int> v={0,0,1};
  moveZeroes(v);
  for(auto i : v)
        printf("%d ", i);
    return 0;
}
