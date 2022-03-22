![image-20220306225436346](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220306225436346.png)

CAS操作

CAS是比较并交换的意思，一条CPU并发原语，用于判断内存中某个值是否为预期值，如果是则更新为新的值，这个过程是原子的。

用到了三个值  内存地址V，旧的预期值A，计算后需要修改的值B

![image-20220306225643799](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220306225643799.png)

![image-20220306225714212](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220306225714212.png)



![image-20220306225742695](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220306225742695.png)

