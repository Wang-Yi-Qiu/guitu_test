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
     FILE * 成功返回0 ，失败返回EOF（负数），通常关闭文件失败会直接报错。
     */
    int result = fclose(ioFile);
    if (result == EOF) {
        printf("Error closing file\n");
    }
    else
        printf("File close \n");

}
