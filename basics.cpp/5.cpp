// divisors
#include <bits/stdc++.h>
using namespace std;
void divisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int main() {
   int cnt,n;
   cin>>n;
   divisor(n);
 
}
/* for(int i=1;i<=sqrt(n);i++){
if(n%i==0)
print i;
if(n/i!=1)
cout n/i;}
another way of doing it having less time complexity*/