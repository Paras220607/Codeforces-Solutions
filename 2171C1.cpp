#include<iostream>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++){ 
cin>>n;
int aj[n],ma[n],count=0,ans;
for(int j=0;j<n;j++){
  cin>>aj[j];
}
for(int k=0;k<n;k++){
  cin>>ma[k];
}
for(int a=0;a<n;a++){
  if(aj[a]!=ma[a]){
    count++;
    ans=a;
  }
  
}
if (count%2!=0){
  if((ans+1)%2==0){
    cout<<"Mai"<<endl;
  }
  else{
    cout<<"Ajisai"<<endl;
  }
}
else{
cout<<"Tie"<<endl;
 }
}
 
 
   return 0;
  }