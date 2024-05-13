#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void a(char **a){
    printf("%s",*a);
    }
int main(){
    char *dd[] = {"wow","mom"};
    a(&dd[0]);
    char o[]="wow";
    /*char * a;
    a = "lol";
    printf("%s",a);*/


    return 0;
    }
