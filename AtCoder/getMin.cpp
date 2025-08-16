#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> vetor;
    int op, num;
    while(q){
        cin >> op;
        if (op == 1){
            cin >> num;
            vetor.push_back(num);
            push_heap(vetor.begin(), vetor.end(), greater<int>());
        }
        else{
            cout << vetor.front() << endl;
            pop_heap(vetor.begin(), vetor.end(), greater<int>());
            vetor.pop_back();
        }
        q--;
    }
    return 0;
}