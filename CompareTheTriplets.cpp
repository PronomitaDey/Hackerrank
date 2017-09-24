#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[3],b[3],a_p=0,b_p=0,i;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    for(i=0;i<3;i++){
       if(a[i]>b[i])
           a_p++;
       else if(a[i]<b[i])
           b_p++;
    }
    cout<<a_p<<" "<<b_p;
    
    return 0;
}
