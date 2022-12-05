#include"iostream"
using namespace std;
int main(){
 string strs[5]={
  "kfc","crazy","thursday","vivo","50"
 };
 string str,str2;
 bool flag = false;
 int i,j,k,t,l,m,n=0;
 int s[110]={0};
 cin>>t;
 for(i=0;i<t;i++){
  cin>>str;
  for(j=0;j<5;j++){
   flag = false;
   str2 = strs[j];
   for(k=0;k<str.length();k++){
    if(str[k]==str2[0] || str[k]==str2[0]-32){
     for(l=0;l<str2.length();k++,l++){
      if(!(str[k]==str2[l] || str[k]==str2[l]-32)){
       break;
      }
     }
     if(l == str2.length()){
      flag = true;
//      cout<<str<<"包含:"<<str2<<endl;
      break;
     }
    }
    if(flag){
     break;
    }
   }
   if(flag==false){
    s[i]=0;
    break;
   }
  }
  if(flag){
   s[i]=1;
  }
 }
 for(i=0;i<t;i++){
  if(s[i]==0){
   cout<<"No"<<endl;
  }else{
   cout<<"Yes"<<endl;
  }
 }
 return 0;
}