#include <stdio.h>
#include "apue.h"

void do_sigint(int signal) 
{
    printf("signal = %d\n", signal);
    return;
}

int main(){
    signal(SIGINT, do_sigint);

    while(1) {
        sleep(1);
    }

    return 0;
}

