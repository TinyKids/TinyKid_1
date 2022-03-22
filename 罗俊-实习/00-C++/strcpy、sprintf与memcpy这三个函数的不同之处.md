#### strcpy、sprintf与memcpy这三个函数的不同之处

1) 操作对象不同

① strcpy的两个操作对象均为字符串

② sprintf的操作源对象可以是多种数据类型，目的操作对象是字符串

③ memcpy的两个对象就是两个任意可操作的内存地址，并不限于何种数据类型。

2) 执行效率不同

memcpy最高，strcpy次之，sprintf的效率最低。

3) 实现功能不同

① strcpy主要实现字符串变量间的拷贝

② sprintf主要实现其他数据类型格式到字符串的转化

③ memcpy主要是内存块间的拷贝。

