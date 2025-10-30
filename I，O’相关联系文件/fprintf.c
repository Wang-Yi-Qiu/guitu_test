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
    char *name = "大海哥";
   int frpintf_result = fprintf(ioFile, "海的那边是什么，是无穷无极的财富和宝藏\n那我们为什么不去追呢！\n因为我们有我们的\'温柔乡\'\t\t %s",name);
    if (frpintf_result == EOF) {
        printf("字符串写入失败\n");
    }
    else
        printf("字符串写入成功%d",frpintf_result);
    //int	 fprintf(FILE * __restrict, const char * __restrict, ...) __printflike(2, 3);
    //这里的FILE * __restrict这是文件句柄。
    //const char * __restrict这是添加的内容。
    //fputc(int, FILE *);
       // return success char failure 负数
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
