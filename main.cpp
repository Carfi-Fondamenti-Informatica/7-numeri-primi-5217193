#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int n=0;
  cin>>n;
  if (numerip(n, n-1)){
    cout<<"numero primo"<<endl;
  }else{
    cout << "numero non primo" <<endl;
    }
  return 0;
}
