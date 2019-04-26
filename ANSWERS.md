**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

R: running or runnable, it is just waiting for the CPU to process it
S: Interruptible sleep, waiting for an event to complete, such as input from the terminal
D: Uninterruptible sleep, processes that cannot be killed or interrupted with a signal, usually to make them go away you have to reboot or fix the issue
Z: Zombie: terminated processes that are waiting to have their statuses collected
T: Stopped: a process that has been suspended/stopped

**2. What is a zombie process?**

Z: Zombie: terminated processes that are waiting to have their statuses collected

**3. How does a zombie process get created? How does one get destroyed?**

If the parent process calls the wait() system call / Once the zombie process reports to its parent process.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

The program is more performant when compiled at compiled time instead of at runtime.