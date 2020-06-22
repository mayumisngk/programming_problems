#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, cur, valor;
    stack <int> pilha;
    stack <int> aux;

    cin >> qtd;

    while (qtd--){
        cin >> cur;

        if (cur == 1){
            cin >> valor;
            pilha.push(valor);
            if (aux.empty() || (aux.top() < valor)){
                aux.push(valor);
            }
            else if(aux.top() >= valor){
                aux.push(aux.top());
            }
        }
        else if(cur == 2){
            if(!pilha.empty()){
                pilha.pop();
                aux.pop();
            }
        }
        else{
            cout << aux.top() << endl;
        }
    }
}
