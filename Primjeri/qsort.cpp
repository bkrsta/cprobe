#include <iostream>

int c(const void *aa, const void *bb){
	int* a=(int*)aa; int* b=(int*)bb;
  return (*a==*b)?0:(*a < *b)?-1:1;
}

int main(int argc, char* argv[]){
  int i, numbers[10]={5,7,8,1,3,4,2,6,9,0};

  qsort(numbers, 10, sizeof(int), c);
	qsort(numbers, 10, sizeof(int), c);
  for (i=0;i<9;i++)
    printf("Number = %d\n",numbers[i]);
  return 0;
}
