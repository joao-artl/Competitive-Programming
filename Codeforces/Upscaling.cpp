#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tamanho;
        cin >> tamanho;
        int alt = 1, cont = 0;
        for(int lin = 0; lin <2*tamanho; lin++){
            if(cont > 1){
                if(alt == 0){
                        alt = 1;
                    }
                    else{
                        alt = 0;
                    }
                cont = 0;
            }
            for(int col = 0; col<2*tamanho;col++){
                if(col%2 == 0){
                    if(alt == 0){
                        alt = 1;
                    }
                    else{
                        alt = 0;
                    }
                }
                if(alt == 0){
                    cout << '#';
                }
                else{
                    cout << '.';
                }
            }
            cont++;
            cout << endl;
        }
    }
    return 0;
}