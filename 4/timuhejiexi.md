四．625 这个数字很特别，625 的平方等于390625,刚好其末3 位是625 本身。除了625,还有其它的3 位数有这个特征吗?
请编写程序，寻找所有这样的3 位数:它的平方的末3 位是这个数字本身。输出结果中，从小到大，每个找到的数字占- 一行。比如那个625就输出为: 625


题解：先用for循环从100到999遍历一遍，在用if语句判断这3位数是否符合这个条件，如果符合条件，则打印输出。
