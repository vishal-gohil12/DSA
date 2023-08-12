#include<iostream>
#include<vector>
using namespace std;

int searchInArray(vector<int>arr, int target) {
    int s=0, e=arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e) {
        if(arr[mid]==target)
            return mid;
        else if (arr[mid] > target) 
            e = mid - 1;
        else 
            s = mid + 1;
        mid = s+(e-s)/2;
    }

    return -1;
}

int main() {
    vector<int>arr = {1,2,3,4,5};
    int ans = searchInArray(arr,2);
    cout << ans;

    return 0;
}