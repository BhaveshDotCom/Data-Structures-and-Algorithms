#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int water = 0;
    for (int i = 0; i < n; i++) {
        int leftMaxHeight = 0, rightMaxHeight = 0;
        // left max height
        for (int j = 0; j < i; j++) {
            leftMaxHeight = max(leftMaxHeight, height[j]);
        }
        // right max height
        for (int j = i + 1; j < n; j++) {
            rightMaxHeight = max(rightMaxHeight, height[j]);
        }
        water += min(leftMaxHeight, rightMaxHeight) - height[i];
    }
    return water;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;
}