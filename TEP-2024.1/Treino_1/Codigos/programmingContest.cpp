#include <bits/stdc++.h>
using namespace std;

typedef int Item;
#define Key(A) (A)
#define less(A,B) (Key(A) < Key (B))
#define exch(A,B){Item T = A; A = B; B = T;}
#define cmpexch(A,B){if(less(B,A))exch(A,B)}
#define lessEq(A,B) (Key(A) <= Key (B))

int separa(Item *v, int l, int r){ 
    Item c = v[r];
    int j = l;
    for(int k = l; k < r; k++){
        if(lessEq(v[k],c)){
            exch(v[k],v[j]);
            j++;
        } 
    }
    exch(v[j],v[r]);
    return j;
}

void quickSortM3(Item *v, int l, int r){
    int j;
    if(r <= l){
        return;
    }
    cmpexch(v[(r+l)/2], v[r]);
    cmpexch(v[l], v[(r+l)/2]);
    cmpexch(v[r], v[(r+l)/2]);
    j = separa(v,l,r);
    quickSortM3(v,l,j-1);
    quickSortM3(v,j+1,r);
}

int main(){
    int n, maxMin, soma = 0;
    cin >> n >> maxMin;
    Item v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    quickSortM3(v, 0, n-1);
    for(int j = 0; j < n; j++){
        if(soma <= maxMin){
            soma = soma + v[j]; 
        }
        if(soma > maxMin){
            soma = soma - v[j];
            break;
        }
    }
    cout << soma << endl;
    return 0;
}