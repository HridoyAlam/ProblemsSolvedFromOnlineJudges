#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int last_digit = num % 10;
        int first_digit = num;

        while(first_digit >= 10){
            first_digit = first_digit / 10;
        }
        cout<<(first_digit + last_digit)<<endl;
    }


return 0;
}
