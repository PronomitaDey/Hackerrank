#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long long int arr[5];
    long long int max=-9999,min=10000,sum=0;
    for(int i=0;i<5;i++){
           cin>>arr[i];
        
        if(arr[i]>max){
            max=arr[i];
          }
        
        if(arr[i]<min){
            min=arr[i];
         }
        
        sum+=arr[i];
    }
    long long int max_sum=0,min_sum=0;
    max_sum=sum-min;
    min_sum=sum-max;
    cout<<min_sum<<" "<<max_sum;
    return 0;
}
