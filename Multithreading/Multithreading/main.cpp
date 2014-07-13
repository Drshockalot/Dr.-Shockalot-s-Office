#include <iostream>
#include <thread>

//This function will be called from a thread

static const int num_threads = 10;

void call_from_thread(int tid) {
	std::cout << "Launched by thread " << tid << std::endl;
}

int main() {
	std::thread t[num_threads];

	//Launch a group of threads
	for (int i = 0; i < num_threads; ++i) {
		t[i] = std::thread(call_from_thread, i);
	}

	std::cout << "Launched from the main\n";

	//Join the threads with the main thread
	for (int i = 0; i < num_threads; ++i) {
		t[i].join();
	}
	system("pause");
	return 0;
}

//int main() {
//	//Launch a thread
//	std::thread t1(call_from_thread);
//	std::thread t2(call_from_thread);
//	//Join the thread with the main thread
//	t1.join();
//	t2.join();
//	system("pause");
//	return 0;
//}