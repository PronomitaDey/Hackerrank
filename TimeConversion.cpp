#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     char time[10];
    cin>>time;
    if(time[8]=='A')
    {
        if(time[0]=='1' && time[1]=='2')
        {
            time[0]='0';
            time[1]='0';
        }
        for(int i=0;i<8;i++)
            cout<<time[i];

        
    }
    else{
        if(time[0]=='0')
        {
            time[0]='1';
            time[1]+=2;
        }
        else if(time[0]=='1' && time[1]=='1')
        {
            time[0]+=1;
            time[1]+=2;
        }
        for(int i=0;i<8;i++)
            cout<<time[i];
    }
    
    
    
    return 0;
}
