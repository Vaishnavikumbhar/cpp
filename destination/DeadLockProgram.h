#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <any>
#include <mutex>
#include "exceptionhelper.h"

class DeadLockProgram
{
	// Creating Object Locks
public:
	static std::any ObjectLock1;
	static std::any ObjectLock2;

private:
	class ThreadName1 : public Thread
	{
  public:
	  virtual void run();
	};
   private:
   class ThreadName2 : public Thread
   {
  public:
	  virtual void run();
   };

   public:
   static void main(std::vector<std::wstring> &args);
};
