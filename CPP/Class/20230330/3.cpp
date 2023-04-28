#include <iostream>
using namespace std;

int main(){
    int day=1;
    int chunksize = 100000 * 100;
    long long rich=0,someone=0;
    long long richPaid=0,someonePaid=0;
    int offset=1;
    for (day; day<=30;day++){
       rich+=chunksize;
       someonePaid+=chunksize;
       someone-=chunksize;

       richPaid+=offset;
       rich-=offset;
       someone+=offset;

       offset*=2;
    }
    cout<<"booo"<<endl;

}