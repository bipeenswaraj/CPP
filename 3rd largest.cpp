// third largest element
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int thirdLargest(vector<int>arr){
    int large=INT_MIN;
    int second=INT_MIN;
    int third=INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>large){
            third = second;
            second = large; 
            large = arr[i];
            
        }else if(arr[i]>second && arr[i]<large){
            third=second;
            second = arr[i];
            }
            else if(arr[i]>third && arr[i]<second){
                third = arr[i];
            }
        }
    return third;
}
int main() {
vector<int>v{1,2,5,9,10,13,14,3,6};
int findThirdLargest = thirdLargest(v);
cout<<"The third largest element is "<<findThirdLargest;
    return 0;
}