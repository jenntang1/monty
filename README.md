![Monty](https://i.imgur.com/fWR9ahu.jpg)

# Monty (ByteCode Interpreter)

## Introduction
Monty was created by Jennifer Tang and Geoffrey Zoref to educate users about a stack data structure.  They were learning about stacks and queues with a lot of help from the Internet.  However, they couldn't find a hands-on resource to learn from.  Thus, they developed Monty and intentionally designed it to be raw and simple.  This way, scripts are transparent to the users in hopes of encouraging them to learn and improve Monty.  It is a command-line interpreter that reads and executes Monty ByteCode files which are .m extension files.  These files should contain operation codes or opcodes follwed by the data or element that has to be an integer.  

## Background
1. What do LIFO and FIFO mean?  
LIFO stands for Last In First Out.  
FIFO stands for First In First Out.  

2. What is a stack, and when to use it?  
A stack is a data structure where data could be inserted and/or removed from the top.  During insertion, data is stacked on top of the structure.  If there's capacity, data could continuously be stacked on top.  During removal, the data at the very top will be removed first, hence, a stack is also known as LIFO.  

The following shows the process in which the data flows in and out of a stack:  
![LIFO](https://i.imgur.com/h6kf8F3.png)

3. What is a queue, and when to use it?  
A queue is also a data structure where data could be inserted and/or removed.  Its difference from a stack is that during insertion, data is inserted at the back of the structure and during removal, data is removed from the front.  When data is inserted into the structure, it's called enqueue and when it's removed, it's called dequeue also known as FIFO.  

The following shows the process in which the data flows in and out of a queue:  
![FIFO](https://i.imgur.com/Z2muHYL.png)

4. What are the common implementations of stacks and queues?  
A stock could be implemented using arrays or linked lists.  A queue could be implemented using two stacks in that the original data is in the first stack and stored in the second stack as it gets inserted and removed.  

5. What are the most common use cases of stacks and queues?  
In stacks and queues, data could be inserted (push and enqueue respectively) and removed (pop and dequeue respectively) in an organized matter.  

6. What is the proper way to use global variables?  
A global variable should be declared and defined in the header file using extern.  This ensures the global variable would be available for use in all source files related to executing a program.  

## Challenges
The key challenge that still exists is developing a resolution for possible stack overflow.  

## Installation
The following are instructions to install Monty.

1. First, clone this repository to begin using on your local machine.

```bash
git clone https://github.com/jenntang1/monty.git 
```

2. Second, compile the files to create an executable file called monty.

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

3. The folder called bytecodes are the .m extension files containing the opcodes and elements.  Please feel free to make changes as you become familiar with Monty.  

## Usage
The following are instructions to use Monty.  Please consider reading the entirety of the error handling instruction.  

1. Error Handling  
There could be whitespaces before and/or after the opcode and its argument.  If there's text after the opcode or its argument, it will be ignored.  The file is read line by line and stopped when it's fully executed, finds an error or an error occurs.  After successful execution, output will be printed to standard out.  Otherwise, error will be printed to standard error.  

The following are the error handling in this interpreter:  

| Error                                | Message                                      | Exit Status   |
| ------------------------------------ | -------------------------------------------- | ------------- |
| 1. No file name                      | USAGE: monty file                            | EXIT\_FAILURE |
| 2. More than one argument            | USAGE: monty file                            | EXIT\_FAILURE |
| 3. Cannot open file                  | Error: Can't open file *filename*            | EXIT\_FAILURE |
| 4. File contains invalid instruction | L*line number*: unknown instruction *opcode* | EXIT\_FAILURE |
| 5. Malloc failed                     | Error: malloc failed                         | EXIT\_FAILURE |

2. Commenting  
The .m extension files allows for commenting.  Simply add # to the beginning of a line.  Monty would ignore lines that contains # as the first non-space character.  

3. push  
Pushes an element onto the stack  
![Monty_push_pall](https://i.imgur.com/HUxT1st.png)

4. pall  
Prints all elements on the stack  
![Monty_push_pall](https://i.imgur.com/HUxT1st.png)

5. pint  
Prints the element at the top of the stack  
![Monty_pint](https://i.imgur.com/JvMgqCh.png)

6. pop  
Removes the element at the top of the stack  
![Monty_pop](https://i.imgur.com/dyUCeru.png)

7. swap  
Swaps the top two elements on the stack  
![Monty_swap](https://i.imgur.com/AF6vpLG.png)

8. add  
Adds the top two elements on the stack  
![Monty_add](https://i.imgur.com/W5fWXJF.png)

9. nop  
Doesn't do anything  

10. sub  
Subtracts the top two elements on the stack  
![Monty_sub](https://i.imgur.com/vNoLwij.png)

11. div  
Divides the top two elements on the stack  
![Monty_div](https://i.imgur.com/TXg9u88.png)

12. mul  
Multiples the top two elements on the stack  
![Monty_mul](https://i.imgur.com/sktOfDd.png)

13. mod  
Performs the modulo operation or finds the remainder as a result of division  
![Monty_mod](https://i.imgur.com/pL5atc3.png)

14. pchar  
Prints the integer as its corresponding ASCII value  
![Monty_pchar](https://i.imgur.com/mew3qjL.png)

15. pstr  
Prints all the elements on the stack as a string and as its corresponding ASCII value  
![Monty_pstr](https://i.imgur.com/YhkIeRq.png)

16. rotl  
Rotates the stack to the top  
![Monty_rotl](https://i.imgur.com/rWVHDyc.png)

17. rotr  
Rotates the stack to the bottom  
![Monty_rotr](https://i.imgur.com/ohd6QSo.png)

## Resources
1. Data Structures/Stacks and Queues  
https://en.wikibooks.org/wiki/Data_Structures/Stacks_and_Queues  

2. Queue (abstract data type)  
https://en.wikipedia.org/wiki/Queue_(abstract_data_type)  

3. Stack (abstract data type)  
https://en.wikipedia.org/wiki/Stack_(abstract_data_type)  

4. FIFO (computing and electronics)  
https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)  

5. Stack and Queue, Why?  
https://stackoverflow.com/questions/2074970/stack-and-queue-why  

6. Queue using Stacks  
https://www.geeksforgeeks.org/queue-using-stacks/  

7. How do I use extern to share variables between source files?  
https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files  

## Creators
Jennifer Tang: [Email](mailto:jennifer0tang@gmail.com), [Github](https://github.com/jenntang1), [Linkedin](https://linkedin.com/in/jennifer-tang-nyc) and [Twitter](https://twitter.com/jenntang1)  
A budding Full-Stack Software Engineer living in Brooklyn, NY with interest in data science/management and experience in marketing analytics and pricing strategies.  Jennifer hopes to combine the analytical skills developed from ten years in Marketing with the technical programming skills gained to develop impactful applications and software.  Jennifer is the co-creator of [Pollen](https://github.com/jenntang1/pollen), an engaging and educational web application on forensic botany.  Forensic botany is a niche field of forensic science that uses plants or plant parts in investigating criminal cases.  It is not widely known to many, thus, its mission is to educate those who never heard of forensic botany and show its societal impact.  Additionally, it's a space for forensic botany enthusiasts to learn and discover cases they weren’t aware of.  When Jennifer is not on a computer, she likes to run outdoors, read the news, solve Sudoku, bake cookies and play with her nieces.  

Geoffery Zoref  

## Contributing
Please feel free to fork this repository and enhance Monty. The following are some guidelines to adhere by: 

* Keep README updated 
* Keep color and font style consistent 
* Keep descriptions/comments short and simple 
* New opcodes or improvements are welcome 
* Check spelling and grammar 

## Related Projects
None 

## Licensing
None  