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
    int i=0;
    cout<<"i\tson/pa\tppid\tpid\tfpid"<<endl;
    //ppid值当前进程的父进程pid
    //pid指当前进程的pid
    //fpid值fork返回给当前进程的值
    for(i=0;i<2;i++)
    {
        pid_t fpid=fork();
        if(fpid==0)
        {
            cout<<i<<"\t"
            <<"child\t"
            <<getppid()<<"\t"
            <<getpid()<<"\t"
            <<fpid<<endl;
        }
        else
        {
            cout<<i<<"\t"
            <<"parent\t"
            <<getppid()<<"\t"
            <<getpid()<<"\t"
            <<fpid<<endl;
        }
    }
    return 0;
}
