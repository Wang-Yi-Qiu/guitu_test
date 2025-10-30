#include <stdio.h>

int main(int argc, char *argv[]) {
    char * name ="io.txt";
    FILE * ioFIle = fopen(name,"r");
    if (ioFIle == NULL) {
        printf("不能使用只读方式打开此文件\n");
    }
    char buffer[1024];
    char  *c = fgets(buffer,sizeof(buffer),ioFIle);
    if (c == NULL) {
        printf("读取失败\n");
    }
    else
        printf("读取成功\n");
    while (fgets(buffer,sizeof(buffer),ioFIle) != NULL) {
        printf("%s",buffer);
    }
    //char *_LIBC_CSTR	fgets(char * __restrict _LIBC_COUNT(__size), int __size, FILE *);
    int close_result = fclose(ioFIle);
    if (close_result == EOF) {
        printf("文件关闭失败！\n");
    }
}
