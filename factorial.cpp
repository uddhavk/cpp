#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for (int i=1; i<=n; i++){
        fact = fact * i;
    }
        return fact;
}

int main(){
     cout<<factorial(1)<<endl;
     cout<<factorial(2)<<endl;
     cout<<factorial(3)<<endl;
     cout<<factorial(4)<<endl;
     cout<<factorial(5)<<endl;
     cout<<factorial(6)<<endl;
     return 0;
}