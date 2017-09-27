#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n],w[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int den=0;
    for(int i=0;i<n;i++)
    {cin>>w[i];den+=w[i];}
    double num=0;
    for(int i=0;i<n;i++)
    {
        num+=arr[i]*w[i];
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << num/den<<endl;
        return 0;
}
