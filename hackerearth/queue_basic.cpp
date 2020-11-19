#include<bits/stdc++.h>
using namespace std;

void enQUEUE(char QUEUE[], char element, int& rear, int array_size){
    if(rear == array_size){
        cout<<"QUEUE is Fill"<<endl;
    }
    else{
        QUEUE[rear] = element;
        rear++;
    }
}

void deQUEUE(char QUEUE[], int& frnt, int rear){
    if(frnt == rear){
        cout<<"QUEUE is empty"<<endl;
    }
    else
    {
        QUEUE[frnt] = 0; //delete the frnt
        frnt++;
    }

}

int FRONT(char QUEUE[], int frnt){
    return QUEUE[frnt];
}

int SIZE(int frnt, int rear){
    return (rear - frnt);
}

bool isEmpty(int frnt, int rear){
    return (frnt == rear);
}

int main(){

    char QUEUE[20] = {'a','b','c','d'};
    int frnt = 0;
    int rear = 4;
    int arraySize = 20;
    int N = 3; //number of steps
    char ch;

    for(int i=0;i< N;i++){
        ch = FRONT(QUEUE, frnt);
        enQUEUE(QUEUE, ch,rear,arraySize);
        deQUEUE(QUEUE,frnt,rear);
    }
    for(int i= frnt;i<rear;++i){
        cout<<QUEUE[i];
    }
    cout<<endl;
    return 0;

}
