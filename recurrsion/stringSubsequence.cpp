#include<iostream>
using namespace std;
#include<vector>
#include<string>
void f(string &str,int idx,string result,vector<string>&li){
  if(idx==str.length()){
    li.push_back(result);
    return;
  }
  f(str,idx+1,result+str[idx],li);
  f(str,idx+1,result,li);
}

int main(){
  vector<string>li;
  string str = "abc";
  f(str,0,"",li);
  for(int i=0;i<li.size();i++){
    cout<<li[i]<<" ";
  }
  return 0;
}