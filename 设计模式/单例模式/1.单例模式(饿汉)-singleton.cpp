#include <iostream>
using namespace std;
//���߳�ģʽ���Ƽ�
//����ģʽ-->�������ʱ��ʹ���������
//ȱ��: �˷��ڴ���Դ(����Ҫ��ֱ�Ӵ�����)--�������ڼ�����ڴ����������㹻���,���Բ�̫����. ������������ռ�úܴ�ռ�, һ�����ͼ��غܺķ�ʱ��
//�ŵ�: û���̰߳�ȫ����

#if 0
class TaskQueue 
{
private:
	TaskQueue() {}
	TaskQueue(const TaskQueue& t) {}
	TaskQueue& operator=(const TaskQueue& t) {}

	static TaskQueue* m_taskQ;
public:
	//�ṩ�ӿڻ�ȡ�������
	static TaskQueue* getInstance() { return m_taskQ; }

	//����ģ��
	void func1()
	{
		cout << "����һ������ģʽ" << endl;
	}
};

//��̬����ֻ���������ʼ��
TaskQueue* TaskQueue::m_taskQ = new TaskQueue;

int main()
{
	TaskQueue* task = TaskQueue::getInstance();
	task->func1();

	return 0;
} 
#endif