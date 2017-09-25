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
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"#";
        cout<<endl;
    }
    
    return 0;
}
