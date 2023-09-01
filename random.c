#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
    int characters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char randchar=characters[rand()%(sizeof characters/sizeof *characters)];
    printf("%c ", randchar);
    return randchar;

}