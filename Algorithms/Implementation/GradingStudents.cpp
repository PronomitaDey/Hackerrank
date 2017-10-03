#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin>>n;
    int grade[n];
    for(i=0;i<n;i++){
        cin>>grade[i];
    }
    for(i=0;i<n;i++){
      if(grade[i]>=38){
          if(grade[i]%5>=3)
              grade[i]=(grade[i]/5+1)*5;
          }
    }
    for(i=0;i<n;i++)
        cout<<grade[i]<<endl;
    
    return 0;
}
