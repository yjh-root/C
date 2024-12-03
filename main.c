#include "func.h"

//typedef的使用，typedef起别名
//stu等价于struct student
//*pStu等价于struct student*
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pStu;
typedef int I;//在特定场景使用，便于整体修改
void main() {
    stu s={1001,"张三",'M'};//定义结构体及初始化
    stu *p=&s;//方法一：定义结构体指针
    pStu p1=&s;//方法二：定义结构体指针
    I num=10;
    printf("num=%d,p->num=%d\n",num,p->num);
}