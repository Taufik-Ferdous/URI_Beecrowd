#include<bits/stdc++.h>
using namespace std;
int main(){
    double a[3];
    while(cin>>a[0] >>a[1] >>a[2]){
        
        sort(a, a+3);
        
        double pi=3.1415926535897;
        
        double s=((a[0]+a[1]+a[2])/2);

        double tri=(sqrt(s*((s-a[0])*(s-a[1])*(s-a[2]))));

        double r=tri/s;
        
        double scir=pi*r*r;
        
        double br=(a[0]*a[1]*a[2])/(4*tri);

        double cir=(pi*br*br)-tri;

        tri=tri-scir;

        cout<<fixed <<setprecision(4) <<cir <<' ' <<tri <<' ' <<scir <<endl;
    }
    return 0;
}