*This project has been created as part of the 42 curriculum by asparyns*

# Libft

## Description 
For this project we had to create our own library in C.
We recreated some standard functions which helped me understand how they function. This also allowed me to learn how to use them effectively. 
### Project
The elements this Project allowed me to master are:
- Basic Libc functions. 
- Memory and string manipulation functions. 
- List manipulation functions.
- Library creation. 
- Header Files. 
- Make File. 
- Better control of Github (to allow me to work from home).
- Nvim and Lazy.vim setup (to allow me to work from home). 
- Overflow and memory leaks prevention, error management.

### Libft
The libft library is composed of: a set of functions from the libc library, memory and string manipulation functions as well as linked lists manipulation functions. Please see below for more details. 
## Instructions
To note:
- The libc functions have the **same prototypes and behaviors** as the originals. I adhered **strictly** to their definitions as layed out in their **man pages** where available. The only difference with these functions are the names which all started with *ft_*.
- For the following character classification functions the return value is **1** if the character matches the tested class. It is **0** is the character does not match:  
    - *ft_isapha*
    - *ft_isdigit*
    - *ft_isalnum*
    - *ft_isascii*
    - *ft_isprint*
- The functions were written to ensure they do not quit unexpectedly (segmentation fault, bus error, dou-
ble free, etc.) except **for undefined behavior**. For libc functions, we followed the 'undefined behavior' definions in the respective function's man pages.  
- All heap-allocated memory allocated in the functions of this library are properly freed when necessary.
- The Makefile contains at least the rules $(NAME), all, clean, fclean and
re. The project's Makefile was written to ensure it does not perform unnecessary relinking.
- Test programs were created for this project but not submitted or uploaded to this project's repository.
## Resources

### Documentation 
The main reference for this project was the subject description provided.

### Articles
The following articles/blogs were consulted as part of this project: 
- Libft Project Approach: https://42-fran-byte-f94097.gitlab.io/docs/libft/libft-approach-en/#/
- Arrays vs Linked Lists, a Complete Guide: https://medium.com/@alejandro.itoaramendia/arrays-vs-linked-lists-a-complete-guide-bc23c0ab0e7c and https://mckerlie.com/posts/arrays-vs-linked-lists/ 

### Tutorials
The following tutorials were consulted as part of this project: 
- Makefile: 
- Header Files: https://www.geeksforgeeks.org/c/header-files-in-c-cpp-and-its-uses/ and https://www.codecademy.com/resources/docs/c/header-files 
- Markdown Basic Syntax: https://www.markdownguide.org/basic-syntax/ 
- Structures: https://www.codecademy.com/resources/docs/c/structures 
### How AI was used
For this project AI was used when, for clarification when there we couldn't reach agreement amongst peers as to the nuances of the different versions of our code (e.g. resolving pointer indirection issues, managing overflow and memory leaks : what is redundant and what is an essential security measure). 

These discussions with my peers allowed me to identify a weakness in my grasp and understand of some notions regarding memory lifecycle but most importantly repeated confusion over pointer indirection, arithmetics and syntax. Using my mistakes as examples, AI was akso used to guide me through an analysis of my mistakes and a walk-through some theory regarding pointers that my peers could not provide.
## Notes on the author's choices
- Please note that the *ft_atoi* function in this library stricly follows it's **man pages** description. It therefore does not detect errors.  errno  is  not  set  on  error so there is no way to distinguish between 0 as an error and as the converted value. There are also no checks for overflow or underflow. The string converted by atoi may begin with an arbitrary amount of white space (as determined by isspace(3)) followed by a single optional '+' or '-' sign.
- Please not that for *ft_calloc* if size is 0, then the function returns a unique pointer value that can be successfully passed to free(). 
___
