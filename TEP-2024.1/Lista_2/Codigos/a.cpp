#include <bits/stdc++.h>
using namespace std;
using Ponto = pair<int,int>;

void mergeF(vector<pair<int, int>>& v, int l, int m, int r) {
    vector<pair<int, int>> v2(r - l + 1);
    int k = 0;
    int i = l;
    int j = m + 1;
    while (i <= m && j <= r) {
        if (v[i].first <= v[j].first) {
            v2[k++] = v[i++];
        } else {
            v2[k++] = v[j++];
        }
    }
    while (i <= m) {
        v2[k++] = v[i++];
    }
    while (j <= r) {
        v2[k++] = v[j++];
    }
    k = 0;
    for (i = l; i <= r; i++) {
        v[i] = v2[k++];
    }
}

void mergeSortF(vector<pair<int, int>>& v, int l, int r) {
    if(l >= r){
        return;
    }
    int m = l + (r - l) / 2; 
    mergeSortF(v, l, m); 
    mergeSortF(v, m + 1, r);
    mergeF(v, l, m, r);
}

void mergeS(vector<pair<int, int>>& v, int l, int m, int r) {
    vector<pair<int, int>> v2(r - l + 1);
    int k = 0;
    int i = l;
    int j = m + 1;
    while (i <= m && j <= r) {
        if (v[i].second <= v[j].second) {
            v2[k++] = v[i++];
        } else {
            v2[k++] = v[j++];
        }
    }
    while (i <= m) {
        v2[k++] = v[i++];
    }
    while (j <= r) {
        v2[k++] = v[j++];
    }
    k = 0;
    for (i = l; i <= r; i++) {
        v[i] = v2[k++];
    }
}

void mergeSortS(vector<pair<int, int>>& v, int l, int r) {
    if(l >= r){
        return;
    }
    int m = l + (r - l) / 2; 
    mergeSortS(v, l, m); 
    mergeSortS(v, m + 1, r);
    mergeS(v, l, m, r);
}

int main(){
    int n, x, y;
    cin >> n;
    vector<Ponto> vF, vS;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vF.emplace_back(x, y);
        vS.emplace_back(x, y);
    }
    mergeSortF(vF, 0, n-1);
    mergeSortS(vS, 0, n-1);
    
    for(int i = 0; i < n; i++){
        vF[]
    }
    return 0;
}