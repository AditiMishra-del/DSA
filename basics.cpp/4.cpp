//armstrong
#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int sum=0;
    int dup=n;
    int cnt =0;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
        cnt=(cnt*10)+ld;
        }
    if(dup==cnt) return true;
    else return false;
}

int main() {
   int cnt,n;
   cin>>n;
   cout<<armstrong(n);
 
}
