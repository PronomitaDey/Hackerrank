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
    int num,count=0,top=0;
    for(int i=0;i<n;i++){
          cin>>num;
         if(top==num)
              count++; 
         else if(num>top){
              top=num;
             count=1;
         }
              
    }
    cout<<count<<endl;
    return 0;
}
