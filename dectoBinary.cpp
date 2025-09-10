#include<iostream>
using namespace std;
int main(){
    int decNum;
    cout<<"Enter the a decimal number:";
    cin>>decNum;
    int pow= 1;
    int ans=0;
    while (decNum>0)
    {
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout<<"binary number of "<<decNum<<" is = "<<ans<<endl;
    return 0;
}