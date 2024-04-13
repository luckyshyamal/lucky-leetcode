#include<iostream>
using namespace std;
class solution{
  public:
    bool isPalindrome(int x){
      int rem,rev=0,original_num;
      original_num=x;
      while(original_num!=0){
        rem=original_num%10;
        rev=rev*10+rem;
        original_num/=10;
      }
      if(rev==x){
        cout<<"true";
      }
      else{
        cout<<"false";
      }
    }
};
int main(){
  int num;
  cout<<"enter a  number: ";
  cin>>num;
  solution s1;
  s1.isPalindrome(num);
}