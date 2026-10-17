## Essential Headers for Core POSIX
* [<unistd.h>]()
* [<fcntl.h>]()
    * Used for file control options, file locking or changing file descriptor properties.
* [<sys/stat.h>]()
    * retriving file metadata (size, permissions,timestamps)
* [<sys/types.h>]()
    * Defines data types used in system calls, (pid_t, uid_t, off_t). 
* [<dirent.h>]()
    * Allows to open, read, and list the contents of dir using fun opendir() and readdir().
* [<signal.h>]()
    * Defines how to handle signals (software interrupts).
    * provides fun like signal() and sigaction() for signal handling.
* [<errno.h>](./errno.c)
    * Defines the errno macro, set by system calls and library functions to indicate what went wrong.

## Advanced Headers
* [<pthread.h>]()
    * create and manage concurrent execution paths within a process.

## Networking: 
* [<sys/socket.h>]()
* [<netinet/in.h>]()
* [<<arpa/inet.h>]()

## Inter-Process Communication (IPC)
* [<semaphore.h>]() : (semaphores),
* [<mqueue.h>]()    : (message queues),
* [<sys/shm.h>]()   : (shared memory) XSI (System V) IPC headers like,
* [<sys/msg.h>]()   : (message queues).
