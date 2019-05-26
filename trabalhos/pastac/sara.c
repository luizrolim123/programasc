#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char first[20];
    char last[20];
}name;

  name sara;

int main() {
    
//    sara.first = "Sara";
  //  sara.last = "Black";
  //
    scanf("%s",&*sara.first);
    scanf("%s",&*sara.last);

    printf("struct direct: %s\n",sara.first);

    printf("struct deref: %s %s\n", sara.first, sara.last);
return(0);

}
