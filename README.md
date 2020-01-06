# Monty ByteCode Interpreter #
The source codes contained in this repository will implement an interpreter to read and execute Monty ByteCode files.  

# Monty 0.98 #
Similar to Python, Monty 0.98 is a scripting language compiled into a Monty ByteCode file that has a **.m** extension.  In the file, each line contains one instruction only called **opcode**.  There could be whitespaces before and/or after the **opcode** and its argument.  If there's text after the **opcode** or its argument, it will be ignored.  The file is read line by line and stopped when it's fully executed, finds an error or an error occurs.  After successful execution, output will be printed to standard out.  Otherwise, error will be printed to standard error.  

The following are the error handling in this interpreter:  

| Error                                | Message                                      | Exit Status   |
| ------------------------------------ | -------------------------------------------- | ------------- |
| 1. No file name                      | USAGE: monty file                            | EXIT\_FAILURE |
| 2. More than one argument            | USAGE: monty file                            | EXIT\_FAILURE |
| 3. Cannot open file                  | Error: Can't open file *filename*            | EXIT\_FAILURE |
| 3. File contains invalid instruction | L*line number*: unknown instruction *opcode* | EXIT\_FAILURE |
| 4. Malloc failed                     | Error: malloc failed                         | EXIT\_FAILURE |

# General #
0. What do LIFO and FIFO mean?  
LIFO stands for Last In First Out.  
FIFO stands for First In First Out.  

1. What is a stack, and when to use it?  
A stack is a data structure where data could be inserted and/or removed from the top.  During insertion, data is stacked on top of the structure.  If there's capacity, data could continuously be stacked on top.  During removal, the data at the very top will be removed first.  Hence, a stack is also known as LIFO.  

The following shows the process in which the data flows in and out of a stack:  
![LIFO](https://i.imgur.com/h6kf8F3.png)

2. What is a queue, and when to use it?  
A queue is also a data structure where data could be inserted and/or removed.  Its difference from a stack is that during insertion, data is inserted at the back of the structure and during removal, data is removed from the front.  When data is inserted into the structure, it's called enqueue and when it's removed, it's called dequeue.  Hence, a queue is also known as FIFO.  

The following shows the process in which the data flows in and out of a queue:  
![FIFO](https://i.imgur.com/Z2muHYL.png)

3. What are the common implementations of stacks and queues?  
A stock could be implemented using arrays or linked lists.  A queue could be implemented using two stacks in that the original data is in the first stack and stored in the second stack as it gets inserted and removed.  

4. What are the most common use cases of stacks and queues?  
In stacks and queues, data could be inserted (push and enqueue respectively) and removed (pop and dequeue respectively) in an organized matter.  

5. What is the proper way to use global variables?  
A global variable should be declared and defined in the header file using **extern**.  This ensures the global variable would be available for use in all source files related to executing a program.  

# Resources #
0. Data Structures/Stacks and Queues  
https://en.wikibooks.org/wiki/Data\_Structures/Stacks\_and\_Queues  

1. Queue (abstract data type)  
https://en.wikipedia.org/wiki/Queue\_(abstract\_data\_type)  

2. Stack (abstract data type)  
https://en.wikipedia.org/wiki/Stack\_(abstract\_data\_type)  

3. FIFO (computing and electronics)  
https://en.wikipedia.org/wiki/FIFO\_(computing\_and\_electronics)  

4. Stack and Queue, Why?  
https://stackoverflow.com/questions/2074970/stack-and-queue-why  

5. Queue using Stacks  
https://www.geeksforgeeks.org/queue-using-stacks/  

6. How do I use extern to share variables between source files?  
https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files  

# Contributors #
Geoffery Zoref  
Jennifer Tang  
