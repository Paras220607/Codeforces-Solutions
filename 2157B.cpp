#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,x,y;
    cin>>n;
    cin>>x;
    cin>>y;
    string s;
    cin>>s;
    int x1=abs(x);
    int y1=abs(y);
    int x2=0,y2=0;
    sort(s.begin(), s.end(), greater<char>());
 
    for(int j=0;j<n;j++){
 
      if(s[j]=='4'){
        if(x2<x1){
          x2++;
        }
        else{
          y2++;
        }
      }
      else{
        x2++;
        y2++;
      }
    }
    if(x2>=x1 && y2>=y1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
    return 0;
}