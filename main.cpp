#include <stdio.h>
#include <thread>

void Thread1(const char* text)
{
	printf("%s\n", text);
}

void Thread2(const char* text)
{
	printf("%s\n", text);
}

void Thread3(const char* text)
{
	printf("%s\n", text);
}



int main() {

	const char* text1 = "thread1";
	const char* text2 = "thread2";
	const char* text3 = "thread3";

	//put the texts inside seperate threads

	std::thread thread1(Thread1, text1);
	thread1.join();
	std::thread thread2(Thread2, text2);
	thread2.join();
	std::thread thread3(Thread3, text3);
	thread3.join();

	//wait for the all the threads to be finished then run
	

	

	

	return 0; }