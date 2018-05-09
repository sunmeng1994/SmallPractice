//
//  main.cpp
//  testfork()
//
//  Created by dogrest on 2018/5/10.
//  Copyright © 2018年 dogrest. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<unistd.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    pid_t fpid;//fork函数返回的值
    int count=0;//计数
    fpid=fork();
    if(fpid<0)
        cout<<"error in fork"<<endl;
    else if(fpid==0)
    {
        cout<<"i`m the child process and my pid is"<<getpid()<<endl;
        count++;
    }
    else
    {
        cout<<"i`m the parent process,my pid is"<<getpid()<<endl;
        count++;
    }
    std::cout << "count is"<<count<<endl;
    return 0;
}
//fork()一次调用两次返回
//1)父进程中，fork()返回新创建紫禁城的进程id
//2)子进程中，fork()返回0
//3)如果出现错误，fork()返回一个负值

