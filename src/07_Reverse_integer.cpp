#include<iostream>
#include<climits>
using namespace std;

int reverse(int n) {
    int rev=0,digit;
    while(n!=0) {
    
        digit=n%10;

    if(rev>INT_MAX || rev==INT_MAX/10 && digit>7) {
        return 0;
    }
    else if(rev<INT_MIN || rev==INT_MIN && digit<-8) {
        return 0;
    }

    rev=(rev*10) + digit;
    n=n/10;

    }
    return rev;
    
}
int main(void) {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<reverse(n);
return 0;
}