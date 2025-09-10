#include<iostream>
using namespace std;
int bin2dec(int binNum){
    int pow= 1;
    int ans=0;
    while (binNum>0)
    {
        int rem=binNum%10;
        binNum/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    int binNum;
    cout<<"Enter the a Binary number:";
    cin>>binNum;
    cout<<"Decimal number of "<<binNum<<" is = "<<bin2dec(binNum)<<endl;
    return 0;
}