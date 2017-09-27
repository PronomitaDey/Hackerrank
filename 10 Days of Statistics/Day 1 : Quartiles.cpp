#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int calmed(int arr[],int start,int end){
    int diff=end-start;
    if(diff%2==1)
        return arr[start+diff/2];
    else 
        return (arr[start+diff/2-1]+arr[start+diff/2])/2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int* a=new int[n];
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int median=a[n/2];
    int q1,q2,q3;
    if(n%2!=0){
        q2=a[n/2];
        q1=calmed(a,0,n/2);
        q3=calmed(a,n/2+1,n);
    }
    else
    {
        q2=(a[n/2-1]+a[n/2])/2;
        q1=calmed(a,0,n/2);
        q3=calmed(a,n/2,n);
         
    }
    cout<<q1<<endl<<q2<<endl<<q3<<endl;    
    delete a;
    a=NULL;
    return 0;
}
