#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  while(b){
    a=a%b;
    swap(a,b);
  }
  return a;
}


/*{
  int test;
  cin>>test;
  while(test--){
    int arr[99];
    int ans;
    for(int){

    }
  }
}*/
int main(){
	int T,N,a[99],ans;
	string s;

	cin>>T;
	getline(cin,s);

	while(T--){
		getline(cin,s);
		istringstream is(s);
		N = 0;

		while(is>>a[N]) ++N;

		ans = 0;

		for(int i = 0;i<N;++i)
			for(int j = i+1;j<N;++j)
				ans = max(ans,gcd(a[i],a[j]));

		cout<<ans<<endl;
	}

	return 0;
}
