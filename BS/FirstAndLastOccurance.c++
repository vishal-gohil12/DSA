#include<iostream>
#include<vector>
using namespace std;

vector<int> firstAndLastOccuracne(vector<int>nums, int target) {
    vector<int> ans={-1,-1};
    int s = 0, e = nums.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e) {
        
        if(nums[mid]==target) {
            ans[0]=mid;
            e = mid-1;
        }
        else if(nums[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
            mid = s + (e-s)/2;
    }

    s = 0, e = nums.size()-1;
    while(s<=e) {
        int mid = s + (e-s)/2;
        if(nums[mid]==target) {
            ans[1]=mid;
            s = mid+1;
        }
        else if(nums[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }

    }
    return ans;
}

int main() {
    vector<int>arr = {1,2,3,4,4,4,4,5};
    vector<int>ans;
    ans = firstAndLastOccuracne(arr,4);

    cout << "First Occurance of Array : " << ans[0] << endl;
    cout << "Last Occurance of Array : " << ans[1] << endl;

    return 0;
}