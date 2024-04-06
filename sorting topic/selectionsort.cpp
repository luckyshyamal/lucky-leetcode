#include<iostream>
using  namespace std;
#include<vector>
void f(vector<int>&v){
  for(int i=0;i<v.size()-1;i++){
    int min = i;
    for(int j=i+1;j<v.size();j++){
      if(v[j]<v[min]){
        min = j;
      }
    }
    if(min!=i){
      swap(v[i],v[min]);
    }
  }
}
int main(){
  vector<int>v;
  int n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter array element: ";
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
}