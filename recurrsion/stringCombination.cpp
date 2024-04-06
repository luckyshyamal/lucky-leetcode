#include<iostream>
using namespace std;
#include<vector>
void f(string &str,int idx,string result,vector<string>&li,vector<string>&v){
  if(idx==str.size()){
    li.push_back(result);
    return;
  }
  int digit = str[idx] - '0';
  for(int i=0;i<v[digit].size();i++){
    f(str,i+1,result+v[digit][i],li,v);
  }
  return;
}

int main(){
  vector<string>v(10);
  v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  string s="23";
  vector<string>li;
  f(s,0,"",li,v);
  for(int i=0;i<li.size();i++){
    cout<<li[i]<<" ";
  }
  return 0;
}