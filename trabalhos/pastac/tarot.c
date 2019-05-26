#include <stdio.h>
#include <stdlib.h>

/*void nomes (int i ){
	swtich case 

	case 1 

	i = 1

	case 2

	i = 2
}*/

int main (){
int v[3];
v[0] = 1 + rand()%22;
v[1] = 1 + rand()%22;
	if(v[1] = v[0]){
		do {
		v[1] = 1 + rand()%22;

        		}
		while (v[1] == v[0] );
	}
v[2] = 1 + rand()%22;
	if ( (v[2] == v[1] && v[2] == v[0]) || (v[2] == v[1]) || (v[0] == v[1]) ){


		do {
		v[2] = 1 + rand()%22;
		}
		while ( (v[1] == v[2] ) || (v[1] == v[2] && v[2] == v[0]) ||( v[0] == v[2]));
		}


printf("%d %d %d", v[0],v[1],v[2]);

return(0);
}
