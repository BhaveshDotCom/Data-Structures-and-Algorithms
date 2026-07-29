#include <bits/stdc++.h>
using namespace std;

// Brute - nested loop

int maxArea(vector<int>& height) {
    int n=height.size();
    int left = 0, right = n-1;
    int high=0, width=0, maxArea=0;
    while(left<right){
        high = min(height[left],height[right]);
        width = right-left;
        maxArea = max(maxArea, high*width);
        if(height[left] < height[right]){
            left++;
        }
        else {
            right--;
        }
    }
    return maxArea;
}
