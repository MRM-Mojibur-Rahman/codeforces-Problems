#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int limak , bob;
   cin >>limak>>bob;
   int ans=0;
   while (limak<=bob)
   {
      limak*=3;
      bob*=2;
      ans++;
   }
   cout <<ans;
   
    return 0;
}