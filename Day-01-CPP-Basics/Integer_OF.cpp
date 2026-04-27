#include<bits/stdc++.h>
using namespace std;

int compute(int x) {
   int result = 0;

  //computing the reverse
  while(x!=0){
    int digit = x%10;
    //perform pre-checks
    if(result > INT_MAX/10 || result == INT_MAX/10 && digit>7) return 0;
    if(result < INT_MIN/10 || result == INT_MIN/10 && digit<-8) return 0;
    //danger line
    result = result*10+digit;
    x = x/10;
  }

  return result;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int x;
   cin>>x;

   cout<<compute(x);
}
