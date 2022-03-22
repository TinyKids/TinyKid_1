CPU时钟周期

硬件参数上GHz就是时钟频率，即CPU的主频，主频越高说明CPU的工作速度越快。

![image-20220318103341987](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220318103341987.png)

![image-20220318104248302](C:\Users\lj1998\AppData\Roaming\Typora\typora-user-images\image-20220318104248302.png)

内存地址映射到CPU Cache地址，有直接映射Cache,将内存地址拆分成索引+组标记和偏移量

CPU分支预测器

提前把将要执行的指令放在指令缓存中，CPU可以直接从Cache中读取指令，提高执行速度

C++提供了likely和unlikely宏

如果一个进程在不同核心来回切换，各个核心的缓存命中率就会受到影响。

对策：有多个同时执行计算密集型的线程，为了防止因为切换到不同的核心，而导致缓存命中率下降的问题，将线程绑定在某一个CPU核心上，性能得到提升。

