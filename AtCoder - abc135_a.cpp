#include<bits/stdc++.h>
using namespace std;
int swap_number(int n, int m){
 int temp =0;
 //int n = n, m;
 temp = n;
 n = m;
 m = temp;
 return (n,m);

}

    int main(){
    int a,b;
    cin>>a>>b;
    int flag = 0, cnt =0;
    if(b>a){
            while(b != 0){
            a = a+1;
            b = b-1;
            cnt++;
                if(a == b){
                    cout<<a<<endl;
                    flag = 1;
                    break;
                }
                else{
                    continue;
                }
        }
    }
    else{
        swap(a,b);
        while(b != 0){
        a = a+1;
        b = b-1;
        cnt++;
            if(a == b){
                cout<<a<<endl;
                flag = 1;
                break;
            }
            else{
                continue;
            }
    }
    }
    if(flag ==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
