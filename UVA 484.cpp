#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
map<int, int>frequency;
int main(){

    int n;

    while(scanf("%d",&n) !=EOF){
        if(frequency.count(n) == 0){
            frequency[n] = 1;
            arr.push_back(n);
        }
        else{
            frequency[n] = frequency[n]+1;
        }
    }

    for(int i=0; i< (int)arr.size(); i++){
        cout<<arr[i]<< " "<<frequency[arr[i]]<<endl;
    }

return 0;
}
