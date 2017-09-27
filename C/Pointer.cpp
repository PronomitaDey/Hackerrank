#include <iostream>
#include <cmath>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    int p; p=*a;
    *a=*a+*b;
    *b=abs(p-*b);
  

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b<<endl;

    return 0;
}
