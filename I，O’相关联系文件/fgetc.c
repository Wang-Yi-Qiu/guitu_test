#include <stdio.h>

int main(int argc, char *argv[]) {
    char * name ="io.txt";
    FILE * ioFIle = fopen(name,"r");
    if (ioFIle == NULL) {
        printf("不能使用只读方式打开此文件\n");
    }
    int c = fgetc(ioFIle);
    while (c != EOF) {
        printf("%c",c);
        c = fgetc(ioFIle);
        //printf("%c",c);
    }
    printf("\n");
    int close_result = fclose(ioFIle);
    if (close_result == EOF) {
        printf("文件关闭失败！\n");
    }
}
