#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar();

char randchar(){

    return 'A' + (rand() % 26);
    
}
