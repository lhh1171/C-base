#include <stdio.h>
#include "stdio.h"

int main(int argc,char *argv[]) {
//    printf("Hello, World!\n");
    printf("%d\n",argc);
    printf("指向程序运行的全路径名:%s\n",argv[0]);
    printf("指向在DOS命令行中执行程序名后的第一个字符串:%s\n",argv[1]);
    printf("指向执行程序名后的第二个字符串:%s\n",argv[2]);
    printf("指向执行程序名后的第三个字符串:%s\n",argv[3]);
    return 0;
}
/*        argc和argv参数在用命令行编译程序时有用。main( int argc, char* argv[], char **env ) 中
        第一个参数，int型的argc，为整型，用来统计程序运行时发送给main函数的命令行参数的个数，在VS中默认值为1。
        第二个参数，char*型的argv[]，
        为字符串数组，用来存放指向的字符串参数的指针数组，每一个元素指向一个参数。各成员含义如下：
        argv[0]指向程序运行的全路径名
        argv[1]指向在DOS命令行中执行程序名后的第一个字符串
        argv[2]指向执行程序名后的第二个字符串
        argv[3]指向执行程序名后的第三个字符串
        argv[argc]为NULL
        第三个参数，char**型的env，为字符串数组。
        env[]的每一个元素都包含ENVVAR=value形式的字符串，其中ENVVAR为环境变量，value为其对应的值。
        平时使用到的比较少。
*/
/*运行结果*/
/*/home/lqc/CLionProjects/untitled4/cmake-build-debug/untitled4
1
指向程序运行的全路径名:/home/lqc/CLionProjects/untitled4/cmake-build-debug/untitled4
指向在DOS命令行中执行程序名后的第一个字符串:(null)
指向执行程序名后的第二个字符串:PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/envir/jdk1.8.0_251/bin:/envir/apache-maven-3.6.3/bin:/envir/gradle-6.9/bin
指向执行程序名后的第三个字符串:LC_MEASUREMENT=zh_CN.UTF-8

Process finished with exit code 0*/