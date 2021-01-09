#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
while (b){
    a=a%b;
    swap(a,b);
}
return a;
}

int main(){
   int tst;
  freopen("input.txt","r",stdin);
   cin>>tst;
   getchar();
   while(tst--){

    string str;
    getline(cin,str);
    vector<int> list;

    istringstream ss(str);

    int num;

    while(ss >> num){
    list.push_back(num);
    }

    int m,max_gcd=0;
    vector<int>gc;

    for(int i=0;i<list.size();i++){
        m=gcd(list[i],list[i+1]);
        gc.push_back(m);
    }

  for(int i=0;i<=gc.size();i++){
    if(gc[i]>gc[i+1])
     max_gcd=gc[i];
  }
  cout<<max_gcd<<endl;
   }
    return 0;

}
