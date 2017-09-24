#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,i;
    cin>>size;
    long int arr,sum=0;
    for(i=0;i<size;i++){
        cin>>arr;
        sum+=arr;
    }
    cout<<sum<<endl;
    return 0;
}
