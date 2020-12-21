#include<bits/stdc++.h>
using namespace std;

typedef struct{
    double weight, price, ppw;
    }item;
void showVector(string VecName, vector<item>items){
    cout<< VecName << " : "<<endl;

    for(int i =0;i<(int)items.size();i++){
        printf("%d -> p: %0.3lf w:%0.3lf ppw:%0.3lf\n",i, items[i].price,items[i].weight,items[i].ppw);
    }
    cout<<endl;
}
bool cmp(item cA, item cB){
    if(cA.ppw == cB.ppw){
        return cA.weight > cA.weight;
    }
    return cA.ppw>cB.ppw;
}
double fractionalKnapsack(vector<item>itemLt, double remSpace){
    double totPriceAchieved = 0.0;

    sort(itemLt.begin(),itemLt.end(),cmp);
    showVector("After sorting the Vector",itemLt);

    for(int i=0; i< (int)itemLt.size(); i++){
        if(itemLt[i].weight <= remSpace){
            //we can take the whole thing or total amount
            totPriceAchieved += itemLt[i].price;
            remSpace -=itemLt[i].weight;
        }
        else{
                //you have less rem space than your current item space
            //totPriceAchieved +=itemLt[i].ppw * (remSpace/itemLt[i].weight);
            totPriceAchieved += (remSpace * itemLt[i].ppw);
            remSpace = 0.0;
            break;
        }
    }
    return totPriceAchieved;
}
int main(){
    int totItems;
    double totSpace, remSpace;
    item tempItem;
    while(scanf("%d %lf", &totItems, & totSpace)==2){
        vector<item>itemList;
        for(int i=0;i<totItems; i++){
            scanf("%lf %lf",&tempItem.price, &tempItem.weight);
            tempItem.ppw = tempItem.price / tempItem.weight;
            itemList.push_back(tempItem);
        }
        showVector("itemList after input",itemList);
        printf("Total price achieved: %0.3lf\n",fractionalKnapsack(itemList,totSpace));
    }

return 0;
}
/*
3 50
60 10
120 30
100 20

6 15
40 5
10 4
24 3
36 6
20 2
35 7

*/
