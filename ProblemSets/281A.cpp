#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin>>a;
  if(a[0]>='a'&& a[0]<='z')
  {
    a[0]=a[0]-32;
    cout<<a;
  }
   else if (a[0]>='A'&& a[0]<='Z')
  {
    cout<<a;
  }
  else {
    return 0;
  }
}