#include "DeadLockProgram.h"

std::any DeadLockProgram::ObjectLock1 = nullptr;
std::any DeadLockProgram::ObjectLock2 = nullptr;

void DeadLockProgram::ThreadName1::run()
{
   {
	 std::scoped_lock<std::mutex> lock(ObjectLock1);
	  std::wcout << L"Thread 1: Has  ObjectLock1" << std::endl;
	  /* Adding sleep() method so that
	     Thread 2 can lock ObjectLock2 */
	  try
	  {
		  delay(100);
	  }
	  catch (const InterruptedException &e)
	  {
		  e->printStackTrace();
	  }
	  std::wcout << L"Thread 1: Waiting for ObjectLock 2" << std::endl;
	  /*Thread 1 has ObjectLock1 
	    but waiting for ObjectLock2*/
	  {
		std::scoped_lock<std::mutex> lock(ObjectLock2);
		 std::wcout << L"Thread 1: No DeadLock" << std::endl;
	  }
   }
}

void DeadLockProgram::ThreadName2::run()
{
   {
	 std::scoped_lock<std::mutex> lock(ObjectLock2);
	  std::wcout << L"Thread 2: Has  ObjectLock2" << std::endl;
	  /* Adding sleep() method so that
	     Thread 1 can lock ObjectLock1 */
	  try
	  {
		  delay(100);
	  }
	  catch (const InterruptedException &e)
	  {
		  e->printStackTrace();
	  }
	  std::wcout << L"Thread 2: Waiting for ObjectLock 1" << std::endl;
	  /*Thread 2 has ObjectLock2 
	    but waiting for ObjectLock1*/
	  {
		std::scoped_lock<std::mutex> lock(ObjectLock1);
		 std::wcout << L"Thread 2: No DeadLock" << std::endl;
	  }
   }
}

void DeadLockProgram::main(std::vector<std::wstring> &args)
{
   ThreadName1 *thread1 = new ThreadName1();
   ThreadName2 *thread2 = new ThreadName2();
   thread1->start();
   thread2->start();

	delete thread2;
	delete thread1;
}
