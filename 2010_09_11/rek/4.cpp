// 4. Napisi rekurzivnu funkciju koja ce za dva prirodna broja izracunati njegovu najvecu zajednicku mjeru.
#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (b==0) return a;
	else return gcd(b, a%b);
}

int main(int argc, char const *argv[]){

  int a,b;
  cout<<"a: "; cin>>a;
  cout<<"b: "; cin>>b;
  cout<<gcd(a,b)<<endl;

  return 0;
}
