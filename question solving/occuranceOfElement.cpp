
//? to find the last occurance of the element x given by the user  in an array


#include<iostream>
using namespace std;
#include<vector>
int main(){
  vector <int> v;
  int n;
  cout<<"enter number of element to enter: ";
  cin>>n;
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  for(int ele:v){
    cout<<ele<<" ";
  }
  cout<<endl;
  int x,last=-1;
  cout<<"enter element to find: ";
  cin>>x;

  for(int i=0;i<v.size();i++){
    if(x==v[i]){
      last=i;
    }
  }
  cout<<last;
}