#include<bits/stdc++.h>
using namespace std;
bool is_even(int n){
  if(n ^ 1 == n+1)
    return True;
  else 
    return False;
}
int main(){
  int n;
  cin>>n;
  if(is_even(n) == True){
    cout<<"This is even Number"<<endl;
  }
  if(is_even(n) == False){
    cout<<"This is Odd Number"<<endl;
  }
  return 0;
}


def check_even(n):
  if(n ^ 1 == n + 1):
    return True
  else:
    return False
    
if __name__ == "__main__":
  n  = input()
  print("Even Number") if check_even(n) else print( "Odd Number");
