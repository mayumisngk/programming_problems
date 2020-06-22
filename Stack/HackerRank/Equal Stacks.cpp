#include <bits/stdc++.h>
using namespace std;


int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3){

    int sum_h1 = accumulate(h1.begin(), h1.end(), 0);
    int sum_h2 = accumulate(h2.begin(), h2.end(), 0);
    int sum_h3 = accumulate(h3.begin(), h3.end(), 0);

    int ans = 0;

    int idx_h1 = 0;
    int idx_h2 = 0;
    int idx_h3 = 0;

    while(!(sum_h1 == sum_h2 && sum_h2 == sum_h3)){

        if(sum_h1 > sum_h2 && sum_h1 > sum_h3 || sum_h1 == sum_h2 && sum_h1 > sum_h3 || sum_h1 == sum_h3 && sum_h1 > sum_h2){
           sum_h1 -= h1[idx_h1++];
        }
        if (sum_h2 > sum_h1 && sum_h2 > sum_h3 || sum_h2 == sum_h1 && sum_h2 > sum_h3 || sum_h2 == sum_h3 && sum_h2 > sum_h1){
           sum_h2 -= h2[idx_h2++];
        }
        if (sum_h3 > sum_h1 && sum_h3 > sum_h2 || sum_h3 == sum_h2 && sum_h3 > sum_h1 || sum_h3 == sum_h1 && sum_h3 > sum_h2){
           sum_h3 -= h3[idx_h3++];
        }
    }

    ans = sum_h1;

    return ans;

}

int main(){

    int h1, h2, h3, tmp;

    vector<int> s1 ;
    vector<int> s2 ;
    vector<int> s3 ;

    cin >> h1 >> h2 >> h3;

    for (int i = 0; i < h1; i++){
        cin >> tmp;
        s1.push_back(tmp);
    }

    for (int i = 0; i < h2; i++){
        cin >> tmp;
        s2.push_back(tmp);
    }

    for (int i = 0; i < h3; i++){
        cin >> tmp;
        s3.push_back(tmp);
    }

    cout << equalStacks(s1, s2, s3) << endl;

}
