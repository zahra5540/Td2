#include<iostream>
#include<cmath>
using namespace std;

template<class T>

T puis(T x){
    T P;
    P = pow(x , 2);
    return P;
} 

int main(){
    int n;
    float r;

cout<<"Vuillez entrer un nombre entier :";
cin>>n;
cout<<"Carre de l'entier : "<<puis(n)<<endl;

cout<<"Vuillez entrer un nombre reel: ";
cin>>r;
cout<<"Carre du nombre reel :"<<puis(r);










    return 0;
}