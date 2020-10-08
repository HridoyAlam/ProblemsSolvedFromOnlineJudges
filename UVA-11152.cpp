#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main(){
    double a,b,c;
    //

    while(cin>>a>>b>>c){

    //semi_perimeter_of_right_triangle s
    double s = (a+ b+ c)/2;

    //double area_of_rigth_trangle
    double art = sqrt(s * (s-a) * (s-b) * (s-c) );


    double r = art/ s;

    double blue = PI * r * r;
    double violets = art - blue;
    double radius = (a*b*c)/(4*art) ;
    double sunflower = (PI * radius * radius) - art;





    printf("%.4f %.4f %.4f\n",sunflower,violets,blue);

    /*cout<<fixed<<setprecision(4)<<sunflower<<" ";
    cout<<fixed<<setprecision(4)<<violets<<" ";
    cout<<fixed<<setprecision(4)<<blue<<" "<<endl;
    */

    }

 return 0;
}
