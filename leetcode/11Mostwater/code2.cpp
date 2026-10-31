
//  BY USING THE TWO POINTERS APPROACH

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAmountOfWater(vector<int> & height){
    int size = height.size();
    int start = 0;
    int end = size-1;
    int areaM = 0;
    int area =0;

    while(start<end){
        area = (end -start)*min(height[end] , height[start]);
        areaM = max(area , areaM);
        if(height[end] >= height[start]){
            start++;
        }else{
            end--;
        }
    }
    return areaM;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7 , 9, 10,5,3,2,7,10,12,7,3,8,1};

    cout<<maxAmountOfWater(height);   
}