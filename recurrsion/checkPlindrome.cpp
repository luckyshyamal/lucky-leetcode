#include<iostream>
using namespace std;
bool f(int num,int *temp){
  if(num>=0 and num<=9){
    int lastTemp = (*temp)%10;
    (*temp)/=10;
    return (num==lastTemp);
  }
  bool result = (f(num/10,temp) and (num%10)==((*temp)%10));
  (*temp)/=10;
  return result;
}
int main(){
  int num = 12321;
  int original = num;
  int *temp = &original;
  cout<<f(num,temp);
  return 0;

}