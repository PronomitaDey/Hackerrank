#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i,j;
    int arr[n][n];
    int lsum=0,rsum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          cin>>arr[i][j];   
           if( i==j )
               lsum+=arr[i][j];
           if(i+j==n-1)
               rsum+=arr[i][j];
        }
    }
    int diff;
    diff=abs(lsum-rsum);
    cout<<diff<<endl;
    return 0;
}
