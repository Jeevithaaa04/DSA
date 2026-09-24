#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,temp;

        for(int i=0;i<nums.size();i++) {
        
            if(nums[i]!=0) {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;

            }
        }

        
    }
};

int main(void) {
    int n,element;

    vector<int> nums;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++) {

        cin>>element;
        nums.push_back(element);
    }
    Solution x;
    x.moveZeroes(nums);

    for(int i=0;i<n;i++) {
        cout<<nums[i]<<endl;
    }
    return 0;
}