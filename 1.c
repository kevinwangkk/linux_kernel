Linux-kernel
	
	1. 系统调用 -《unix环境高级编程》
	2. 内存管理子系统（内存映射，物理内存，虚拟地址，页表，伙伴，slab，swap）
	3. 进程管理子系统（任务管理，调度，同步）
	4. 文件子系统（VFS，缓存，文件系统）
	5. 网络子系统（套接字，协议栈，网络设备）
	6. 设备子系统（字符设备，块设备）


命令行 ： grep sed awk


一. 系统调用
	1. 进程管理：fork，waitpid，exec类函数
	2. 内存管理：brk(malloc), mmap
	3. 文件管理：open,read,write,lseek,close
	4. 进程间通信：	消息队列 msgget,msgsnd,msgrcv;
					共享内存 shmget, shmat;
					信号量 sem_wait, sem_post
					信号量集 sig*
	5. 信号处理： kill， sigaction
	6. 网络通信：socket, bind, connect, accept, listen









