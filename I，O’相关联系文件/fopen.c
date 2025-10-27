#include <stdio.h>
//
// Created by 王羿秋 on 25-10-23.
//
int main(int argc, char *argv[]) {
char *filename = "io.txt";
    FILE *ioFile = fopen(filename,"a");
    if (ioFile == NULL) {
        printf("Error opening file\n");
    }else {
        printf("File opened\n");
    }
     /*
     FILE *fopen(const char *__filename, const char *__mode）
     */




}
