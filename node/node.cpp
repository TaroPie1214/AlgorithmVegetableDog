
#include <iostream>
using namespace std;
class node
{
public:
	int value;  // 节点保存地值
	node *next;  // 指向下一个节点的指针
    //假设这个节点类是node，那么这个指针就是 node *next。这里一定不是int *next。因为这个指针指向的下一个元素是一个类的实例，而不是int类型的数据
	node()  // 构造函数，分别将value初始化为0、next初始化为NULL
	{
		value = 0;
		next = NULL;
	}
};
int main()
{	
	node node1,node2;  // 生成两个node类的实例，node1和node2
	node1.value = 1;
	node2.value = 2;  // 分别将它们的value初始化为1和2
	node1.next = &node2;  // 用&运算符取出node2的首地址
	cout << (node1.next)->value << endl;  // 再通过“->”运算符访问node2的value值，输出就是2
}