//
// Created by 王羿秋 on 25-10-27.
//
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int fd = open("test.txt", O_RDWR|O_CREAT,0644);
    if (fd == -1) {
        perror("open");
    }
    // O_TRUNC截断文件的长度为0
    // open(const char *, int, ...) __DARWIN_ALIAS_C(open);
    return 0;
}
