**注:大标题按课程来，会出现大标题重复，小标题从上到下不受大标题控制**

# 一.C语言基础

## 数据类型（常量-变量（整型，浮点型，字符型））

1.数据类型分为基本类型，构造类型，指针类型和空类型

2.基本类型分为整形，浮点型和字符型

3.常量，程序运行过程中不会发生改变的量（<font color="red" size="5">字符型常量只能用单引号，中间有且仅有一个字符，字符串串常量用双引号引起，中间至少放一个字符</font>）

4.变量，代表内存中具有特定属性的存储单元，它用来存储数据，在成勋运行过程中是可以改变的。变量命名规范，只允许存在字母，数字，下划线即_，并且不能以数字开头，不能和C语言中的关键字同名

5.基础变量分为整型，浮点型，字符型，在C语言中int类型占4字节，float占4字节,char占一个字节，sizeof(i)可以用来查看变量的空间大小

6.在考研中浮点型会考到指数形式  示例：3e2表示3的10的2次方，结果是300，e可以为正也可以为负，如果是-2则是0.03

7.符号常量

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
	int i=PIE*2;
    printf("i=%d\n",i);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
i=7

Process finished with exit code 0
```

结论：符号常量是直接将符号常量的值替换到公式中

8.转义字符实际上是2个字符，\n换行,\b退格,\\反斜杠

9.%d带符号的整型,%f浮点型,%c字符,%s字符串,%u无符号的整型,%o无符号8进制数,%p指针，%%是%符号和前面的转义字符反斜杠类似。

<font color="red" size="5">%x无符号16进制数(输出小写字母),%X无符号16进制数(输出大写字母),注意：转义字符无二进制输出</font>

<font color="purple" size="5">拓展：整型格式控制%3d,令输出字符占3个字节，即使没有三个字节也是,如果超出那就超出,默认是右对齐,-3d表示左对齐,整型格式控制%5.2f,输出总共占5个字符，小数点后两位</font>

10.在C的ACSII字符编码中，大写字符比小写字符小<font color="red" size="5">32</font>，A是65，a是97

11.C中没有字符串常量，所以用数组表示，任何字符串常量的占用空间都是字符串的位数+1,因为它还有一个<font color="red" size="5">-0</font>字符

12.在数学运算中，左右操作数数据类型相同，结果为原类型,所以5/2=2

13.I/O 标准缓冲区 Input和Output

# <font color="red">二.进制转换（重点中的重点，必须熟练掌握）</font>

14.10进制，2进制，8进制，16进制

<font color="red" size="5">2进制</font>

<font color="purple" size="5">在计算机中1字节为8位，1位即2进制的1位，它存储0和1。位：bit，字节：byte</font>

<font color="purple" size="5">即1byte=8bit,1KB=1024byte,1MB=1024KB,1GB=1024MB</font>

<font color="purple" size="5">int类型为4字节，即32位,最高位为符号位，0为正数，1为负数</font>

<font color="purple" size="5">进制转换，10进制转2进制，8进制，16进制用短除法可以直接转</font>

<font color="purple" size="5">10进制</font>

```
123
```

<font color="purple" size="5">2进制</font>

```
0000 0000 0000 0000 0000 0000 0111 1011
```

<font color="red" size="5">2进制转8进制则是把2进制三个一列的转</font>

<font color="purple" size="5">2进制</font>

```
0000 0000 0000 0000 0000 000 001 111 011
```

<font color="purple" size="5">8进制</font>

```
173
```

<font color="red" size="5">2进制转16进制则是把2进制四个一列的转</font>

<font color="purple" size="5">2进制</font>

```
0000 0000 0000 0000 0000 0000 0111 1011
```

<font color="purple" size="5">16进制（16进制中，10=a,11=b,12=c,13=d,14=e,15=f）</font>

```
7b
```

<font color="red" size="5">断点用取地址符可以看内存，内存是以16进制存储</font>

<font color="red" size="5">7b在内存表示为7b 00 00 00,与常识相反。因为市面上的CPU采用了小端存储的方式进行数据存储，因此低位在前，高位在后（单个字节是一个整体，7b不会变成b7）;</font>

<font color="red" size="5">C语言赋值只能赋值10进制，8进制和16进制，不能赋值2进制。例如，int i=123(10进制),int j=0173(8进制)，int k=0x7b(16进制)</font>

# 三.scanf及其注意事项

15.C的输入输出是通过标准函数库实现的，没有关键字.scanf("%d",&i);用%d控制类型，必须要取地址符，把对应内容放入I这个变量的地址，所以，必须要取地址符

<font color="red" size="5">scanf函数读取字符放在另一个scanf后面时，第一个读出来了，第二个直接跳了是因为你输入的时候，不止输入了你输入的数，还有一个\n，它留在了标准输入缓冲区的\n被后面的scanf读取了</font>

<font color="red" size="5">如何避免,用fflush(stdin);函数清空标准输入缓冲区，stdin表示标准输入缓冲区</font>

<font color="red" size="5">多种不同类型输入时，在%c前加一个空格可以完美解决问题</font>

# 四.算术运算符与关系运算符

16.运算符分类

<font color="red" size="5">（1）算术运算符（+ - * /  %）</font>

<font color="red" size="5">（2）关系运算符（> < == >= <= !=）</font>

<font color="red" size="5">（3）逻辑运算符（！ && ||）</font>

<font color="red" size="5">（4）位运算符（<< >> ~ | ^ &）</font>

<font color="red" size="5">（5）赋值运算符（=及其拓展赋值运算符）</font>

<font color="red" size="5">（6）条件运算符（?:）</font>

<font color="red" size="5">（7）逗号运算符（,）</font>

<font color="red" size="5">（8）指针运算符（*和&）</font>

<font color="red" size="5">（9）求字节运算符（sizeof）</font>

<font color="red" size="5">（10）强制类型转换运算符（(类型)）</font>

<font color="red" size="5">（11）分量运算符（. ->）</font>

<font color="red" size="5">（12）下标运算符（[ ]）</font>

<font color="red" size="5">（13）其他（如函数调用运算符( )）</font>

17.算术运算符及算术表达式

算术运算符乘除取余的优先级是高于加减的，取余运算不能用于浮点数，只能用于整型数，<font size="5" color="red">当操作符的两个操作数都是整型时执行整型运算，其他情况执行浮点型运算</font>，由算术运算符组成的式子被称为算术表达式

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int result=4+5*2-6/3+10%4;
    printf("result=%d\n",result);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
result=14

Process finished with exit code 0
```

18.关系运算符及关系表达式

关系表达式的结果只有真假(true and false),0代表false，!0代表true,关系运算符的优先级低于算术运算符

eg.

```
int main() {
    int a;
    while (scanf("%d",&a)){
        if(3<a&&a<10){
            printf("a在3和10之间\n");
        }
        else{
            printf("a不在3和10之间\n");
        }
    }
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
1
a不在3和10之间
3
a不在3和10之间
4
a在3和10之间
```

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int a;
    while (scanf("%d",&a)){
        if(3<a<10){
            printf("a在3和10之间\n");
        }
        else{
            printf("a不在3和10之间\n");
        }
    }
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
1
a在3和10之间
2
a在3和10之间
3
a在3和10之间
```

<font color="red" size="5">错误执行原因:先执行3<a,结果无论是0还是1永远小于10，所以永远不可能执行到else</font>

