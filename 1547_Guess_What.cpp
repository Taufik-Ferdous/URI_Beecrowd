#include<bits/stdc++.h>
using namespace std;
void fastio();

bool find(vector<int> &coll, int range, int b, int &store){
    for(int i=0; i<range; i++){
        if(coll[i]==b){
            store=i+1;
            return true;
        }
    }
    return false;
}

void ans(int a, int range, vector<int> &coll){
    int store=0;
    if(find(coll, range, a, store)) cout<<store <<endl;
    else{
        int dif = abs(a-coll[0]);
        store=1;
        for(int i=0; i<range; i++){
            if(abs(a-coll[i])<dif){
                dif=abs(a-coll[i]);
                store=i+1;
            }
        }
        cout<<store <<endl;
    }
}


void inp(vector<int> &coll, int a){
    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        coll.push_back(x);
    }
}

int main(){
    fastio();
    int n;
    cin>>n;
    while(n--){
        int group, num;
        cin>>group >>num;
        vector<int> coll;
        inp(coll, group);
        ans(num, group, coll);
    }
}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}