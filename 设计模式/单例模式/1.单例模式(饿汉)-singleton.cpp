#include <iostream>
using namespace std;
//多线程模式下推荐
//饿汉模式-->定义类的时候就创建对象了
//缺点: 浪费内存资源(不需要就直接创建了)--不过现在计算机内存容量都是足够大的,可以不太考虑. 除非这个对象会占用很大空间, 一上来就加载很耗费时间
//优点: 没有线程安全问题

#if 0
class TaskQueue 
{
private:
	TaskQueue() {}
	TaskQueue(const TaskQueue& t) {}
	TaskQueue& operator=(const TaskQueue& t) {}

	static TaskQueue* m_taskQ;
public:
	//提供接口获取这个对象
	static TaskQueue* getInstance() { return m_taskQ; }

	//功能模块
	void func1()
	{
		cout << "我是一个单例模式" << endl;
	}
};

//静态变量只能在类外初始化
TaskQueue* TaskQueue::m_taskQ = new TaskQueue;

int main()
{
	TaskQueue* task = TaskQueue::getInstance();
	task->func1();

	return 0;
} 
#endif