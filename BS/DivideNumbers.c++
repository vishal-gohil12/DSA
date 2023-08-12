#include<iostream>
#include<vector>
using namespace std;

int divideNumber(int n1, int n2) {
    int s=0,e=n1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e) {
        if(mid*n2 == n1) {
            ans = mid;
            return ans;
        }
        else if(mid*n2 > n1) {
            e = mid-1;
        }
        else {
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;

}

int main(){
    int num1 = 7, num2 = -3;
    int ans = divideNumber(num1,num2);
    cout << ans ;
    return 0;
}