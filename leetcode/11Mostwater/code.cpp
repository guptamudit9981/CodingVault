
//  BRUTE FORCE APPROACH FOR THE PROBLEM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAmountOfWater(vector<int> & height){
    int size = height.size();
    int maxa =0;
    int area = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            area = (j-i)*min(height[i] , height[j]);
            maxa = max(maxa , area);
        }
    }
    for(int x : height){
        cout<<x<<" ";
    }
    cout<<endl;
    return maxa;
}
int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7,5,4,6,4,9,7,10,6,3,4,2,1};
    cout<<maxAmountOfWater(height);   
}