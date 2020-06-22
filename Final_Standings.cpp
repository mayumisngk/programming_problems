#include<bits/stdc++.h>
using namespace std;
// se for true, não troca - se for false, troca
// SOLUÇÃO 02 - sort
struct team{
    int id;
    int problems;
    int order;
};

bool sortTeams (team a, team b){
    if (a.problems != b.problems){
        return a.problems > b.problems;
    }
    else{
        return a.order < b.order;
    }
}

int main (){
    int q;

    cin >> q;

    team ranking[q];

    for (int i = 0; i < q; i++){
        cin >> ranking[i].id >> ranking[i].problems;
        ranking[i].order = i;
    }

    sort(ranking, ranking + q, sortTeams);

    for (int j = 0; j < q; j++){
        cout << ranking[j].id << " " << ranking[j].problems << endl;
    }

}


// SOLUÇÃO 01 - stable_sort
//struct team{
//    int id;
//    int problems;
//};
//
//bool sortTeams (team a, team b){
//    return a.problems > b.problems;
//}
//
//int main (){
//    int q;
//
//    cin >> q;
//
//    team ranking[q];
//
//    for (int i = 0; i < q; i++){
//        cin >> ranking[i].id >> ranking[i].problems;
//    }
//
//    stable_sort(ranking, ranking + q, sortTeams);
//
//    for (int j = 0; j < q; j++){
//        cout << ranking[j].id << " " << ranking[j].problems << endl;
//    }
//
//}
