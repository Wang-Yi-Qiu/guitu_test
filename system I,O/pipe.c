//
// Created by 王羿秋 on 25-10-27.
//
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //将程序传递进来的第一个命令行参数，通过管道传输给子进程
    pid_t pid;
    int fd[2];
    if (argc != 2) {
        fprintf(stderr, "%s：请填写需要打印的信息\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if (pipe(fd)) {
        perror("创建pipe");
    }
    pid = fork();
    if (pid < 0) {
        perror("fork");
    }else if (pid == 0) {
        //这里是子进程
        close(fd[1]);
        char * child_out = "children accept parents email!\n";
        write(STDOUT_FILENO, child_out, strlen(child_out) );
        char buf[100];
        ssize_t rd = read(fd[0],buf, sizeof(buf));
        if (rd > 0) {
            write(STDOUT_FILENO,buf,rd);
        }
        write(STDOUT_FILENO,"\n",1);
        close(fd[0]);
        _exit(EXIT_SUCCESS);
    }else {
        //这里是父进程 发送信息给子进程。
        close(fd[0]);//关闭管道符的读取功能
        write(STDOUT_FILENO, "parents send email to chlidren!\n", 32);
        write(fd[1], argv[1],strlen(argv[1]));
        waitpid(pid, NULL, 0);
        close(fd[1]);//关闭管道符的写入端口
        exit(EXIT_SUCCESS);
    }
    return 0;
}
