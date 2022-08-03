/*
    4.链接器: 链接器负责将各个目标模块之间的相互引用处理好，使得各个模块之间正确有序衔接

    a.静态链接：由连接器直接将库的内容加入到可执行文件中（此后执行文件不需要库）

    静态库的生成:

    gcc -c lib.c -o lib.a

    ar -q lib.o lib.a

    (生成lib.a的静态库)

    gcc main.c lib.a -o main.out
    (使用静态库)


    b.动态链接：可执行文件在运行时才去动态的加载库文件，库的内容不进入到可执行文件中
    （每次运行都需要库文件）

    动态库的生成:

    gcc -shared dlib.c -o dlib.so

    (生成dlib.so的动态库)

    gcc main.c -ldl -o main.out
    (在main.c文件中 使用dlopen ,dlsym, dlclose来操作动态库)






*/
