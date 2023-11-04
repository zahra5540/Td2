#include<iostream>>
#include<set>
using namespace std;

bool recherche(const set<int>& monSet , int x){
    auto it = monSet.find(x);
    return it != monSet.end();
}

int main(){
int i , nbRecherche;
set<int> monSet;

for(i=1 ; i<=100 ; i++){
    monSet.insert(i);
}

cout<<"Donner un nombre :";
cin>>nbRecherche;

if(recherche(monSet , nbRecherche)){
    cout<<"ce nombre est existe dans le set."<<endl;
    }else{
        cout<<"ce nombre n'existe pas dans le set."<<endl;
    }


    return 0;
}

