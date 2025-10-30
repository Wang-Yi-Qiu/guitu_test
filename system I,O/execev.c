//
// Created by 王羿秋 on 25-10-27.
//
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *name = "WangYiQiu";
    printf("我现在在一楼！！%d\n",getpid());
    char *args[] = {"execve的进程",name,NULL};
    char *envp[] = {"PATH=/Applications/DevEco-Studio.app/Contents/tools/ohpm/bin:/Users/wangyiqiu/.local/bin:/opt/homebrew/bin:/opt/homebrew/sbin:/usr/local/bin:/System/Cryptexes/App/usr/bin:/usr/bin:/bin:/usr/sbin:/sbin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/local/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/appleinternal/bin",NULL};
    int re = execve("/Users/wangyiqiu/Desktop/guitu/system I,O/hello",args,envp);
    if (re == -1) {
        perror("上楼失败");
    }
    return 0;
}
