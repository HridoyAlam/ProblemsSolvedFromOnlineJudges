#include<bits/stdc++.h>
using namespace std;
int top;

void check(char str[], int n, char stak[]){

    for(int i=0; i< n ; i++){

        if(str[i] =='1'){
            top +=1;
            stak[top] = '1';
        }
        if(str[i] == '0'){
            if(top == -1){
                top -=1;
                break;
            }
            else{
                top -=1;
            }
        }
    }
    if(top == -1){
        cout<<"KHALI"<<endl;
    }


}

int main(){

int t;
cin>> t;

while(t--){
    string st;
    cin>>st;
    char stak[100000];
    int l =st.size();
    top = -1;

    //string to char

    char char_array[l+1];
    strcpy(char_array, st.c_str());



    check(char_array,l,stak);


}

return 0;
}
