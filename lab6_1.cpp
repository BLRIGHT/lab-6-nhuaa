#include<iostream>
using namespace std;

int main(){

int N=1;
int i=0;
int odd=0;
int even=0; 

while(N!=0){
    cout << "Enter an integer: ";
    cin  >> N;
    if (N!=0){
    if(N%2==0){
        even+=1;
    }
    else{
        odd+=1;
    }
}
}

    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd <<"\n" ;
    
}