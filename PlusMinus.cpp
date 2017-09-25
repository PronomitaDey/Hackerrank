#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    int num,i;
    long double zero=0,pos=0,neg=0;
    
    for(i=0;i<size;i++){
        cin>>num;
        if(num==0)
            zero++;
        else if(num>0)
            pos++;
        else if(num<0)
            neg++;
        }
    std::cout << std::setprecision(6);
    std::cout<<pos/size<<endl;
    std::cout<<neg/size<<endl;
    std::cout<<zero/size<<endl;
    
    
    
    return 0;
}
