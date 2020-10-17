#include<bits/stdc++.h>
using namespace std;

int top = -1;

void push(int stak[], int x, int n){
    if(top == n-1){
        cout<<"Stack is full"<<endl;
    }
    else{
        top = top+1;
        stak[top] = x;
    }

}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }

}

void pop(){
if(isEmpty()){
    cout<<"stack is already empty"<<endl;
}
else{
    top =top-1;
}

}

int size(){

    return top+1;
}
int topELement(int stak[]){

    return stak[top];
}

int main(){

    int stak[3];

    push(stak, 5, 3);
    push(stak, 10, 3);
    push(stak, 24, 3);
    push(stak, 30, 3);

    cout<<"Current size of the stack is: "<<size()<<endl;

    cout<<topELement(stak)<<endl;
    pop();
    cout<<"Current size of the stack is: "<<size()<<endl;
    return 0;

}
