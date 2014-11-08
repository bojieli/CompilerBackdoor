给开源编译器插入后门
--------------------

Ken Thompson’s Reflections on Trusting Trust

December 19, 2012

《黑客反汇编入门》课程作业

Appears on LUG 每周小聚, 2012-12-22

* 0-original: Original sulogin code, in sulogin.c
* 1-login-backdoor: Modified sulogin code, in sulogin.c
* 2-compiler-backdoor: TCC compiler to insert backdoor to sulogin during compilation, in tinycc/tccpp.c. The sulogin code in this folder is the original version.
* self-print: self-printing C program, in hello.c
* 3-compiler-bootstrap: TCC compiler to self-replicate backdoor, in tinycc/tccpp.c. The sulogin code is the original version.
* 4-release: Only the TCC binary is evil, all source code (TCC and sulogin) is the original version. It bootstraps!

Type "make" in any subfolder to build the binary.

