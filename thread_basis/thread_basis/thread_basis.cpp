#include <thread>
#include <iostream>

void thread_work(std::string str) {
	std::cout << "str is " << str << std::endl;
	//std::this_thread::sleep_for(std::chrono::seconds(5));
	//std::cout << "thread wake up.." << std::endl;
}

int main()
{
	std::string teststr = "hello world!";
	// 1. 通过初始化一个线程对象，启动一个线程
	std::thread t1(thread_work, teststr);
	std::this_thread::sleep_for(std::chrono::seconds(5));
	//std::cout << "main thread finished..." << std::endl;
	
	t1.join();
	return 0;
}
