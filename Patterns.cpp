#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	// for(int i = 1; i<=n;i++){
	// 	for(int j=1;j<=i;j++){
	// 		cout<<i<<" ";
			
	// 	}
	// 	cout<<endl;
	// }
	// for(int i = 1; i<=n;i++){

	// 	for(int j=1;j<=n-i;j++){

	// 		cout<<" ";

	// 	}


	// 	for(int k = 1; k<=2*i-1;k++){

	// 		cout<<"*";

	// 	}

	// 	cout<<endl;

	// }

	// 	for(int i = n; i>=1;i--){
	// 		for(int j=1;j<=n-i;j++){
	// 			cout<<" ";
				
	// 		}
			
	// 		for(int k = 1; k<=2*i-1;k++){
	// 			cout<<"*";
	// 		}
	// 		cout<<endl;
	// }

	// for(int i=1; i<=2*n-1;i++){
	// 	int stars;
	// 	if(i<n){
	// 		stars = i;
	// 	}
	// 	else{
	// 		stars = 2*n-i;
	// 	}

	// 	for(int j =1;j<=stars;j++){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }

	for(int i=1;i<=n;i++){
		int start = 1;
		for(int j=1;j<=i;j++){
			if((i+j) % 2 == 0){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}		
		cout<<endl;
	}
	
}