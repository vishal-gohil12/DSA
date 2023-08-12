#include<iostream>
#include<vector>
using namespace std;

int findElement(vector<int>v, int key){
        int s = 0, e = v.size(); 
        int mid = (s+e)/2;

        while (s<=e) {
                if(v[mid] == key) 
                        return mid;
                else if (mid-1>=0 && v[mid-1] == key)
                        return mid-1;
                else if (v[mid+1] == key && mid+1<=v.size())
                        return mid+1;

                if(v[mid] < key) {
                        s = mid+2;
                }
                else {
                        e = mid-2;
                }

                mid = (s+e)/2;
        }

        return -1;
        
}

int main() {
        vector<int>v={10,3,40,20,50,80,70};
        int key = 70;
        int ans = findElement(v,key);
        cout << "index of " << key << " is " << ans;

        return 0; 
}
