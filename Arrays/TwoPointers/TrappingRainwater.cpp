#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int left = 0, right = n-1;
    int maxLeft = height[left], maxRight=height[right], water = 0;
    while(left<right){
        if(maxLeft<maxRight){
            left++;
            maxLeft = max(maxLeft, height[left]);
            water+= maxLeft - height[left];
        }
        else{
            right--;
            maxRight = max(maxRight, height[right]);
            water+= maxRight - height[right];
        }
    }
    return water;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;

}