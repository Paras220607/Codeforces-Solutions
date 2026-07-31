#include<iostream>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    if(n%2!=0){
      cout<<"0\n";
    }
    else{
     cout<<(n/4)+1<<endl;
    }
  }
 
    return 0;
}