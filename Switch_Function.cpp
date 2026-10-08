#include<iostream>
using namespace std;

// int ap(int n){
//     int ans = (3 * n + 7);

//     return ans;
// }

// int countSetBits(int n){
//     int count = 0;
//     while (n != 0)
//     {
//         int bit = n&1;
//         n = n>>1;
//         count += bit;
//     }

//     return count;
    
// }

void FibonaciSeries(int n){

    int a = 0;
    int b = 1;
    int nextNum;

    cout<<a<<" "<<b<<" ";

    for(int i = 2; i<=n;i++){

        nextNum = a + b;
        a = b;
        b = nextNum;

        cout<<nextNum<<" "<<endl;;

    }


}


int main(){
   int n;
   cin>>n;


   FibonaciSeries(n);



//    int finalSetBits = countSetBits(a) + countSetBits(b);

//    cout<<"Total number of set bits in A & B is :"<<finalSetBits<<endl;

//    int answer = ap(n);
//    cout<<"The Arithmetic Progression for "<<n<<" is  : "<<answer<<endl;


}