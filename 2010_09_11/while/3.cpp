// 3. Napisati program koji ucitava niz  znakova s tipkovnice i ispisuje ih na zaslon racunala. Prekid unosa oznacava unos slova k.
#include <iostream>
using namespace std;

int main(){
  short unsigned int c;
  while(c=getchar())
    if(c=='k')
      break;

  return 0;
}
