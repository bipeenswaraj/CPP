#include <iostream>
using namespace std;

void moveAllNeg(int*a, int n){
    int l=0, h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }else if(a[h]>1){
            h--;
        }else{
            swap(a[l],a[h]);
        }
    }
}
int main()
{
    int a[]={1,2,-3,7,-4};
    int n=sizeof(a)/sizeof(int);
    moveAllNeg(a,n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
