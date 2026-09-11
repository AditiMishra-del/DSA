//palindrome
#include <bits/stdc++.h>
using namespace std;
bool reverse(int n){
    int dup=n;
    int cnt =0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        cnt=(cnt*10)+lastdigit;
        }
    if(dup==cnt) return true;
    else return false;
}

int main() {
   int cnt,n;
   cin>>n;
   cout<<reverse(n);
 
}