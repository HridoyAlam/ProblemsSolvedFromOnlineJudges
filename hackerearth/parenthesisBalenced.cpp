#include<bits/stdc++.h>
using namespace std;

int top;
void check(char str[], int n, char stak[]){

    for(int i = 0; i < n; i++){
        if(str[i] == '('){
            top =top+1;
            stak[top] = '(';
           }
        if(str[i] == ')'){
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
            cout<<"String is balanced"<<endl;
        }
        else{
            cout<<"Stack is Unbalenced"<<endl;
        }
}

int main(){
    //balanced parenthesis string.
        char str[  ] = { 'c' , 'a' , '+', '(', 'b' , '-' , 'c' ,')' , ')'} ;

        // unbalanced string .
        char str1 [ ] = { '(' , '(' , 'a' , '+' , 'b' , ')' } ;

        char stak[15];
        int top = -1;

        check(str, 9, stak);

        top = -1;
        check(str,5, stak);
return 0;
}
