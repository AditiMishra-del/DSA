//reverse
#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int cnt =0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        cnt=(cnt*10)+lastdigit;
        }
    return cnt;
}

int main() {
   int cnt,n;
   cin>>n;
   cout<<reverse(n);
 
}
