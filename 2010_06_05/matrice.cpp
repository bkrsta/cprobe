#include <iostream>
using namespace std;
int main(int argc, const char *argv[]){
	
	int A[3][3];
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			A[i][j]=i*3+j;
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout <<(A[i][j])<<" ";
		}
		cout << endl;
	}

	return 0;
}
