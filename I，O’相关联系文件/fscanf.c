#include <stdio.h>
//
// Created by 王羿秋 on 25-10-23.
//
int main(int argc, char *argv[]) {
    char *filename = "user.txt";
    FILE *ioFile = fopen(filename,"r+");
    if (ioFile == NULL) {
        printf("Error opening file\n");
    }else {
        printf("File opened\n");
    }
    char name[50];
    int age;
    char wifi[50];
    int scanfR;
    while ((scanfR = fscanf(ioFile,"%s %d %s",name,&age,wifi)) != EOF) {
        printf("匹配到了%d\n",scanfR);
        printf("%s在%d岁爱上了%s\n",name,age,wifi);
    }

    //int	 fscanf(FILE * __restrict, const char * __restrict, ...) __scanflike(2, 3);
    int result = fclose(ioFile);
    if (result == EOF) {
        printf("Error closing file\n");
    }
    else
        printf("File close \n");

}
