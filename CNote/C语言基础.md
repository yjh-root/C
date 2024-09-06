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

# 五.逻辑运算符，赋值运算符与求字节运算符

19.在C语言中，单&为取地址符，双&&为逻辑与，！非，||或。<font size="5" color="red">！的优先级高于算术运算符，&&和||的优先级低于关系运算符，逻辑表达式的值只有真和假与关系表达式一致</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int j=0;
    for (int i = 1; i < 400; ++i) {
        if(i%4==0&&i%100!=0||i%400==0){
            printf("%d ",i);
            j++;
        }
        if(j==10){
            printf("\n");
            j=0;
        }
    }
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
4 8 12 16 20 24 28 32 36 40 
44 48 52 56 60 64 68 72 76 80 
84 88 92 96 104 108 112 116 120 124 
128 132 136 140 144 148 152 156 160 164 
168 172 176 180 184 188 192 196 204 208 
212 216 220 224 228 232 236 240 244 248 
252 256 260 264 268 272 276 280 284 288 
292 296 304 308 312 316 320 324 328 332 
336 340 344 348 352 356 360 364 368 372 
376 380 384 388 392 396 
Process finished with exit code 0
```

20.<font size="5" color="red">短路运算</font>

<font size="5" color="red">逻辑与短路运算:通过表达式的左值来判断是否执行右值</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int i=0;
    i&& printf("you can't see me\n");
    int j=1;
    j&& printf("you can see me\n");

}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
you can see me

Process finished with exit code 0
```

<font size="5" color="red">逻辑或短路运算:与逻辑与短路运算相反</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int i=0;
    i|| printf("you can't see me\n");
    int j=1;
    j|| printf("you can see me\n");

}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
you can't see me

Process finished with exit code 0
```

## 求字节运算符sizeof

21.sizeof用于求取常量或变量所占空间大小，<font size="5" color="red">sizeof不是函数，是符号，优先级较高，为2</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int i=0;
    printf("i sizeof is %d\n",sizeof(i));

    double j=123456787.001;
    printf("j sizeof is %d\n",sizeof(j));

    char c='1';
    printf("c  sizeof is %d\n",sizeof(c));

}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
i sizeof is 4
j sizeof is 8
c  sizeof is 1

Process finished with exit code 0
```

# 六.if-else

22.<font size="5" color="red">算术运算符的优先级高于关系运算符，关系运算符的优先级高于逻辑与和逻辑或运算符，相同优先级的运算符从左至右进行结合(考研中运用到最多的就是算术运算符，关系运算符和逻辑运算符)</font>

23.双目运算符，拥有左操作数和右操作数，逻辑非！是单目运算符

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    for (int i = -5; i < 5; ++i) {
        if(i>0){
            printf("%d is bigger then 0\n",i);
        }else if(i<0){
            printf("%d is not bigger then 0\n",i);
        }
    }
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
-5 is not bigger then 0
-4 is not bigger then 0
-3 is not bigger then 0
-2 is not bigger then 0
-1 is not bigger then 0
1 is bigger then 0
2 is bigger then 0
3 is bigger then 0
4 is bigger then 0

Process finished with exit code 0
```

# 七.循环

24.while是当型循环先判断表达式，后执行循环语句

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int i=1;
    int sum=0;
    while (i<=100){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
5050
Process finished with exit code 0
```

25.for循环

for(表达式1;表达式2;表达式3)语句

<font color="purple" size="5">(1)先求解表达式1</font>

<font color="purple" size="5">(2)求解表达式2，若其值为真，则执行for语句中指定的内嵌语句，后执行第(3)步，若其值为假，则结束循环，转到第(5)步</font>

<font color="purple" size="5">(3)求解表达式3</font>

<font color="purple" size="5">(4)转回第(2)步继续执行</font>

