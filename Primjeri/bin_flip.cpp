// int2bin(char)
// bit flip ...
#include <iostream>
#include <math.h>
#define N_ZNAM 4
using namespace std;

void dec2bin(long dec, char *binary){
  int  k=0, n=0, remain;
  char temp[80];
  do {
    remain = dec%2;
    dec    = dec/2;
    temp[k++]=remain+'0';
  } while(dec>0);
  while(k>=0) binary[n++] = temp[--k];
  binary[n-1]=0;
}

int main(){
  short unsigned int t, np=(int)pow(2, N_ZNAM)-1, n=np;
  char *b;
  dec2bin(n, b); cout<<b<<endl;
  for(;;){
    cin>>t;
    if(t>=0 || t<=np){
      if(n&t) n=(n^t);
      else n|=t;
      dec2bin(n, b);
      cout<<b<<endl;
    } else { cout<<"Err..."<<endl; }
  }

  return 0;
}

