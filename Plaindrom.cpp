#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int x;
    cin>>x;

    int ans = 0;
    int temp = x;
    if( x < 0 ){
        return false;
    }

    while(x>0){
        int digit = x % 10;
        if (ans > INT_MAX / 10) {
                return false; 
            }
        ans = (ans * 10) + digit;
        x = x/10;

    }

    return ans == temp;
}