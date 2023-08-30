#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        string str;
        cin>>str;

        char d='N';

        for(int i=0; i<n; i++){
            if(str[i]=='D'){ //right
                if(d=='N'){ //North
                    d='L';
                }
                else if(d=='L'){ //East
                    d='S';
                }
                else if(d=='S'){ //South
                    d='O';
                }
                else if(d=='O'){ //West
                    d='N';
                }
            }
            if(str[i]=='E'){ //left
                if(d=='N'){ //North
                    d='O';
                }
                else if(d=='L'){ //East
                    d='N';
                }
                else if(d=='S'){ //South
                    d='L';
                }
                else if(d=='O'){ //West
                    d='S';
                }
            }   
        }
        cout<<d <<endl;
        cin>>n;
    }
    return 0;
}