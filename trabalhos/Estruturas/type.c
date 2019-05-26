#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int kills, assists, deaths;
	
} score;

score  *noob;


int main (){

noob = malloc (sizeof(score));
noob->kills = 3;
noob->assists = 20;
noob->deaths = 38;

printf("%d\n", noob->deaths);
getchar();

return(0);
}
