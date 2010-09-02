/**
* ispisuje poziciju slova u abecedi
* usage: koje_slovo [slovo1] [slovo2] ...
**/

#include <stdio.h>
int main(int argc, char const *argv[]){
	int i=1;
	for(;i<argc; ++i)
		if (argv[i][1] == '\0'){
			char t=(tolower(argv[i][0])-'a'+1);
			if (t>0 && t<='z')
				printf("%s = %d\n", argv[i], t);
		}

	return 0;
}
