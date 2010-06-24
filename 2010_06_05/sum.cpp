#include <iostream>
using namespace std;
int sum(int);

int main(int argc, const char *argv[]){
	int x; cin >> x;
	cout << sum(x) << endl;
	return 0;
}

int sum(int a){
	if(a==1) return 1;
	return a+sum(a-1);
}

