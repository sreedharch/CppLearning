Multithreading is a specialized form of multitasking
There are two types of multitasking: 
  process-based -> handles the concurrent execution of programs
  thread-based -> concurrent execution of pieces of the same program. It contains two or more parts that can run concurrently. Each part of such a program is called a thread, and each thread defines a separate path of execution

main.cpp.1
  Creating Threads:
  #include <pthread.h>
  pthread_create (thread, attr, start_routine, arg) 
  
  Terminating Threads:
  #include <pthread.h>
  pthread_exit (status) 

Passing Arguments to Threads:
main.cpp.2

Joining and Detaching Threads:
main.cpp.3
  pthread_join (threadid, status) 
  pthread_detach (threadid) 