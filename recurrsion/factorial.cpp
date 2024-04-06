#include<iostream>
using namespace std;
#include<string>
int f(int n){
    if(n==1)return 1;
    return n*f(n-1);
}
int main(){
    int n;
    cout<<"enter n value: ";
    cin>>n;
    int result = f(n);
    cout<<result;
    return 0;
}