<font color="purple" size="5">(5)循环结束，执行for语句下面的语句</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int sum=0;
    for (int i = 1; i <=100 ; ++i) {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
5050
Process finished with exit code 0
```

26.continue语句:跳过continue下的所有语句，直接执行表达式3<font size="5" color="red">跳过本次循环，while使用时请慎重，小心没执行i++,for循环请随意</font>

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int sum=0;
    for (int i = 1; i <=100 ; ++i) {
        if(i%2==0)
            continue;
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
2500
Process finished with exit code 0
```

26.break语句:直接结束循环

eg.

```
#include <stdio.h>

#define PIE 3+2
int main() {
    int sum=0;
    for (int i = 1; i <=100 ; ++i) {
        if(sum>2000)
            break;
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
2016
Process finished with exit code 0
```

<font size="5" color="green">例题一：求取10000以内所有的对称数及其个数</font>

code

```
#include <stdio.h>

void main() {
    int forNum=0;
    int totalNum=0;
    for (int i = 10; i < 10000; ++i) {
        //用于存取翻转数
        int b=0;
        //用于存取每个数位上的数
        int j=0;
        //用于存取数的位数
        int forCount=1;
        //求i翻转数的零时变量
        int back_i=i;
        //求i数位的零时变量
        int for_i=i;
        //求i的位数
        while (for_i){
            j=for_i%10;
            for_i=for_i/10;
            forCount=forCount*10;
        }
        forCount=forCount/10;
        //求i的翻转数
        while (back_i){
            j=back_i%10;
            b=j*forCount+b;
            back_i=back_i/10;
            forCount=forCount/10;
        }
        //比较i与翻转数,如果相等则打印
        if(b==i){
            printf("b=%d ",b);
            forNum++;
            totalNum++;
        }
        //打印美观，每9个换一行
        if(forNum==9){
            printf("\n");
            forNum=0;
        }
    }
    printf("total %d in 10000",totalNum);
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
b=11 b=22 b=33 b=44 b=55 b=66 b=77 b=88 b=99 
b=101 b=111 b=121 b=131 b=141 b=151 b=161 b=171 b=181 
b=191 b=202 b=212 b=222 b=232 b=242 b=252 b=262 b=272 
b=282 b=292 b=303 b=313 b=323 b=333 b=343 b=353 b=363 
b=373 b=383 b=393 b=404 b=414 b=424 b=434 b=444 b=454 
b=464 b=474 b=484 b=494 b=505 b=515 b=525 b=535 b=545 
b=555 b=565 b=575 b=585 b=595 b=606 b=616 b=626 b=636 
b=646 b=656 b=666 b=676 b=686 b=696 b=707 b=717 b=727 
b=737 b=747 b=757 b=767 b=777 b=787 b=797 b=808 b=818 
b=828 b=838 b=848 b=858 b=868 b=878 b=888 b=898 b=909 
b=919 b=929 b=939 b=949 b=959 b=969 b=979 b=989 b=999 
b=1001 b=1111 b=1221 b=1331 b=1441 b=1551 b=1661 b=1771 b=1881 
b=1991 b=2002 b=2112 b=2222 b=2332 b=2442 b=2552 b=2662 b=2772 
b=2882 b=2992 b=3003 b=3113 b=3223 b=3333 b=3443 b=3553 b=3663 
b=3773 b=3883 b=3993 b=4004 b=4114 b=4224 b=4334 b=4444 b=4554 
b=4664 b=4774 b=4884 b=4994 b=5005 b=5115 b=5225 b=5335 b=5445 
b=5555 b=5665 b=5775 b=5885 b=5995 b=6006 b=6116 b=6226 b=6336 
b=6446 b=6556 b=6666 b=6776 b=6886 b=6996 b=7007 b=7117 b=7227 
b=7337 b=7447 b=7557 b=7667 b=7777 b=7887 b=7997 b=8008 b=8118 
b=8228 b=8338 b=8448 b=8558 b=8668 b=8778 b=8888 b=8998 b=9009 
b=9119 b=9229 b=9339 b=9449 b=9559 b=9669 b=9779 b=9889 b=9999 
total 189 in 10000
Process finished with exit code 18
```

<font size="5" color="green">例题二：张三有一张100元的钞票，现在张三要去干瞪眼，需要将这100的整钞票，换成零钱，因为现可以兑换10元，5元，2元1元四种钞票，规定每种钞票必须有一张，请问一共有多少种换法，并列举出这些换法</font>

code

```
#include <stdio.h>

void main() {
    int a,b,c,d;
    int total;
    for (int a = 1; a <= 10; ++a) {
        for (int b = 1; b <= 20; ++b) {
            for (int c = 1; c <= 40; ++c) {
                for (int d = 1; d <= 40; ++d) {
                    if(a+b+c+d==40&&10*a+5*b+2*c+d==100){
                        printf("%d张10元,%d张5元,%d张2元,%d张1元\n",a,b,c,d);
                        total++;
                    }
                }
            }
        }
    }
    printf("共有%d种方法",total);
}
```

result

```
D:\CLionProjects\C\cmake-build-debug-mingw\C.exe
1张10元,5张5元,31张2元,3张1元
1张10元,6张5元,27张2元,6张1元
1张10元,7张5元,23张2元,9张1元
1张10元,8张5元,19张2元,12张1元
1张10元,9张5元,15张2元,15张1元
1张10元,10张5元,11张2元,18张1元
1张10元,11张5元,7张2元,21张1元
1张10元,12张5元,3张2元,24张1元
2张10元,2张5元,34张2元,2张1元
2张10元,3张5元,30张2元,5张1元
2张10元,4张5元,26张2元,8张1元
2张10元,5张5元,22张2元,11张1元
2张10元,6张5元,18张2元,14张1元
2张10元,7张5元,14张2元,17张1元
2张10元,8张5元,10张2元,20张1元
2张10元,9张5元,6张2元,23张1元
2张10元,10张5元,2张2元,26张1元
3张10元,1张5元,29张2元,7张1元
3张10元,2张5元,25张2元,10张1元
3张10元,3张5元,21张2元,13张1元
3张10元,4张5元,17张2元,16张1元
3张10元,5张5元,13张2元,19张1元
3张10元,6张5元,9张2元,22张1元
3张10元,7张5元,5张2元,25张1元
3张10元,8张5元,1张2元,28张1元
4张10元,1张5元,20张2元,15张1元
4张10元,2张5元,16张2元,18张1元
4张10元,3张5元,12张2元,21张1元
4张10元,4张5元,8张2元,24张1元
4张10元,5张5元,4张2元,27张1元
5张10元,1张5元,11张2元,23张1元
5张10元,2张5元,7张2元,26张1元
5张10元,3张5元,3张2元,29张1元
6张10元,1张5元,2张2元,31张1元
共有34种方法
Process finished with exit code 12
```

<font size="5" color="red">注意:考研不要想太多，不要想着代码的美观性，效率，是否优雅，关键是如何把题目以正常结果输出，不要想太多耽误了时间，得不偿失</font>
