#include<iostream>
#include<climits>
using namespace std;

// int getMax(int arr[][3],int row, int cols){
//     int maxi = INT_MIN;
//     for(int i =0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]>maxi){
//                 maxi = arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }
// int getMin(int arr[][3],int row, int cols){
//     int min = INT_MAX;
//     for(int i =0;i<row;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]<min){
//                 min = arr[i][j];
//             }
//         }
//     }
//     return min;
// }
void transpose(int arr[][3],int row, int cols){
    for(int i=0;i<row;i<cols){
        for(int j=0;j<cols;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void printArray(int arr[][3],int row, int cols){
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
     cout << "Matrix elements:\n";
    for(int i=0;i<3;i++){
       
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int row=3, cols=3;
//   cout<<"Max number:"<< getMax(arr,row,cols)<<endl;
//   cout<<"min number:"<< getMin(arr,row,cols)<<endl;
    
    cout<<"Print array"<<endl;
    printArray(arr, row,cols);

        return 0;   
}
