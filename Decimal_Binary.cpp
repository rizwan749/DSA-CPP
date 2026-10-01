#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	
	int ans = 0,i=0;
	// while(n != 0){
	// 	int bit = n&1;
	// 	n = n>>1;
	// 	ans = (bit * pow(10,i) + ans);
	// 	i++;
	// }

	while(n != 0){
		int digit = n % 10;
		n = n / 10;
		ans = (digit * pow(2,i) + ans );
		i++;
	}
	
	cout<<ans<<endl;



}