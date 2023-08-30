//Wrong
#include<bits/stdc++.h>
using namespace std;

void fun(int n, int l, int c){
    cin.ignore();
    string s;
    getline(cin, s);
    int pos=0, count=0, lines=0, ans=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ')
            pos=i;
        else if(count<c)
            count++;
        else{
            count=0;
            lines++;
            i=pos;
        }
    }
    if(count>0) lines++;
    ans = lines/l;
    if(lines%l != 0) ans++;
    cout<<ans <<endl;
}

int main(){
    int n, l, c;
    while(cin>>n >>l >>c)
        fun(n,l,c);
    return 0;
}