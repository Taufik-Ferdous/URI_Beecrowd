#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin, line)){
        int i=0, len=line.length();
        int count=0;

        for(i=0; i<len; i++){

            if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'){
                if(count%2==0){
                    if( line[i]=='a'){line[i]='A';}
                    else if( line[i]=='b'){line[i]='B';}
                    else if( line[i]=='c'){line[i]='C';}
                    else if( line[i]=='d'){line[i]='D';}
                    else if( line[i]=='e'){line[i]='E';}
                    else if( line[i]=='f'){line[i]='F';}
                    else if( line[i]=='g'){line[i]='G';}
                    else if( line[i]=='h'){line[i]='H';}
                    else if( line[i]=='i'){line[i]='I';}
                    else if( line[i]=='j'){line[i]='J';}
                    else if( line[i]=='k'){line[i]='K';}
                    else if( line[i]=='l'){line[i]='L';}
                    else if( line[i]=='m'){line[i]='M';}
                    else if( line[i]=='n'){line[i]='N';}
                    else if( line[i]=='o'){line[i]='O';}
                    else if( line[i]=='p'){line[i]='P';}
                    else if( line[i]=='q'){line[i]='Q';}
                    else if( line[i]=='r'){line[i]='R';}
                    else if( line[i]=='s'){line[i]='S';}
                    else if( line[i]=='t'){line[i]='T';}
                    else if( line[i]=='u'){line[i]='U';}
                    else if( line[i]=='v'){line[i]='V';}
                    else if( line[i]=='w'){line[i]='W';}
                    else if( line[i]=='x'){line[i]='X';}
                    else if( line[i]=='y'){line[i]='Y';}
                    else if( line[i]=='z'){line[i]='Z';}
                    count++;
                    
                }
                else{
                    if( line[i]=='A'){line[i]='a';}
                    else if( line[i]=='B'){line[i]='b';}
                    else if( line[i]=='C'){line[i]='c';}
                    else if( line[i]=='D'){line[i]='d';}
                    else if( line[i]=='E'){line[i]='e';}
                    else if( line[i]=='F'){line[i]='f';}
                    else if( line[i]=='G'){line[i]='g';}
                    else if( line[i]=='H'){line[i]='h';}
                    else if( line[i]=='I'){line[i]='i';}
                    else if( line[i]=='J'){line[i]='j';}
                    else if( line[i]=='K'){line[i]='k';}
                    else if( line[i]=='L'){line[i]='l';}
                    else if( line[i]=='M'){line[i]='m';}
                    else if( line[i]=='N'){line[i]='n';}
                    else if( line[i]=='O'){line[i]='o';}
                    else if( line[i]=='P'){line[i]='p';}
                    else if( line[i]=='Q'){line[i]='q';}
                    else if( line[i]=='R'){line[i]='r';}
                    else if( line[i]=='S'){line[i]='s';}
                    else if( line[i]=='T'){line[i]='t';}
                    else if( line[i]=='U'){line[i]='u';}
                    else if( line[i]=='V'){line[i]='v';}
                    else if( line[i]=='W'){line[i]='w';}
                    else if( line[i]=='X'){line[i]='x';}
                    else if( line[i]=='Y'){line[i]='y';}
                    else if( line[i]=='Z'){line[i]='z';}
                    count++;
                }
            }

            cout<<line[i];
        }
        cout<<endl;
    }
    return 0;
}