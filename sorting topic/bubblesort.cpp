#include<iostream>
using namespace std;
#include<vector>
void f(vector<int>&v){
  int flag;
  for(int i=0;i<v.size()-1;i++){
    flag=0;
    for(int j=0;j<v.size()-i-1;j++){
      if(v[j]>v[j+1]){
        flag=1;
        swap(v[j],v[j+1]);
      }
    }
    if(flag==0)break;
  }
}
int main(){
  vector<int>v;
  int n;
  cout<<"enter array size: ";
  cin>>n;
  cout<<"enter array elements: ";
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  f(v);

  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  return 0;
}