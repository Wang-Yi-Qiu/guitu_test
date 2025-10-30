//
// Created by 王羿秋 on 25-10-30.
//
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
    if (argc <2) {
        printf("Usage: hello_world!\n");
    }
    else {
        printf("%s进程号%d已经上了二楼\n",argv[1],getpid());
    }
}
