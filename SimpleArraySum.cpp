#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    int arr[size];
    int i;
    int sum=0;
    for(i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    
    
    
    
    return 0;
}
