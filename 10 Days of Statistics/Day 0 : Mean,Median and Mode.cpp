#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
    //MEAN
    int n;
    cin>>n;
    int num[n];
    int i;
    double mean=0;
    for(i=0;i<n;i++){
        cin>>num[i];
        mean+=num[i];
    }
    cout<<mean/n<<endl;
    
    //MEDIAN
    double median;
    sort(num,num+n);
    if(n%2==0){
        median=num[n/2-1]+num[n/2];
        cout<<median/2<<endl;
    }
        else
        cout<<num[n/2]<<endl;
    
    
    //MODE
   
    int number=num[0];
     int mode=number;
    int countMode=1;
    int count;
    for(int i=1;i<n;i++)
      {
        if(num[i]==number) 
           ++count;
        else
           {
            if(count>countMode) 
               {
                   countMode = count; // mode is the biggest ocurrences
                   mode = number;
            }
           count = 1; // reset count for the new number
           number = num[i];
  }
}
    cout<<mode<<endl;

    return 0;
}


