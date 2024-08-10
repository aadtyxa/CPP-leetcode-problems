#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cout<< " Enter any integer value you want to reverse : ";
    cin>>n;
    int ans = 0;
    while( n != 0){
        int digit  = n % 10;
        if ( (ans > INT_MAX) || (ans < INT_MIN)){
            cout<< " 0 ";
        }
        ans =( ans * 10 ) + digit;
        n = n/10;
    }
    cout<<" Reverse of the given Intger is : "<< ans;
}