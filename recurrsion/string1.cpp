#include<iostream>
using namespace std;

string f(string &s,int idx,int len){
  if(idx==len) return " ";
  string curr ="";
  curr+=s[idx];
  return ((s[idx]=='a') ? "" : curr) + f(s,idx+1,len);

}
int main(){
  string s="abcda";
  int n=5;
  cout<<f(s,0,n);
  return 0;

}