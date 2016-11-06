#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int a,b;T--&&cin>>a>>b;)
	{
		int c=(int)round(sqrt(b-a));
		cout<<2*c-(c&&c*c>=b-a)<<endl;
	}
	return 0;
}
