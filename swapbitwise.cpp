#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the numbers";
    cin>>n1>>n2;
    cout<<"before swap "<<"n1="<<n1<<"    n2="<<n2<<endl;
    n1=n1^n2;
    n2=n1^n2;
    n1=n1^n2;
    cout<<"after swap "<<"n1="<<n1<<"     n2="<<n2<<endl;
    return 0;
}
