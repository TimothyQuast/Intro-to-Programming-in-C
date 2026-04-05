# Intro to Programming in  C

This course will introduce the learner to programming in C. It was created by
Timothy Quast. Anyone is free to use it for any purpose. 

We will follow along with selected excerpts from The C Programming Language, 2nd Edition
by Kerighan & Ritchie. That book is copyrighted, but you can generally find pdf copies
of it online using a simple Google search. Nonetheless, I recommend purchasing the book
because it is not very expensive. Make sure to get the 2nd Edition. 

**Regarding the book** -- The page numbers may vary between different copies of the pdf. 
Therefore I will refer to excerpts by Chapter and Section number.

This README will serve as the learner's instructions for the course. 

## Getting Started

Before beginning, we need to setup our development environment. We will need several
things to be working:
1. A terminal / shell such as Windows Terminal / Command Prompt,
2. A text editor such as Notepad, VS Code, or Neovim,
3. The [Zig](https://ziglang.org/) programming language, 
    which we will use as a C compiler and build system,
4. The [Git] version control system, and
5. *optional* A [GitHub] repo to host your work.

### Terminal

Your machine should have a terminal / shell readily available. This text will assume
you are using **Windows Command Prompt**, but the instructions throughout should be 
easy to adapt for any terminal & operating system.

#### Windows 
Type "cmd" into your search bar (usually at the bottom right) and click on "Command Prompt". 
In the window that appears, type "ver" and hit Enter. You should see something like this:
`Microsoft Windows [Version 10.0.26200.8037]`

#### Other Operating Systems
Google search "How to use a terminal on {my operating system}" and follow the instructions. 
Try to get the terminal to tell you its version.

### A Text Editor
Notepad comes pre-installed on Windows. It should suffice for this course, but you may
find it beneficial to install a more feature-complete code editor. I recommend 
[VS Code](https://code.visualstudio.com/) for beginners and [Neovim](https://neovim.io/) 
(my editor of choice) if you like steep learning curves and numerous headaches. 

### Zig
Zig is a modern systems programming language. We will not use the language itself
in this course (although I highly recommend it), but we will use it to compile our
C programs.

Go to [https://ziglang.org/download], scroll down to version **TDB**, and download the
correct zip file for your Operating System. Unzip and add the executable to your PATH.
