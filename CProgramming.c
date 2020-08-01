Search Text: C Programs with Solutions
[PDF]C Programs with Solutions - SKIET
www.skiet.org/downloads/cprogrammingquestion.pdf
the flow of programs. Another feature of C is the way it can express ideas concisely. The richness of a language shapes what it can talk about. C gives us the apparatus to build neat and compact programs. C tries to make the best of a computer by linking as closely as possible to the local environment.

File Name: cprogrammingquestion.pdf/cprogrammingquestion.txt
File Size: 547KB
Page Count: 292
https://cn.bing.com/search?q=C+Programs+with+Solutions&form=PRUSEN&mkt=en-us&httpsmsn=1&msnews=1&rec_search=1&refig=00242a14239e4e7b99c7ac165c8baf55&sp=-1&pq=c+programs+with+solutions&sc=3-25&qs=n&sk=&cvid=00242a14239e4e7b99c7ac165c8baf55

CPrograms with Solutions

By

S. ANANDAMURUGAN
M.E., (Ph.D)., MISTE., MACEEE.,
Senior Lecturer, Department of Computer Science & Engineering,
Kongu Engineering College, Perundurai
Tamil Nadu

UNIVERSITY SCIENCE PRESS
(An Imprint of Laxmi Publications Pvt. Ltd.)
BANGALORE         CHENNAI        COCHIN        GUWAHATI        HYDERABAD
JALANDHAR         KOLKATA         LUCKNOW        MUMBAI        PATNA
RANCHI        NEW DELHI



Published by :

UNIVERSITY SCIENCE PRESS
(An Imprint of Laxmi Publications Pvt. Ltd.)
113, Golden House, Daryaganj,
New Delhi-110002
Phone : 011-43 53 25 00
Fax : 011-43 53 25 28
www.laxmipublications.com
info@laxmipublications.com
Copyright © 2011 by Laxmi Publications Pvt. Ltd. All rights reserved. No part of this
publication may be reproduced, stored in a retrieval system, or transmitted in any form or by any means, electronic, mechanical, photocopying, recording or otherwise without the prior written permission of the publisher.

Price: < 180.00 Only. First Edition: 2011

OFFICES
-----------------------------------------------------------------------------------------
Bangalore    080-26 75 69 30                    Chennai    044-24 34 47 26
Cochin    0484-237 70 04, 405 13 03             Guwahati    0361-251 36 69, 251 38 81
Hyderabad    040-24 65 23 33                    Jalandhar    0181-222 12 72
Kolkata    033-22 27 43 84                      Lucknow    0522-220 99 16
Mumbai    022-24 91 54 15, 24 92 78 69          Patna    0612-230 00 97   
Ranchi    0651-221 47 64
-----------------------------------------------------------------------------------------
UCP–9612–180–C PROGRAM WITH SOLUTION–ANA
Typeset at : Monu Printographics, Delhi
C—Printed at : Ajit Printers, Delhi

Dedicated to
My Son
Master A. Shrikarthick

[Contents]

Chapters  1. C Concepts                      Pages     1–11
Chapters  2. Introduction—C Programs         Pages    12–51
Chapters  3. Fundamentals—C Programs         Pages   52–112
Chapters  4. C Debugging                     Pages  113–248
Chapters  5. Sample Questions                Pages  249–261
Chapters  6. Short Questions and Answers     Pages  262–279
Chapters  7. Questions                       Pages  280–286

[Table of Contents]

             Preface
Chapters  1. C Concepts                      Pages     1–11
             1.00  OVERVIEW OF C PROGRAMMING
             1.01  INTRODUCTION
             1.02  STRUCTURE OF A C PROGRAM
             1.03  STEPS FOR EXECUTING THE PROGRAM
             1.04  C CHARACTER SET
             1.05  DELIMITERS
             1.06  C KEYWORDS
             1.07  IDENTIFIERS
             1.08  CONSTANTS
             1.09  VARIABLES
             1.10  DATA TYPES
             1.11  OPERATORS
             1.12  INPUT AND OUTPUT
             1.13  DECISION STATEMENTS
             1.14  LOOP CONTROL STATEMENTS
             1.15  ARRAYS
             1.16  STRINGS
             1.17  FUNCTIONS
             1.18  RECURSION
Chapters  2. Introduction—C Programs         Pages    12–51
             50 Programs
Chapters  3. Fundamentals—C Programs         Pages   52–112
             52 Programs
Chapters  4. C Debugging                     Pages  113–248
             342 Questions
Chapters  5. Sample Questions                Pages  249–261
             40 Questions
Chapters  6. Short Questions and Answers     Pages  262–279
             56 Questions
Chapters  7. Questions                       Pages  280–286
             182 Questions

=======
Preface
=======

This book gives a rich collection of C programs. These programs that support the theoretical concepts are given in a large number to help students understand the concepts better. This book will be useful for students of BE, MCA, BCA, MSc, and BSc, which have C programming language as a part of the course.

The first chapter deals with the fundamental concepts of C language. The second chapter focuses on introduction C programming. The third chapter provides with detailed program on next level to the basic C program. Fourth chapter focuses on C debugging. The fifth chapter deals with the simple C questions and Answers. Sixth chapter deals with the short questions
and answers.

The main aim of this book is to give maximum guidance to the students, faculty and research scholars. Suggestions for improvement will be appreciated and incorporated.
—Author

=======================
Chapter  1  C CONCEPTS
=======================

1.0 OVERVIEW OF C PROGRAMMING
-----------------------------
C language is one of the most popular computer languages today because it is a structured, high level, machine independent language. It allows software developers to develop programs without worrying about the hardware platforms where they will be implemented. C is called a high level, compiler language. The aim of any high level computer language is to provide an easy and natural way of giving a programme of instructions to a computer.
C is one of a large number of high level languages which can be used for general purpose programming, i.e., anything from writing small programs for personal amusement to writing complex applications. It is unusual in several ways. Before C, high level languages were criticized by machine
code programmers because they shielded the user from the working details of the computer. The C language has been equipped with features that allow programs to be organized in an easy and logical way. This is vitally important for writing lengthy programs because complex problems are only manageable with a clear organization and program structure.

C allows meaningful variable names and meaningful function names to be used in programs without any loss of efficiency and it gives a complete freedom of style, it has a set of very flexible loop constructions and neat ways of making decisions. These provide an excellent basis for controlling
the flow of programs. Another feature of C is the way it can express ideas concisely. The richness of a language shapes what it can talk about. C gives us the apparatus to build neat and compact programs. C tries to make the best of a computer by linking as closely as possible to the local environment.

The increasing popularity of C is probably due to its many desirable qualities. It is a robust language whose rich set of built-in functions and operators can be used to write any complex program. The C compiler combines the capabilities of an assembly language with the features of a high-level
language and therefore it is well suited for writing both system software and business packages. Programs written in C are efficient and fast. This is due to its variety of data types and powerful operators. C is highly portable. This means that C programs written for one computer can be run on another with little or no modification. Another feature of C is its ability to extend itself.

1

2 C PROGRAMS WITH SOLUTIONS

1.1 INTRODUCTION
----------------

C is a remarkable language. Designed originally by Dennis Ritchie, working at AT&T Bell Laboratories in New Jersey, it has increased in use until now it may well be one of the most widelywritten computer languages in the world. C is a structured language. It allows variety of programs in small modules. It is easy for debugging, testing, and maintenance if a language is a structured
one.

1.2 STRUCTURE OF A C PROGRAM
----------------------------

/* Comment */
Include header file section
Global declaration section
main()
{
     Declaration part
     Executable part
}
User-defined functions
{
     Statements
}

Include Header File Section

C program depends upon some header files for function definition that are used in program. Each header file by default is extended with .h. The header file should be included using # include
directive as given here.

Global Declaration

This section declares some variables that are used in more than one function. These variables are known as global variables. This section must be declared outside of all the functions.

Function Main

Every program written in C language must contain main() function. The function main() is a starting point of every C program. The execution of the program always begins with the function main ().

Declaration Part

The declaration part declares the entire variables that are used in executable part. The initialisations of variables are also done in this section. Initialisation means providing initial value to the variables.

C CONCEPTS  3

Executable Part

This part contains the statements following the declaration of the variables. This part conatins a set of statements or a single statement. These statements are enclosed between the braces.

User Defined Function

The functions defined by the user are called user-defined functions. These functions are generally defined after the main () function.

1.3 STEPS FOR EXECUTING THE PROGRAM
-----------------------------------

1. Creation of program

Programs should be written in C editor. The file name does not necessarily include extension
C. The default extension is C.

2. Compilation of a program

The source program statements should be translated into object programs which is suitable for execution by the computer. The translation is done after correcting each statement. If there is no error, compilation proceeds and translated program are stored in another file with the same file name with extension ".obj".

3. Execution of the program

After the compilation the executable object code will be loaded in the computers main memory and the program is executed.

1.4 C CHARACTER SET
-------------------

Letters           Digits                       White Spaces

Capital A to Z    All decimal digits 0 to 9    Blank space
Small a to z                                   Horizontal tab
                                               Vertical tab
                                               New line
                                               Form feed
Special Characters

,    Comma                   &    Ampersand
.    dot                     ^    Caret
;    Semicolon               *    Asterisk
:    Colon                   -    Minus
'    Apostrophe              +    Plus

4    C PROGRAMS WITH SOLUTIONS

"    Quotation mark             <    Less than
!    Exclamation mark           >    Greater than
|    Vertical bar              ()   Parenthesis left/right
/    Slash                     []   Bracket left/right
\    Back slash                {}   Braces left/right
~    Tilde                      %    Percent
_    Underscore                 #    Number sign or Hash
$    Dollar                     =    Equal to
?    Question mark              @    At the rate

1.5 DELIMITERS
--------------

Delimiters            Use

: Colon               Useful for label
; Semicolon           Terminates the statement
() Parenthesis        Used in expression and function
[] Square Bracket     Used for array declaration
{} Curly Brace        Scope of the statement
# hash                Preprocessor directive
, Comma               Variable separator

1.6 C KEYWORDS
--------------

Auto                Double                Int                Struct
Break               Else                  Long               Switch
Case                Enum                  Register           Typedef
Char                Extern                Return             Union
Const               Float                 Short              Unsigned
Continue            For                   Signed             Void
Default             Goto                  Sizeof             Volatile
Do                  If                    Static             while

C CONCEPTS  5

1.7 IDENTIFIERS
---------------

Identifiers are names of variables, functions, and arrays. They are user-defined names, consisting sequence of letters and digits, with the letter as the first character.

1.8 CONSTANTS
-------------

Values do not change during the execution of the program
Types:

1. Numerical constants:

— Integer constants
These are the sequence of numbers from 0 to 9 without decimal points or fractional
part or any other symbols. It requires minimum two bytes and maximum four bytes.
Eg: 10,20, + 30, – 14

— Real constants
It is also known as floating point constants.
Eg: 2.5, 5.342

2. Character constants:

— Single character constants
A character constant is a single character. Characters are also represented with a
single digit or a single special symbol or white space enclosed within a pair of single
quote marks
Eg: 'a', '8', " ".

— String constants
String constants are sequence of characters enclosed within double quote marks.
Eg: "Hello", "india", "444"

1.9 VARIABLES
-------------

It is a data name used for storing a data value. Its value may be changed during the program execution. The value of variables keeps on changing during the execution of a program.

1.10 DATA TYPES
---------------

Data type    Size (Bytes)    Range           Format Specifiers

Char            1            – 128 to 127         %c
Unsigned char   1            0 to 255             %c

6    C PROGRAMS  WITH  SOLUTIONS

Short or int    2    – 32,768 to 32, 767           %i or %d
Unsigned int    2    0 to 655355                   %u
Float           4    3.4e – 38 to +3.4e +38        %f or %g
Long            4    = 2147483648 to 2147483647    %ld
Unsigned long   4    0 to 4294967295               %lu
Double          8    1.7e – 308 to 1.7e+308        %lf
Long double    10    3.4e – 4932 to 1.1e+4932      %lf

1.11 OPERATORS
--------------

It indicates an operation to be performed on data that yields value.
Types

Type of Operator                     Symbolic representation

Arithmetic operators                 +, -, *, /, %
Relational operators                 >, <, ==, >=, <=, !=
Logical operators                    &&, ||, !=
Increment and decrement operator     ++ and --
Assignment operator                  =
Bitwise operator                     &, |, ^, >>, <<, ~
Comma operator                       ,
Conditional operator                 ?:

1.12 INPUT AND OUTPUT
---------------------

Reading data from input devices and displaying the results on the screen are the two main tasks of any program.

Formatted Functions
— The formatted input/output functions read and write all types of values

Input                        Output

Scanf()                      printf()

C CONCEPTS    7

Unformatted Functions
— The unformatted input/output functions only work with the charcter data type

Input                               Output

getch()                             putch()
getche()                            putchar()
getchar()                           put()
gets()

1.13 DECISION STATEMENTS
------------------------

It checks the given condition and then executes its sub-block. The decision statement decides the statement to be executed after the success or failure of a given condition.
Types:

1. If statement
2. If-else statement
3. Nested if-else statement
4. Break statement
5. Continue statement
6. Goto statement
7. Switch() statement
8. Nested switch() case
9. Switch() case and Nested if

Statement                           Syntax

If statement                        if (condition)
                                          Statement;

If-else statement                   if (condition)
                                    {
                                         Statement 1;
                                         Statement 2;
                                    }
                                    else
                                    {
                                         Statement 3;
                                         Statement 4;
                                    }

Nested if-else statement            if (condition)
                                    {

8  C PROGRAMS  WITH  SOLUTIONS

                                          Statement 1;
                                          Statement 2;
                                    }
                                    else if (condition)
                                         {
                                              Statement 3;
                                              Statement 4;
                                         }
                                         else
                                         {
                                              Statement 5;
                                              Statement 6;
                                         }

Break statement                     Break;

Continue statement                  Continue;

Goto statement                      goto label;

Switch() statement                  switch (variable or expression)
                                    {
                                         Case constant A:
                                               Statement;
                                               
                                               Break;
                                               
                                         Case constant B:
                                              Statement;
                                              
                                              Break;
                                              
                                         Default:
                                              Statement;
                                    }

1.14 LOOP CONTROL STATEMENTS
----------------------------

Loop is a block of statements which are repeatedly executed for certain number of times.
Types

1. For loop
2. Nested for loops
3. While loop
4. do while loop
5. do-while statement with while loop

C CONCEPTS    9

Statement                        Syntax

For loop                         for(initialize counter; test condition; re-evaluation parameter)
                                 {
                                      Statement;
                                      Statement;
                                 }

Nested for loop                  for(initialize counter; test condition; re-evaluation parameter)
                                 {
                                      Statement;
                                      Statement;
                                      for(initialize counter; test condition; re-evaluation parameter)
                                             Statement;
                                      Statement;
                                 }}

While loop                       While (test condition)
                                 {
                                      Body of the loop
                                 }

Do while loop                    do 
                                 {
                                      Statement;
                                 }
                                 While(condition);

Do-while with while loop         do 
                                       while(condition)
                                       {
                                            Statement;
                                       }
                                 While (condition);

1.15 ARRAYS
-----------

It is a collection of similar data types in which each element is located in separate memory
locations.
Types
    1. One dimensional array
    2. Two dimensional arrays
    3. Three or multi dimensional arrays

10 C PROGRAMS WITH SOLUTIONS

Operations
    1. Insertion
    2. Deletion
    3. Searching
    4. Sorting
    5. Merging

1.16 STRINGS
------------

Character arrays are called strings. Group of characters, digits, symbols enclosed within quotation marks are called as strings.

String Standard Functions

Functions                    Description

strlen()                     Determines the length of a string
strcpy()                     Copies astring from source to destination
strncpy()                    Copies charcters of a string to another string upto the specified length
stricmp()                    Compares characters of two strings
strcmp()                     Compares characters of two strings upto the specified length
strncmp()                    Compares characters of two strings upto the specified length
strnicmp()                   Compares characters of two strings upto the specified length
strlwr()                     Converts uppercase characters of a string to lower case
strupr()                     Converts lowercase characters of a string to upper case
strdup()                     Duplicates a string
strchr()                     Determines the first occurrence of a given character in a string
strrchr()                    Determines the last occurrence of a given character in a string
strstr()                     Determines the first occurrence of a given string in another string
strcat()                     Appends source string to destination string
strrev()                     Reverses all characters of a string
strset()                     Sets all characters of a string with a given argument or symbol
strspn()                     Finds up to what length two strings are identical
strpbrk()                    Searches the first occurrence of the character in a given string and then displays the string starting from that charcter

C CONCEPTS   11

1.17  FUNCTIONS
---------------

It is a self-contained block or a sub program of one or more statements that performs a
special task.

Declaration of functions

    Function_name (argument/parameter)
    Argument declaration;
    {
         Local variable declaration;
         
         Statement1;
         Statement 2;
         
         Return (value);
    }

Call by value
In this type, value of actual arguments is passed to the formal arguments and the operation is
done on the formal arguments. Any change made in the formal argument does not effect the actual
arguments because formal arguments are photo copies of actual arguments.

Call by reference
In this type, instead of passing values, addresses are passed. Function operates on address
rather than values. Here the formal arguments are pointers to the actual argument.

1.18  RECURSION
---------------

A function is called repetitively by itself.

===================================
Chapter  2  INTRODUCTION C PROGRAMS
===================================

1] Program to find sum of two numbers.

#include<stdio.h>
#include<conio.h>      // for clrscr() and getch() function

void main() {
    int a,b,s;
    
    clrscr();

    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    
    s=a+b;
    
    printf("sum=%d",s);
    
    getch();
}

Output:
    Enter two no: 5
    6
    sum=11

2] Program to find area and circumference of circle.

#include<stdio.h>
#include<conio.h>

void main()
{

     int r;
     float pi=3.14, area, ci;

     clrscr();

     printf("enter radius of circle: ");

12    INTRODUCTION  C PROGRAMS

     scanf("%d",&r);

     area=pi*r*r;

     printf("area of circle=%f ",area);

     ci=2*pi*r;

     printf("circumference=%f ",ci);

     getch();
}

Output:
     enter radius of a circle: 5
     area of circle=78.000
     circumference=31.4

3] Program to find the simple interest.

#include<stdio.h>
#include<conio.h>

void main()
{
     int p,r,t,si;

     clrscr();

     printf("enter principle, Rate of interest & time to find simple interest: ");
     scanf("%d%d%d", &p, &r, &t);

     si=(p*r*t)/100;

     printf("simple intrest= %d", si);

     getch();
}

Output:
    enter principle, rate of interest & time to find simple interest: 500
    5
    2
    simple interest=50

4] Program to convert temperature from degree centigrade to Fahrenheit.

#include<stdio.h>
#include<conio.h>

void main()
{

13

14  C PROGRAMS  WITH  SOLUTIONS

     float c,f;

     clrscr();

     printf("enter temp in centigrade: ");

     scanf("%f",&c);

     f=(1.8*c)+32;

     printf("temp in Fahrenheit=%f ",f);
 
     getch();
}

Output:
    enter temp in centigrade: 32
    temp in Fahrenheit=89.59998

5] Program to calculate sum of 5 subjects and find percentage.

#include<stdio.h>
#include<conio.h>

void main()
{
     int s1, s2, s3, s4, s5, sum, total=500;
     float per;

     clrscr();

     printf("enter marks of 5 subjects: ");
     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

     sum=s1+s2+s3+s4+s5;

     printf("sum=%d",sum);

     per=(sum*100)/total;

     printf("percentage=%f",per);

     getch();
}

Output:
    enter marks of 5 subjects: 60
    65
    50
    60
    60
    sum=300
    percentage=60.000

6] Program to show swap of two no's without using third variable.

#include<stdio.h>
#include<conio.h>

INTRODUCTION  C PROGRAMS 15

void main()
{
     int a,b;
     
     clrscr();

     printf("enter value for a & b: ");
     scanf("%d%d",&a,&b);
     
     a=a+b;
     b=a-b;
     a=a-b;
     
     printf("after swapping the value of a & b: %d %d",a,b);
     
     getch();
}

Output:
    enter value for a & b: 4 5
    after swapping the value of a & b: 5 4

7] Program to reverse a given number.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n, a, r=0;
     
     clrscr();

     printf("enter any no to get its reverse: ");
     scanf("%d",&n);

     while(n>=1)
     {
          a=n%10;
          r=r*10+a;
          n=n/10;
     }
     
     printf("reverse=%d",r);
     
     getch();
}

Output:
    enter any no to get its reverse: 456
    reverse=654

16 C PROGRAMS WITH SOLUTIONS

8] Program to find gross salary.

#include<stdio.h>
#include<conio.h>

void main()
{
     int gs, bs, da, ta;

     clrscr();
     
     printf("enter basic salary: ");
     scanf("%d",&bs);
     
     da=(10*bs)/100;
     ta=(12*bs)/100;
     gs=bs+da+ta;
     
     printf("gross salary=%d",gs);
     
     getch();
}

Output:
    enter basic salary: 100
    gross salary=122

9] Program to print a table of any number.

#include<stdio.h>
#include<conio.h>

void main()
{
     int gs, bs, da, ta;

     clrscr();

     printf("enter basic salary: ");
     scanf("%d",&bs);

     da=(10*bs)/100;
     ta=(12*bs)/100;
     gs=bs+da+ta;

     printf("gross salary=%d",gs);

     getch();
}

Output:
    enter a no to know table: 2
    2*1=2

INTRODUCTION  C PROGRAMS

    2*2=4
    2*3=6
    2*4=8
    2*5=10
    2*6=12
    2*7=14
    2*8=16
    2*9=18
    2*10=20

10] Program to find greatest in 3 numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, b, c;

     clrscr();

     printf("enter value of a, b & c: ");
     scanf("%d%d%d",&a,&b,&c);

     if((a>b)&&(a>c))
           printf("a is greatest");
           
     if((b>c)&&(b>a))
           printf("b is greatest");
           
     if((c>a)&&(c>b))
           printf("c is greatest");

     getch();
}

Output:
    enter value for a, b& c: 5
    7
    4
    b is greatest

11] Program to show the use of conditional operator.

#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    
    printf("enter value for a & b: ");

17

18 C PROGRAMS WITH SOLUTIONS

     scanf("%d%d",&a,&b);
     (a>b)?printf("a is greater"):printf("b is greater");

     getch();
}

Output:
    enter value for a & b: 5
    7
    b is greater

12] Program to find that entered year is leap year or not.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n;
     
     clrscr();
     
     printf("enter any year: ");
     scanf("%d",&n);
     
     if(n%4==0)
           printf("year is a leap year");
     else
             printf("year is not a leap year");

     getch();
}

Output:
    enter any year: 1947
    year is not a leap year

13] Program to find whether given no. is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n;

     clrscr();

     printf("enter any no: ");
     scanf("%d",&n);

     if(n%2==0)
           printf("no is even");
     else

INTRODUCTION  C PROGRAMS   19

             printf("no is odd");

     getch();
}

Output:
    enter any no: 5
    no is odd

14] Program to shift inputed data by two bits to the left.

#include<stdio.h>
#include<conio.h>

void main()
{
     int x,y;

     clrscr();

     printf("Read the integer from keyboard :- ");
     scanf("%d",&x);

     x<<=3;
     y=x;

     printf("\nThe left shifted data is = %d ",y);

     getch();
}

Output:
    Read the integer from keyboard :- 2
    The left shifted data is = 16

15] Program to use switch statement. Display Monday to Sunday.

#include<stdio.h>
#include<conio.h>

void main()
{
     char ch;

     clrscr();

     printf("enter m for Monday\nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday);
     scanf("%c",&ch);

     switch(ch)
     {
          case 'm':

20 C PROGRAMS WITH SOLUTIONS

          case 'M':
                  printf("monday");
          break;

          case 't':
          case 'T':
                  printf("tuesday");
          break;

          case 'w':
          case 'W':
                  printf("wednesday");
          break;

          case 'h':
          case 'H':
                  printf("thursday");
          break;

          case 'f ':
          case 'F':
                  printf("friday");
          break;

          case 's':
          case 'S':
                  printf("saturday");
          break;

          case 'u':
          case 'U':
                  printf("sunday");
          break;

          default :
                     printf("wrong input");
          break;
     }

     getch();
}

Output:
    enter m for Monday
    t for Tuesday

INTRODUCTION C PROGRAMS

    w for Wednesday
    h for Thursday
    f for Friday
    s for Saturday
    u for Sunday: f
    friday

16] Program to display arithmetic operator using switch case.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, b, n, s, m, su, d;

     clrscr();

     printf("enter two no's : ");
     scanf("%d%d",&a,&b);

     printf("enter 1 for sum\n2 for multiply\n3for subtraction\n4 for division: ");
     scanf("%d",&n);

switch(n)
{
     case 1:
             s=a+b;
             printf("sum=%d",s);
     break;

     case 2:
             m=a*b;
             printf("multiply=%d",m);
     break;

     case 3:
             su=a-b;
             printf("subtraction=%d",su);
     break;

     case 4:
             d=a/b;
             printf("divission=%d",d);
     break;

21

22 C PROGRAMS WITH SOLUTIONS

     default:
                printf("wrong input");
     break;
     }

     getch();
}

Output:
    enter two no's: 8
    4
    enter 1 for sum
    2 for multiply
    3 for subtraction
    4 for division: 1
    sum=12

17] Program to display first 10 natural no. & their sum.

#include<stdio.h>
#include<conio.h>

void main()
{
     int i, sum=0;

     clrscr();

     for(i=1;i<=10;i++)
     {
          printf("%d no is= %d\n",i,I);
          sum=sum+i;
     }

     printf("sum =%d",sum);

     getch();
}

Output:
     1 no is=1
     2 no is=2
     3 no is=3
     4 no is=4
     5 no is=5

INTRODUCTION C PROGRAMS

6 no is=6
7 no is=7
8 no is=8
9 no is=9
10 no is=10
sum=55

18] Program to print stars Sequence 1:

#include<stdio.h>
#include<conio.h>

void main()
{
     int i, j;

     clrscr();

     for(i=1;i<=5;i++)
     {
          for(j=1;j<=i;j++)
                 printf("*");

          printf("\n");
     }

     getch();
}

Output:
     *
     **
     ***
     ****
     *****

19] Program to print stars Sequence 2.

#include<stdio.h>
#include<conio.h>

void main()
{
     int i, j, k;

     clrscr();

     for(i=1;i<=5;i++)

23

24 C PROGRAMS WITH SOLUTIONS

     {
          for(j=5; j>=i; j--)
                 printf(" ");

          for(k=1; k<=i; k++)
                 printf("*");

          printf("\n");
     }

     getch();
}

Output:
     *
     **
     ***
     ****
     *****

20] Program to print stars Sequence 3.

#include<stdio.h>
#include<conio.h>

void main()
{
     int i,j,k;

     clrscr();

     for(i=1;i<=3;i++)
     {
          for(j=3;j>=i;j--)
                 printf(" ");
          {
               for(k=1;k<=i*2-1;k++)
                      printf("*");
          }

          printf("\n");
      }

      getch();
}

INTRODUCTION C PROGRAMS

Output:
     *
     ***
     *****

21] Program to print Fibonacci series up to 100.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a=1, b=1, c=0, i;
     
     clrscr();
     
     printf("%d\t%d\t",a,b);
     
     for(i=0;i<=10;i++)
     {
          c=a+b;
          
          if(c<100)
          {
               printf("%d\t",c);
          }
          
          a=b;
          b=c;
     }
     
     getch();
}

Output:
    1 1 2 3 5 8 13 21 34 55 89

22] Program to find factorial of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n,i,fact=1;
     
     clrscr();
     
     printf("Enter any no: ");
     scanf("%d",&n);

25

26 C PROGRAMS WITH SOLUTIONS

     for(i=n;i>=1;i--)
     {
         fact=fact*i;
     }

     printf("Factorial=%d",fact);

     getch();
}

Output:
    Enter a no: 5
    Factorial=120

23] Program to find whether given no. is a prime no. or not.

#include<stdio.h>
#include<conio.h>

void main()
{
     int i,n,r=0;

     clrscr();

     printf("Enter any no: ");
     scanf("%d",&n);

     for(i=2;i<=n-1;i++)
     {
          if(n%i==0)
                r=1;
          break;
     }
     
     if(r==0)
           printf("prime no");
     else
             printf("Not prime");

     getch();
}

Output:
    Enter any no: 16
    Not prime

INTRODUCTION C PROGRAMS  27

24] Program to display sum of series 1+1/2+1/3+……….+1/n.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n,i,sum=0;

     clrscr();

     printf("Enter any no: ");
     scanf("%d",&n);

     printf("1");

     for(i=2;i<=n-1;i++)
            printf(" 1/%d +",i);
            
     for(i=1;i<=n;i++)
            sum=sum+i;
            
     printf(" 1/%d",n);
     printf("\nSum=1/%d",sum+1/n);

     getch();
}

Output:
    Enter any no: 7
    1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7
    Sum=1/28

25] Program to display series and find sum of 1+3+5+……..+n.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n, i, sum=0;

     clrscr();

     printf("Enter any no: ");
     scanf("%d",&n);
     
     for(i=1;i<n;i=i+2)
     {
          printf("%d+",i);
          sum=sum+i;

28  C PROGRAMS  WITH  SOLUTIONS

     }
      
     printf("%d",n);
     printf("\nsum=%d",sum+n);

     getch();
}

Output:
    Enter any no: 7
    1+3+5+7
    Sum=16

26] Program to use bitwise AND operator between the two integers.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, b, c;
     
     clrscr();

     printf("Read the integers from keyboard:- ");
     scanf("%d %d",&a,&b);

     c=a&b;

     printf("\nThe Answer after ANDing is: %d ",c);

     getch();
}

Output:
    Read the integers from keyboard:- 8 4
    The Answer after ANDing is: 0

27] Program to add two number using pointers.

#include<stdio.h>
#include<conio.h>

void main()
{
     int *p1, *p2, sum;

     clrscr();

     printf("enter two no's: ");
     scanf("%d%d",&*p1,&*p2);

     sum=*p1+*p2;

INTRODUCTION C PROGRAMS  29

     printf("sum=%d",sum);
     
     getch();
}

Output:
    enter two no's: 10
    20
    sum=30

28] Program to add two number using pointers.

#include<stdio.h>
#include<conio.h>

void main()
{
     int *p1,*p2,sum;

     clrscr();

     printf("enter two no's: ");
     scanf("%d%d",&*p1,&*p2);
     
     sum=*p1+*p2;
     
     printf("sum=%d",sum);
     
     getch();
}

Output:
    enter two no's: 10 
    20
    sum=30

29] Program to show sum of 10 elements of array & show the average.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[10], i, sum=0;
     float av;
     
     clrscr();
     
     printf("enter elements of an aaray: ");
     
     for(i=0;i<10;i++)
     
     scanf("%d",&a[i]);

30  C PROGRAMS WITH SOLUTIONS

     for(i=0;i<10;i++)
            sum=sum+a[i];

     printf("sum=%d",sum);
     
     av=sum/10;
     
     printf("average=%.2f",av);
     
     getch();
}

Output:
    enter elements of an array: 4
    5
    6
    1
    2
    3
    5
    5
    4
    7
    sum=42
    average=4.22

30] Program to find the maximum no. in an array.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[5], max, i;
     
     clrscr();
     
     printf("enter element for the array: ");
     
     for(i=0; i<5; i++)
            scanf("%d", &a[i]);
            
     max=a[0];

     for(i=1;i<5;i++)
     {
          if(max<a[i])
                max=a[i];

INTRODUCTION C PROGRAMS

     }
     
     printf("maximum no= %d",max);
     
     getch();
}

Output:
    enter elements for array: 5
    4
    7
    1
    2
    maximum no= 7

31] Program to display a matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[3][2], b[3][2], i, j;

     clrscr();

     printf("enter value for a matrix: ");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf("%d",&a[i][j]);
     }

     printf("enter value for b matrix: ");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf("%d",&b[i][j]);
          }
          
      printf("\na matrix is\n\n");
      
      for(i=0;i<3;i++)
      {
           for(j=0;j<2;j++)

31

32  C PROGRAMS WITH SOLUTIONS

           {
                printf(" %d ",a[i][j]);
           }
           
           printf("\n");
      }
      
      printf("\nb matrix is\n\n");

      for(i=0;i<3;i++)
      {
           for(j=0;j<2;j++)
           {
                printf(" %d ",b[i][j]);
           }
           
           printf("\n");
       }
       
       getch();
}

Output:
    enter value for a matrix: 7
    8
    9
    4
    5
    6
    enter value for b matrix: 3
    2
    1
    4
    5
    6
    a matrix is
    7 8
    9 4
    5 6

INTRODUCTION C PROGRAMS  33

    b matrix is
    3  2
    1  4
    5  6

32] Program to find sum of two matrices.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[3][2],b[3][2],c[3][2],i,j;
     
     clrscr();
     
     printf("Enter value for 1 matrix: ");
     
     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf("%d",&a[i][j]);
     }
     
     printf("Enter value for 2 matrix: ");
     
     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf("%d",&b[i][j]);
      }
      
      for(i=0;i<3;i++)
      {
           for(j=0;j<2;j++)
                  c[i][j]=a[i][j]+b[i][j];
      }
      
      printf("Sum of matrix is\n");
      
      for(i=0;i<3;i++)
      {
           for(j=0;j<2;j++)
           {
                printf("%d\t",c[i][j]);
           }

34 C PROGRAMS WITH SOLUTIONS

           printf("\n");
           }
           
      getch();
}

Output:
    Enter value for 1 matrix: 1
    2
    3
    4
    5
    6
    Enter value for 2 matrix: 4 
    5
    6
    1
    3
    2
    Sum of matrix is
    5  7
    9  5
    8  8

33] Program to find subtraction of two matrices.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[5], b[5], c[5], i;

     clrscr();

     printf("enter value for array a ");

     for(i=0;i<5;i++)
            scanf("%d",&a[i]);
            
     printf("enter value for array b ");

     for(i=0;i<5;i++)
            scanf("%d",&b[i]);
            
     for(i=0;i<5;i++)

INTRODUCTION C PROGRAMS 35

            c[i]=a[i]-b[i];
            
     printf("subtraction");
     
     for(i=0;i<5;i++)
            printf(" %d ",c[i]);

     getch();
}

Output:
    enter value for array a: 7
    8
    9
    4
    5
    enter value for array b: 4
    5
    6
    1
    2
    subtraction 3 3 3 3 3

34] Program to find multiplication of two matrices.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[3][2], b[3][2], c[3][2], i, j;

     clrscr();

     printf("enter value for 1 matrix: ");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf("%d",&a[i][j]);
     }

     printf("enter value for 2 matrix: ");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)

36 C PROGRAMS WITH SOLUTIONS

          scanf("%d",&b[i][j]);
     }
     
     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 c[i][j]=a[i][j]*b[i][j];
     }

     printf("matrix is\n");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
          {
               printf(" %d ",c[i][j]);
          }

     printf("\n");
     }

     getch();
}

Output:
    enter value for 1 matrix: 7
    8
    9
    4
    5
    6
    enter value for 2 matrix: 3
    2
    1
    2
    5
    6
    matrix is
    21 16
    9   8
    25 36

INTRODUCTION C PROGRAMS

35] Program to find transpose of a matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[3][2], b[2][3], i, j;

     clrscr();

     printf("Enter value for matrix: ");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 scanf('%d",&a[i][j]);
     }

     printf("Matrix:\n");

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 printf(" %d ",a[i][j]);
   
          printf("\n");
     }

     for(i=0;i<3;i++)
     {
          for(j=0;j<2;j++)
                 b[j][i]=a[i][j];
     }

     printf("Transpose matrix:\n");
 
     for(i=0;i<2;i++)
     {
         for(j=0;j<3;j++)
                printf(" %d ",b[i][j]);

          printf("\n");
     }
     
     getch();
}

37

38 C PROGRAMS WITH SOLUTIONS

Output:
    Enter value for matrix: 4
    5
    6
    1
    2
    3
    Matrix:
    45
    61
    23
    Transpose matrix:
    462
    513

36] Program to find the maximum number in array using pointer.

#include<stdio.h>
#include<conio.h>

void main()
{
     int max, i, *a[5];
     
     clrscr();

     printf("enter element for the array: ");

     for(i=0;i<5;i++)
            scanf("%d",&*a[i]);

     max=*a[0];

     for(i=1;i<5;i++)
     {
          if(max<*a[i])
                max=*a[i];
     }

     printf("maximum no= %d",max);

     getch();
}

INTRODUCTION C PROGRAMS
Output:
    enter elements for array: 5
    4
    7
    1
    2
    maximum no= 7

37] Program to show input and output of a string.

#include<stdio.h>
#include<conio.h>

void main()
{
     char a[50];

     clrscr();
     
     printf("enter any string: ");

     gets(a);
     
     puts(a);

     getch();
}

Output:
    enter any string: hi everyone
    hi everyone

38] Program to find square of a number using functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     int rev(int);
     int r, a;

     clrscr();

     printf("enter any no: ");

     scanf("%d",&a);

     r=rev(a);

     printf("square is : %d",r);

39

40 C PROGRAMS WITH SOLUTIONS

     getch();
}

int rev(int x)
{
     return(x*x);
}

Output:
    enter any no: 5
    square is : 25

39] Program to swap two numbers using functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     void swap(int,int);

     int a, b, r;

     clrscr();

     printf("enter value for a&b: ");
     
     scanf("%d%d",&a,&b);
     
     swap(a,b);

     getch();
}

void swap(int a,int b)
{
     int temp;
     
     temp=a;
     a=b;
     b=temp;

     printf("after swapping the value for a & b is : %d %d",a,b);
}

Output:
    enter value for a&b: 4
    5
    after swapping the value for a & b : 5 4

INTRODUCTION C PROGRAMS

40] Program to find factorial of a number using functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, f;

     int fact(int);

     clrscr();

     printf("enter a no: ");

     scanf("%d",&a);

     f=fact(a);

     printf("factorial= %d",f);

     getch();
}

int fact(int x)
{
     int fac=1, i;

     for(i=x; i>=1; i--)
            fac=fac*i;
            
     return(fac);
}

Output:
    enter a no: 5
    factorial=120

41] Program to show table of a number using functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     void table();

     clrscr();

     table();

     getch();
}

41

42 C PROGRAMS WITH SOLUTIONS

void table()
{
     int n, i, r;
     
     printf("enter a no to know table: ");

     scanf("%d",&n);

     for(i=1;i<=10;i++)
     {
          r=n*i;

          printf("%d*%d=%d\n",n,i,r);
     }
}

Output:
    enter a no to know table: 2
    2*1=2
    2*2=4
    2*3=6
    2*4=8
    2*5=10
    2*6=12
    2*7=14
    2*8=16
    2*9=18
    2*10=20

42] Program to show call by value.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, b, swap();

     clrscr();

     a=5;
     b=10;

     printf("value of a=%d & value of b=%d before swap ",a,b);

     swap(a,b);

INTRODUCTION C PROGRAMS

     printf("\nvalue of a =%d & b=%d after swap",a,b);

     getch();
}

int swap(int x,int y)
{
     int temp;

     temp=x;
     x=y;
     y=temp;
}

Output:
    value of a=5 & value of b=10 before swap
    value of a=5 & b=10 after swap

43] Program to show call by reference.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a, b, *aa, *bb, swap();

     clrscr();

     a=5;
     b=10;
     
     aa=&a;
     bb=&b;

     printf("value of a= %d & value of b=%d before swap",a,b);

     swap(aa,bb);

     printf("\nvalue of a=%d & b=%d after swap",a,b);

     getch();
}

int swap(int *x,int *y)
{
     int temp;
     
     temp=*x;

43

44 C PROGRAMS WITH SOLUTIONS

     *x=*y;
     *y=temp;
}

Output:
    value of a= 5 & value of b=10 before swap
    value of a=10 & b=5 after swap

44] Program to find largest of two numbers using functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     void max();

     clrscr();

     max();

     getch();
}

void max()
{
     int a[5], max, n, i;

     printf("How many no's you want to enter: ");

     scanf("%d",&n);

     printf("Enter element for the array: ");

     for(i=0;i<n;i++)
            scanf("%d",&a[i]);

     max=a[0];

     for(i=1;i<5;i++)
     {
          if(max<a[i])
                max=a[i];
     }
    
     printf("maximum no= %d",max);
}

INTRODUCTION C PROGRAMS

Output:
    How many no's you want to enter: 4
    Enter element for array: 4
    5
    6
    1
    maximum no: 6

45] Program to find factorial of a number using recursion.

#include<stdio.h>
#include<conio.h>

void main()
{
     int n;

     clrscr();

     printf("enter number: ");
     scanf("%d",&n);

     if(n<0)
           printf("invalid number");
     else

     printf("%d!=%d",n,fact(n));

     getch();
}

int fact(int x)
{
     if(x==0)
           return 1;
     else
             return(x*fact(x-1));
}

Output:
    enter number: 5
    5!=120

46] Program to find whether a string is palindrome or not.

#include<stdio.h>
#include<conio.h>

45

46 C PROGRAMS WITH SOLUTIONS

void main()
{
     char s1[20], s2[20];

     clrscr();

     printf("enter a string: ");
     scanf("%s",s1);

     strcpy(s2,s1);
     strrev(s2);

     if(strcmp(s1,s2)==0)
           printf("string is a palindrome");
     else
             printf("not a palindrome string");

     getch();
}

Output:
    enter a string: abc
    not a palindrome string

47. File Operations

#include<stdio.h>
#include<conio.h>

void main()
{
     file *fp, *fp1;
     char c;

     clrscr();

     fp=fopen("test.c","w");

     printf("\nenter the contents for file1(#.end)\n");

     c=getchar();

     while(c!='#')
     {
          fputc(c,fp);
          c=getchar();
     }

     rewind(fp);

     fp=fopen("test.c","r");

INTRODUCTION C PROGRAMS

     fp1=fopen("tes.c","w");

     c=fgetc(fp);

     while(c!=eof)
     {
          fputc(c,fp);

          c=fgetc(fp);
     }
     
     fclose(fp);

     fclose(fp1);

     fp1=fopen("tes.c","r");
     c=fgetc(fp1);

     printf("\nthe contents in file 2\n");

     while(c!=eof)
     {
          putchar(c);
          c=fgetc(fp1);
     }
     
     fclose(fp1);

     getch();
}

Output:
    enter the contents of file1(#-end)
    good morning#
    the contents of file2
    good morning

48. Merging One Dimensional Array – Excluding The Repeating Element

#include<stdio.h>
#include<conio.h>

void main()
{
     int a[50], b[50], n1, n2, i, x;

     clrscr();

     printf("enter the number of elements in the first array");
     scanf("%d",&n1);

     printf("enter the elements\n");

47

48 C PROGRAMS WITH SOLUTIONS

     for(i=0;i<n1;i++)
     {
          printf("enter a[%d]",i+1);
          scanf("%d",&a[i]);
     }
     
     printf("enter the number of elements in the second array");
     scanf("%d",&n2);

     printf("enter the elements\n");
     
     for(i=0;i<n2;i++)
     {
          printf("enter b[%d]",i+1);
          scanf("%d",&b[i]);
     }

     for(x=0;x<n1;x++)
     {
          for(i=0;i<n2;i++)
          {
               if(b[i]==a[x])
               {
                    b[i]=' ';
               }
          }
     }
     
     for(i=o;i<n1;i++)
     {
          printf("%d",a[i]);
     }
     
     for(i=0;i<n2;i++)
     {
          if(b[i]==' ';)
                continue;
          else
                  printf("%d",b[i]);
     }
     
     getch();
}

INTRODUCTION C PROGRAMS

Output:
    Enter the number of elements in the first array
    3
    Enter the elements
    3
    5
    7
    Enter the number of elements in the first array
    3
    Enter the elements
    2
    5
    9
    3 5 7 2 9

49. Number Of Occurrences Of Vowels, Consonants, Words, Spaces And Special Characters In The Given Statement.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
     char s[100];
     int vow=0, cons=0, spc=0, punc=0, l, i;
     
     clrscr();
     
     printf("enter the statement\n");
     
     gets(s);
     
     l=strlen(s);
     
     for(i=0;i<l;i++)
     {
          if(isalpha(s[i]))
          {
               if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
               {

49

50 C PROGRAMS WITH SOLUTIONS

                    vow++;
               }
               else
               {
                    cons++;
               }
          }

          if(isspace(s[i])
          {
               spc++;
          }
          
          if(ispunct(s[i]))
          {
               punc++;
          }
     }
     
     printf("\nno.of words=%d",spc+1);
     printf("\nno.of vowels=%d",vow);
     printf("\nno.of consonants=%d",cons);
     printf("\nno.of space=%d",spc);
     printf("\nno.on special characters=%d",punc);
     
     getch();
}

Output:
    Enter the statement
    *Nothing is impossible in the world.
    No.of words=6
    No.of vowels=10
    No.of consonants=19
    No.of space=5
    No.of special characters=1

INTRODUCTION C PROGRAMS

50. Write a program to create enumerated data type for 12 months. Display their values in integer constants.

#include<stdio.h>
#include<conio.h>

void main()
{
     Enum month(Jan, Feb, Mar, Apr, May, June, July, Aug,Sep, Oct, Nov, Dec)
     
     clrscr();

     printf("Jan=%d", Jan);
     printf("Feb=%d", Feb);
     printf("June=%d", June);
     printf("Dec=%d", Dec);
}

Output:
    Jan =0
    Feb=1
    June=5
    Dec=11

51  

==================================
Chapter 3  FUNDAMENTALS C PROGRAMS
==================================

1. A program to evaluate the equation y=xn when n is a non-negative integer.

#include<stdio.h>
#include<conio.h>

void main()
{
     int count, n;
     float x,y;
     
     printf("Enter the values of x and n:");
     scanf("%f%d", &x,&n);
     
     y=1.0;
     count=1;
     
     while(count<=n)
     {
          y=y*x;
          count++;
     }
     
     printf("x=%f; n=%d; x to power n=%f", x, n,y);
}

Output:
Enter the values of x and n: 2.5 4
X=2.500000; n=4; x to power n= 39.062500

2. A program to print the multiplication table from 1*1 to 12*10.

#include<stdio.h>
#include<conio.h>

52 FUNDAMENTALS  C PROGRAMS

#define COLMAX 10
#define ROWMAX 12

void main()
{
     int row, column, y;
     row=1;
     
     printf("MULTIPLICATION TABLE ");
     printf("----------------------------------------");
do
{
     column=1;
     
     do
     {
          y=row*column;
          
          printf("%d", y);
          
          column=column +1;
     }
     
     while(column<=COLMAX);
     
     printf("\n");
     
     row=row+1;
     }
while(row<=ROWMAX);
printf("---------------------------------------------")
}

Output:
MULTIPLICATION TABLE
------------------------------------------------------------------------------------------1
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 12 14 16 18 20 
3 6 9 12 15 18 21 24 27 30 
4 8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50
6 12 18 24 30 36 42 48 54 60
7 14 21 28 35 42 49 56 63 70
8 16 24 32 40 48 56 64 72 80

53 54 C PROGRAMS WITH SOLUTIONS

9 18 27 36 45 54 63 72 81 90
10 20 30 40 50 60 70 80 90 100
11 22 33 44 55 66 77 88 99 110
12 24 36 48 60 72 84 96 108 120

3. Program uses a for loop to print the powers of 2 table for the power 0 to 20, both positive and negative.

#include<stdio.h>
#include<conio.h>

void main()
{
     long int p;
     int n;
     double q;
     
     printf("------------------------------------------------------------");
     printf(" 2 to powern    n    2 to power -n");
     printf("------------------------------------------------------------");
     
     p=1;

     for(n=0; n<21; ++n)
     {
          if(n==0)
               P=1;
          else
               p=p*2;
               q=1.0/(double)p;
               
               printf("10ld 10%d %20.12lf", p,n,q);
     }
     
     printf("---------------------------------------------");
}

Output:
--------------------------------------------------------
2 to power n              n               2 to power -n
--------------------------------------------------------
           1              0         1.000000000000
           2              1         0.500000000000

FUNDAMENTALS  C PROGRAMS    55

      4       2    0.250000000000
      8       3    0.125000000000
     16       4    0.062500000000
     32       5    0.031250000000
     64       6    0.015625000000
    128       7    0.007812500000
    256       8    0.003906250000
    512       9    0.001953125000
   1024      10    0.000976562500
   2048      11    0.000488281250
   4096      12    0.000244140625
   8192      13    0.000122070313
  16384      14    0.000061035156
  32768      15    0.000030517578
  65536      16    0.000015258789
 131072      17    0.000007629395
 262144      18    0.000003814697
 524288      19    0.000001907349
 1048576     20    0.000000953674

4. A class of n students take an annual examination in m subjects. A program to read the marks
obtained by each student in various subjects and to compute and print the total marks obtained
by each of them.

#include<stdio.h>
#include<conio.h>

#define FIRST 360
#define SECOND 240

void main()
{
     int n, m, i, j, roll number, marks, total;
     
     printf("Enter number of students and subjects");
     scanf("%d%d", &n,&m);
     printf("\n");
     
     for(i=1; i<=n; ++i)
     {
          printf("Enter roll number:");

56 C PROGRAMS WITH SOLUTIONS

     scanf("%d", &roll_number);
     
     total=0;
     
     printf("Enter marks of %d subjects for ROLL NO", m, roll number);
     
     for(j=1; j<=m; j++)
     {
          scanf("%d", &marks);
          
          total=total+marks;
     }

     printf("TOTAL MARKS =%d", total);

     if(total>=FIRST)
           printf("(First division)");
     else if (total>=SECOND)
                printf("(Second division)");
          else
                  printf("(***FAIL***)");
     }
}

Output:
Enter number of students and subjects
36
Enter roll_number: 8701
Enter marks of 6 subjects for ROLL NO 8701
81 75 83 45 61 59
TOTAL MARKS =404 (First division)
Enter roll_number:8702
Enter marks of 6 subjects for ROLL NO 8702
51 49 55 47 65 41
TOTAL MARKS =308(Second division)
Enter roll_number: 8704
40 19 31 47 39 25
TOTAL MARKS=201(*** FAIL ***)

5. The program illustrates the use of the break statement in a C program.

#include<stdio.h>
#include<conio.h>

void main()

FUNDAMENTALS  C PROGRAMS

{
     int m;
     float x, sum, average;

     printf("This program computes the average of a set of computers");
     printf("Enter values one after another");
     printf("Enter a NEGATIVE number at the end");
     
     sum=0;
     
     for(m=1;m<=1000; ++m)
     {
          scanf("%f",&x);
          
          if(x<0)
                break;

                sum+=x;
     }
     
     average=sum/(float)(m-1);

     printf("\n");
     printf("Number of values =%d",m-1);
     printf("Sum=%f", sum);
     printf("Average=%f", average);
}

Output:
This program computes the average of a set of numbers
Enter values one after another
Enter a NEGATIVE number at the end
21 23 24 22 26 22 -1
Number of values =6
Sum= 138.000000
Average=23.000000

6. A program to evaluate the series 1/1-x= 1+x+x2 +x3 +.....+xn.

#include<stdio.h>
#include<conio.h>

#define LOOP 100
#define ACCURACY 0.0001

void main()
{

57

58 C PROGRAMS WITH  SOLUTIONS

     int n;
     float x, term, sum;
     
     printf("input value of x :");
     scanf("%f", &x);

     sum=0;

     for(term=1, n=1; n<=LOOP; ++n)
     {
          sum+=term;
          
          if(term<=ACCURACY)
              goto output;
              
          term*=x;
     }
     
     printf("FINAL VALUE OF N IS NOT SUFFICIENT TO ACHIEVE DESIRED ACCURACY");
     
     goto end;
     
     output:
                printf("EXIT FROM LOOP");
                printf("sum=%f; no. of terms=%d", sum,n);
     end:
     ;
}

Output:
Input value of x: .21
EXIT FROM LOOP
Sum=1.265800; No. of terms=7
Input value of x: .75
EXIT FROM LOOP
Sum=3.999774; No. of terms=34
Input value of x:.99
FINAL VALUE OF N IS NOT SUFFICIENT TO ACHIEVE DESIRED ACCURACY

7. Program illustrates the use of continue statement.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

FUNDAMENTALS  C PROGRAMS

{
     int count, negative;
     double number, sqroot;

     printf("enter 9999 to STOP");
     
     count=0;
     negative=0;

     while(count<=100)
     {
          printf("enter a number:");
          scanf("%lf", &number);
          
          if(number==9999)
                break;
           
          if(number<0)
          {
               printf("Number is negative ");
               negative++;
               continue;
          }
     
          sqroot=sqrt(number);
     
          printf("Number=%lf square root=%lf ", number, sqroot);
     
          count++;
    }
    
    printf("Number of items done =%d", count);
    printf("Negative items=%d", negative);
    printf("END OF DATA");
}

Output:
Enter 9999 to STOP
Enter a number: 25.0
Number=25.000000
Square root =5.000000
Enter a number: 40.5
Number =40.500000
Square root=6.363961
Enter a number:-9

59

60 C PROGRAMS WITH SOLUTIONS

Number is negative
Enter a number: 16
Number= 16.000000
Square root=4.000000
Enter a number: -14.75
Number is negative
Enter a number: 80
Number=80.000000
Square root=8.944272

Enter a number: 9999
Number of items done=4
Negative items=2
END OF DATA

8. Program to print binomial coefficient table.

#include<stdio.h>
#include<conio.h>

#define MAX 10

void main()
{
     int m, x, binom;
     
     printf("m x");
     
     for (m=0; m<=10; ++m)
            printf("----------------------------------------------------------");
            
            m=0;
            
            do
            {
                 printf("%2d", m);
                 
                 X=0; biom=1;
                 
                 while(x<=m)
                 {
                      if(m= =0 || x= =0)
                            printf("%4d", binom);
                      else
                      
FUNDAMENTALS  C PROGRAMS

                      {
                           binom=binom* (m-x+1)/x;
                           
                           printf("%4d", binom);
                      }
                      x=x+1;
                  }
                  printf("\n");
                  M=m+1'
               }
               while(m<=MAX);
                        printf("-------------------------------------------------------");
}

Output:
Mx    0    1    2    3    4    5    6    7    8    9    
-------------------------------------------------------
0     1    
0     1    1
2     1    2    1
3     1    3    3    1
4     1    4    6    4    1    
5     1    5   10   10    5    1
6     1    6   15   20   15    6    1
7     1    7   21   35   35   21    7    1
8     1    8   28   56   70   56   28    8    1
9     1    9   36   84  126  126   84   36    9    1
10    1   10   45  120  210  252  210  120   45   10    1

9. Program to draw a histogram.

#include<stdio.h>
#include<conio.h>

#define N 5

void main()
{
     int value[N];
     int i, j, n, x;
     
     for(n=0; n<N; ++n)
     {

61

62  C PROGRAMS WITH SOLUTIONS

          printf("enter employees in group-%d: ", n+1);
          scanf("%d", &x);
          
          value[n]=x;
          
          printf("%d", value[n]);
    }
    
    printf("\n");
    printf("|\n");
    
    for(n=0; n<N; ++n)
    {
        for(i=1; i<=3; i++)
        {
             if(i= =2)
                   printf(" Group-%d | ", n+1);
             else
                     printf("|");
                     
             for(j=1; j<=value[n]; ++j)
                    printf("*");

                    if(i= =2)
                          printf("(%d)", value[n]);
                    else
                            printf("\n");
         }
         printf("|\n");
    }
}

Output:
Enter employees in Group -1:12
12
Enter employees in Group -2:23
23
Enter employees in Group -3:35
35
Enter employees in Group -4:20
20

FUNDAMENTALS  C PROGRAMS

Enter employees in Group -5:11
11

        |
        |************
Group-1 |************ (12)
        |************
        |
        |***********************
Group-2 |***********************(23)
        |***********************
        |
        |***********************************
Group-3 |***********************************(35)
        |***********************************
        |
        |********************
Group-4 |********************(20)
        |********************
        |
        |***********
Group-5 |***********(11)
        |***********
        |

10. Program of minimum cost problem.

#include<stdio.h>
#include<conio.h>

void main()
{
     float p, cost, p1, cost1;

     for(p=0; p<=10; p=p+0.1)
     {
          cost=40-8*p+p*p;
          
          if(p==0)

63

64 C PROGRAMS WITH SOLUTIONS

           {
                cost1=cost;
                continue;
           }
           
           if(cost>=cost1)
                 break;
                 cost1=cost;
                 p1=p;
        }
        p=(p+p1)/2.0;
        cost=40-8&p+p*p;
        
        printf("MINIMUM COST=%.2f AT p=%.1f", cost, p);
}

Output:
MINIMUM COST = 24.00 AT p=4.0

11. Program for plotting of two functions (y1=exp(-ax); y2=exp(-ax2 /2)).

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
     int i;
     float a, x, y1, y2;
     
     a=0.4;
     
     printf("                Y------->                ");
     printf("0---------------------------------------------------------------------");

     for(x=0; x<5; x=x+0.25)
        y1=(int) (50*exp(-a*x)+0.25);
        y2=(int) (50*exp(-a*x*x/2)+0.5);
        
        if(y1==2)
        {
             if(x== 2.5)

FUNDAMENTALS  C PROGRAMS

                   printf("X |");
             else
                     printf("|");
                     
        for(i=1; i<=y1-1; ++i)
               printf("");
                            
        printf("#");
          
        continue;
        }

        if(y1>y2)
        {
             if(x= =2.5)
                   printf("X |");
             else
                     printf("|");
              
             for(i=1; i<=y2-1; ++i)
                    printf(" ");
                    printf("*");
                     
             for(i=1; i<=(y1-y2-1); ++i)
                    printf("_");
                    printf("0");
                     
             continue;
         }

          if(x==2.5)
                printf("X|");
          else
                  printf(" |");

          for(i=1; i<=y1-1; ++i)
                 printf(" ");
                 
                 printf("0");

          for(i=1; i<=(y2-y1-1); ++i)
                 printf("_");
                 
                 printf("*");
          }
}

65

66 C PROGRAMS WITH SOLUTIONS

Output:
                          Y---->
0-------------------------------------------------------------------------------------------------------
|                                                    #
|                                                  0---*
|                                                0---*
|                                              0---*
|                                          0---*
|                                       0---*
|                                    0---*
|                                0---*
|                           0---*
|                   0---*
|#

12. Write a program using a single –subscribed variable to evaluate the following expressions:

       10
Total =∑ X 22 the values of x1, x2, ..... are read from the terminal.
       i =1

#include<stdio.h>
#include<conio.h>

void main()
{
     int i;
     float x[10], value, total;

     printf("ENTER 10 REAL NUMBERS");
     
     for(i=0; i<10; i++)
     {
          scanf("%f", &value);
          
          x[i]=value;
     }
     
     total=0.0;
     
     for(i=0; i<10; i++)

FUNDAMENTALS  C PROGRAMS  67

     total = total + x[i]*x[i];
     
     printf("\n");
     
     for(i=0; i<10; i++)
            printf("x[%2d] = %5.2f", i+1, x[i]);
            printf("total=%.2f", total);
     }

Output:
ENTER 10 REAL NUMBERS
1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10
X[1]=1.10
X[2]=2.20
X[3]=3.30
X[4]=4.40
X[5]=5.50
X[6]=6.60
X[7]=7.70
X[8]=8.80
X[9]=9.90
X[10]=10.10
Total = 446.86

13. Given below is the list of marks obtained by a class of 50 students in an annual examination.
43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74 81 49 37 40 49 16 75 87 91 33 24 58 78 65
56 76 67 45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59
Write a program to count the number of students belonging to each of the following groups of
marks: 0-9, 10-19, 20-29, ---- ,100.

#include<stdio.h>
#include<conio.h>

#define MAXVAL 50
#define COUNTER 11

void main()

68 C PROGRAMS WITH SOLUTIONS

{
     float value [MAXVAL];
     int i, low, high;
     int group[COUNTER]={0,0,0,0,0,0,0,0,0,0,0};

     for(i=0; i<MAXVAL; i++)
     {
          scanf("%f", &value[i]);
          ++group[(int)(value[i]/10)];
     }
     
     printf("\n");
     printf("GROUP RANGE FREQUENCEY");

     for(i=0; i<COUNTER; i++)
     {
          low=i*10;
          
          if(i= =10)
                high=100;
          else
                  high=low+9;
                  
          printf("%2d%3d to %3d%d", i+1, low, high, group[i]);
     }
}

Output:
43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74 81 49 37 40 49 16 75 87 91 33 24 58 78
65 56 76 67 45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59          (Input data)

GROUP             RANGE                FREQUENCY

1                 0 to 9                2
2                10 to 19               4
3                20 to 29               4
4                30 to 39               5
5                40 to 49               8
6                50 to 59               8
7                60 to 69               7

FUNDAMENTALS  C PROGRAMS

8                70 to 79               6
9                80 to 89               4
10               90 to 99               2
11              100 to 100              0

14. Write a program for sorting the elements of an array in descending order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int *arr, temp, i, j, n;
    
    clrscr();

    printf("enter the number of elements in the array");
    scanf("%d", &n);

    arr=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
         for(j=i+1; j<n; j++)
         {
              if(arr[i]<arr[j])
              {
                   temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
             }
         }
         printf("Elements of array in descending order are");
         
         for(i=0; i<n; i++);
         getch();
    }
}

Output:
Enter the number of elements in the array: 5
Enter a number: 32
Enter a number: 43
Enter a number: 23

69

70  C PROGRAMS WITH SOLUTIONS

Enter a number: 57
Enter a number: 47
Elements of array in descending order are:
57
47
43
32
23

15. Write a program for finding the largest number in an array

#include<stdio.h>
#include<conio.h>

void main()
{
     int *arr, i, j, n, LARGE;

     clrscr();

     printf("Enter the number of elements in the array");
     scanf("%d", &n);

     arr=(int*) malloc(sizeof(int)*n);

     for(i=0; i<n; i++)
     {
          printf("Enter a number");
          scanf("%d", &arr[i]);
     }
    
     LARGE=arr[0];
    
     for(i=1; i<n;i++)
     {
          if(arr[i]>LARGE)
                LARGE=arr[i];
     }
    
     printf("The largest number in the array is : %d", LARGE);
    
     getch();
}

FUNDAMENTALS  C PROGRAMS

Output:
Enter the number of elements in the array:5
Enter a number: 32
Enter a number: 43
Enter a number: 23
Enter a number: 57
Enter a number: 47
The largest number in the array is : 57

16. Write a program for removing the duplicate element in an array.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
     int *arr, i, j, n, x, temp;
     
     clrscr();
     
     printf("Enter the number of elements in the array");
     scanf("%d", &n);

     arr=(int*) malloc(sizeof(int)*n);

     for(i=0; i<n; i++)
     {
          printf("Enter a number");
          scanf("%d", &arr[i]);
     }

     for(i=0; i<n; i++)
     {
          for(j=i+1; j<n; j++)
          {
               if(arr[i]>arr[j])
               {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }

71

72 C PROGRAMS WITH SOLUTIONS

          }
     }
     printf("Elements of array after sorting");
     
     for(i=0; i<n; i++)
            printf("%d", arr[i]);

     i=0;
     j=1;
            
     while(i<n)
     {
            if(arr[i]==arr[j])
            {
                 for(x=j; x<n-1; x++)
                        arr[x]=arr[x+1];
                        n-;
            }
            else
            {
                 i++;
                 j++;
            }
       }
       printf("Elements of array after removing duplicate elements");
            
       for(i=0; i<=n; i++)
              printf("%d", arr[i]);
              
       getch();
}

Output:
Enter the number of elements in the array:5
Enter a number: 3
Enter a number: 3
Enter a number: 4
Enter a number: 6
Enter a number: 4

FUNDAMENTALS  C PROGRAMS

Elements of array after sorting:
3
3
4
4
6
Elements of array after removing duplicate elements:
3
4
6

17. Write a program for finding the desired kth smallest element in an array.

#include<stdio.h>
#include<conio.h>

void main()
{
     int *arr, i, j, n, temp, k;
     
     clrscr();
     
     printf("enter the number of elements in the array");
     scanf("%d", &n);

     arr=(int*)malloc(sizeof(int)*n);

     for(i=0; i<n; i++)
     {
          printf("Enter a number");
          scanf("%d", &arr[i]);
     }
    
     for(j=i+1; j<n; j++)
     {
          if(arr[i]<arr[j])
          {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
          }
     }

73

74 C PROGRAMS WITH SOLUTIONS

}
     printf("Elements of array after sorting");

     for(i=0; i<n; i++);
            printf("%d", arr[i]);
       
     printf("Which smallest element do you want to determine");
     scanf("%d", k);

     if(k<=n)
           printf("Desired smallest element is %d", arr[k-1]);
     else
             printf("Please enter a valid value for finding the particular smallest element");
             
     getch();
}

Output:
Enter the number of elements in the array:5
Enter a number: 33
Enter a number: 32
Enter a number: 46
Enter a number: 68
Enter a number: 47
Elements of array after sorting:
32
33
46
47
68
Which smallest element do you want to determine? 3
Desired smallest element is 46

18. Program to sort a list of numbers and to determine median.

#include<stdio.h>
#include<conio.h>

#define N 10

FUNDAMENTALS  C PROGRAMS

void main()
{
     int i, j, n;
     float median, a[N], t;

     printf("Enter the number of items");
     scanf("%d", &n);
     printf("Input %d values ", n);

     for(i=1; i<=n; i++)
            scanf("%f", &a[i]);
    
     for(i=1; i<=n-1; i++)
     {
          for(j=1; j<=n-1; j++)
          {
               if(a[j]<=a[j+1])
               {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
               }
               else
                  continue;
          }
      }

      if(n%2 = =0)
            median=(a[n/2]+a[n/2+1])/2.0;
      else
              median=a[n/2+1];

      for(i=1; mi<=n; i++)
             printf("%f", a[i]);
       
      printf("median is %f", median);
}
Output:
Enter the number of items
5
Input 5 values
1.111 2.222 3.333 4.444 5.555

75

76 C PROGRAMS WITH SOLUTIONS

5.555000 4.444000 3.333000 2.222000 1.111000
Median is 3.333000
Enter the number of items
6
Input 6 values
358946
9.000000 8.000000 6.000000 5.000000 4.000000 3.000000
Median is 5.500000

19. Program to calculate standard deviation.

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAXSIZE 100

void main()
{
     int i, n;
     float value [MAXSIZE], deviation;
     
     sum=sumsqr=n=0;
     
     printf("Input values: input -1 to end");
     
     for(i=1; i<MAXSIZE; i++)
     {
          scanf("%f", &value[i]);
          
          if(value[i]= =-1)
                break;

          sum+=value[i];
          n+=1;
     }

     mean=sum/(float)n;
     
     for(i=1; i<=n; i++)
     {
          deviation=value[i]-mean;
          sumsqr+=deviation* deviation;

FUNDAMENTALS  C PROGRAMS

     }
     
     variance=sumsqr/(float)n;
     stddeviation=sqrt(variance);
     
     printf("Number of items: %d", n);
     printf("Mean: %f",mean);
     printf("Standard deviation:%f", stddeviation);
}
Output:
Input values: input -1 to end
65 9 27 78 12 20 33 49 -1
Number of items: 8
Mean: 36.625000
Standard deviation: 23.510303

20. Program to evaluate responses to a multiple-choice test.
#include<stdio.h>
#include<conio.h>
#define STUDENTS 3
#define ITEMS 25

void main()
{
     char key[items+1], response[ITEMS+1];
     int count, i, student, n, correct[ITEMS+1];
     
     printf("Input key to the items");
     
     for(i=0; i<ITEMS; i++)
            scanf("%c", &key[i]);
            
     scanf("%c", &key[i]);

     key[i]='\0';
 
     for(student=1; student<=STUDENTS; student++)
     {
          count=0;

77

78 C PROGRAMS WITH SOLUTIONS

          printf("\n");
          printf("Input responses of student -%d", student);
          
          for(i=0; i<ITEMS; i++)
                 scanf("%c", &response[i]);

          scanf("%c", &response[i]);
         
          response[i]='\0';
         
          for(i=0; i<ITEMS; i++)
                 correct[i]=0;
        
          for(i=0; i<ITEMS; i++)
                 if(response[i]= = key[i])
                 {
                      count=count+1;
                      count[i]=1;
                 }
                
          printf("\n");
          printf("student-%d", student);
          printf("score is %d out of %d", count, ITEMS);
          printf("Response to the items below are wrong");
         
          n=0;

          for(i=0; i<ITEMS; i++)
                 if(correct[i]= =0)
                 {
                      printf("%d", i+1);
                      n=n+1;
                 }
        
          if(n==0)
               printf("NIL");
        
         printf("\n");
     }
}
Output:
Input key to the items
abcdabcdabcdabcdabcdabcda

FUNDAMENTALS  C PROGRAMS 79

Input responses of student-1
abcdabcdabcdabcdabcdabcda
student-1
score is 25 out of 25
response to the following items are wrong
NIL
Input responses of student-2
abcddcbaabcdabcdddddddddd
student-2
score is 14 out of 25
Response to the following items are wrong
5 6 7 8 17 18 19 21 22 23 25
Input responses of student-3
aaaaaaaaaaaaaaaaaaaaaaaa
student-3
score is 7 out of 25
Response to the following items are wrong
2 3 4 6 b7 8 10 11 12 14 15 16 18 19 20 22 23 24

21. Program for production and sales analysis.

#include<stdio.h>
#include<conio.h>

void main()
{
     int M[5][6], s[5][6], c[6], Mvalue[5][6], Svalue [5][6],
         Mweek[5], Sweek[5], Mproduct[6], Sproduct[6], 
         Mtotal, Stotal, i, j, number;
         
     printf("Enter products manufactured week wise");

80  C PROGRAMS WITH SOLUTIONS

     printf("M11, M12,-, M21, M22, - etc");

     for(i=1; i<=4; i++)
            for(j=1; j<=5; j++)
                   scanf("%d", &M[i][j]);
                   
     printf("Enter products sold week wise");
     printf("S11, S12,-, S21,S22,- etc");
     
     for(i=1; i<=4; i++)
            for(j=1; j<=5; j++)
                   scanf("%d", &S[i][j]);
                   
     printf("enter the cost of each product");
     
     for(j=1;j<=5; j++)
           scanf("%d", &C[j]);
    
     for(i=1; i<=4; i++)
            for(j=1; j<=5; j++)
            {
                 Mvalue[i][j]=M[i][j]*c[j];
                 Svalue[i][j]=S[i][j]*c[j];
            }
            
     for(i=1; i<=4; i++)
     {
          Mweek[i]=0;
          Sweek[i]=0;
          
          for(j=1; j<5; j++)
          {
               Mweek[i] +=Mvalue[i][j];
               Sweek[i]+= Svalue[i][j];
          }
     }

     for(j=1; j<=5; j++)
     {
          Mproduct[j]=0;
          Sproduct[j]=0;
          
          for(i=1; i<=4; i++)
          {
               Mproduct[i] +=Mvalue[i][j];

FUNDAMENTALS  C PROGRAMS

               Sproduct[i]+= Svalue[i][j];
          }
          
     Mtotal=stotal=0;
     
     for(i=1; i<=4; i++)
     {
          Mtotal+=Mweek[i];
          Stotal+=Sweek[i];
     }

     printf("\n\n");
     printf("Following is the list of things you can ");
     printf("request for enter appropriate item number and press RETURN key");
     printf("1. Value matrices of production & sales");
     printf("2. Total value of weekly production & sales");
     printf("3. Product-wise monthly value of production& sales");
     printf("4. Grand total value of production & sales");
     printf("5.Exit");
     
     number=0;
     while(1)
     {
          printf("ENTER YOUR CHOICE:");
          scanf("%d", &number);
          printf("\n");
          
     if(number= =5)
     {
          printf("GOOD BYE");
          break;
     }
     
     switch(number)
     {
           case 1:
                       printf("VALUE MATRIX OF PRODUCTION");
                       
                       for(i=1; i<=4; i++)
                       {
                             printf("Week (%d), i");

81

82 C PROGRAMS WITH SOLUTIONS

                             for(j=1; j<=5; j++)
                                    printf("%7d", Mvalue);
                                    
                             printf("\n");
                        }
                        
                        printf("VALUE MATRIX OF SALES");

                        for(i=1; i<=4; i++)
                        {
                             printf("Week(%d)", i);

                             for(j=1; j<=5; j++)
                                   printf("%7d", Svalue[i][j]);
                                   
                             printf("\n");
                        }
                        
                        break;
                        
           case 2:
                      printf("TOTAL WEEKLY PRODUCTION & SALES");
                      printf("               PRODUCTION SALES");
                      printf("      --------------   ----");
                      
                      for(i=1; i<=4; i++)
                      {
                           printf("week(%d", i);
                           printf("%7d%7d", Mweek[i], Sweek[i]);
                      }
                      
                      break;
                      
           case 3:
                      printf("PRODUCT WISE TOTAL PRODUCTION & SALES");
                      printf("                     PRODUCTION SALES");
                      printf("       --------------            ----");
                      
                      for(j=1; j<=5; j++)
                      {
                           printf("Product(%d",ji);
                           printf("%7d%7d", Mproduct[j], Sproduct[j]);
                      }
                      
                      break;
                      
           case 4:
                      printf("GRAND TOTAL OF PRODUCTION SALES");

FUNDAMENTALS  C PROGRAMS  83

                      printf("Total production=%d", Mtotal);
                      
                      break;
                      
           default:
                       printf("Wrong choice, select gain");
                       
                       break;
                       
         }
    }
    
    printf("Exit from the program");
}
Output:
Enter products manufactured week wise
M11, M12, ----, M21, M22,------etc
11    15    12    14    13
13    13    14    15    12  
12    16    10    15    14
14    11    15    13    12

Enter products sold week wise
S11, S12, ----, S21, S22,-----etc
10  13  9  12  11
12  10  12  14  10
11  14  10  14  12
12  10  13  11  10

Enter cost of each product
10 20 30 15 25

Following is the list of things you can request for enter appropriate item number and press
RETURN key.
1. Value matrices of production & sales
2. Total value of weekly production & sales
3. Product-wise monthly value of production & sales
4. Grand total value of production & sales
5. Exit

84 C PROGRAMS WITH SOLUTIONS

Enter your choice: 1
VALUE MATRIX OF PRODUCTION
Week (1)  110  300  360  210  325
Week (2)  130  260  420  225  300
Week (3)  120  320  300  225  350
Week (4)  140  220  450  210  300

VALUE MATRIX OF SALES
Week (1)  100  260  270  180  275
Week (2)  120  200  360  210  250
Week (3)  110  280  300  210  300
Week (4)  120  200  390  165  250

Enter your choice: 2
TOTAL WEEKLY PRODUCTION & SALES
    PRODUCTION          SALES
--------------------    ----------

Week(1)  1305           1085
Week(2)  1335           1140
Week(3)  1305           1200
Week(4)  1315           1125

Enter your choice: 3
PRODUCT WISE TOTAL PRODUCTION & SALES
       PRODUCTION                   SALES
       -------------------         ---------

Product(1)    500                    450
Product(2)   1100                    450
Product(3)   1530                    450
Product(4)    855                    450
Product(5)   1275                   1075

Enter your choice: 4
GRAND TOTAL OF PRODUCTION SALES
Total production=5260

FUNDAMENTALS  C PROGRAMS

Total sales=4550
ENTER YOUR CHOICE:5
GOOD BYE
Exit from the program

22. Write a program to read a series of words from a terminal using scanf function.

#include<stdio.h>
#include<conio.h>

void main()
{
     char word1[40], word2[40], word3[40], word4[40];

     printf("enter text:");
     scanf("%s%s", word1, word2);
     scanf("%s", word3);
     scanf("%s", word4);
     printf("\n");
     printf("word1=%s\nword2=%s\n", word1, word2);
     printf("word3=%s\nword4=%s\n", word3, word4");
}
Output:
Enter text:
Seventh Street, sakthinagar, erode
Word1=seventh
Word2=street
Word3=sakthinagar
Word4=erode

23. Program to read a line of text from terminal.

#include<stdio.h>
#include<conio.h>

void main()
{
     char line[81], character;

85

86 C PROGRAMS WITH SOLUTIONS

     int c;
    
     c=0;
     
     printf("Enter text. Press<return> at end");
     
     do
     {
          charcter=getchar();
          line[c]=character;
          c++;
     }
     
     while(character!='\n');
     
     c=c-1;
     
     line[c]='\0';
     
     printf("\n%s\n", line);
}
Output:
Enter text.press<return> at end
Programming in c is interesting
Programming in c is interesting
Enter text. Press <Return> at end

24. Write a program to copy one string into another and count the number of characters copied.

#include<stdio.h>
#include<conio.h>

void main()
{
     char string1[80], string2[80];
     int i;

     printf("Enter a string\n");
     printf("?");
     scanf("%s, string2");
     
     for(i=0; string2[i]!='\0'; i++)
            string1[i]=string2[i];
            
     string1[i]='\0';
     printf("\n");

FUNDAMENTALS  C PROGRAMS

     printf("%s\n", string1);
     printf("number of charcters = %d\n", i);
}
Output:
Enter a string
? Manchester
Manchester
Number of characters=10
Enter a string
?westminister
Westiminister
Number of characters=11

25. Program for printing of the alphabet set in decimal and character form.

#include<stdio.h>
#include<conio.h>

void main()
{
     char c;
     
     printf("\n\n");
     
     for(c=65; c<=122; c=c+1)
     {
          if(c>90&&c<97)
                continue;
     
          printf("|%4d-%c", c,c);
     }
     
     printf("|n");
}
Output:
|65-A|66-B|67-C|68-D|69-E|70-F

87

88 C PROGRAMS WITH SOLUTIONS

|71-G|72-H|73-I|74-J|75-K|76-L
|77-M|78-N|79-O|80-P|81-Q|82-R
|83-S|84-T|85-U|86-V|87-W|88-X
|89-Y|90-Z|97-A|98-B|99-C|100-d
|101-e|102-f|103-g|104-h|105-i|106-j
|107-k|108-l|109-m|110-n|111-o|112-p
|113-q|114-r|115-s|116-t|117-u|118-v
|119-w|120-x|121-y|122-z|

26. Program to concatenation of strings.

#include<stdio.h>
#include<conio.h>

void main()
{ 
     int i, j, k;
     char first_name[10]={ANANDA};
     char second_name[10]={MURUGAN};
     char last_name[10] = {SELVARAJ};
     char name[30];
     
     for(i=0; first _name[i]!='\0'; i++)
            name[i]=first_name[i];
            
     name[i]=' ';
    
     for(j=0; second _name[j]!='\0';j++)
            name[i+j+1]=second_name[j];
           
     name[i+j+1]=' ';

     for(k=0; last _name[k]!='\0';k++)
            name[i+j+k+2]='\0';
    
     printf("\n\n");
     printf("%s\n", name);
}
Output:
ANANDA MURUGAN SELVARAJ

FUNDAMENTALS  C PROGRAMS

27. Program to illustration of string handling functions.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     char s1[20], s2[20], s3[20];
     int x, l1,l2,l3;
     
     printf("enter two string constants");
     printf("?");
     scanf("%s %s", s1,s2);
     
     x=strcmp(s1,s2);
     
     if(x!=0)
     {
          printf("strings are not equal");
          strcat(s1, s2);
     }
     else
             printf("strings are equal");
             
     strcpy(s3,s1);
     
     l1=strlen(s1);
     l2=strlen(s2);
     l3=strlen(s3);

     printf("s1=%s length =%d characters", s1,l1);
     printf("s2=%s length =%d characters", s2,l2);
     printf("s3=%s length =%d characters", s3,l3);
}
Output:
Enter two string constants
? ananda murugan
Strings are not equal
S1=ananda murugan length=13 characters

89

90 C PROGRAMS WITH SOLUTIONS

S2=murugan
length=7 characters

S3=ananda murugan length=13 characters
Enter two string constants
? anand anand
Strings are equal
S1=anand length=5 characters
S2=anand length=5 characters
S3=anand length=5 characters

28. Write a program that would sort a list of names in alphabetical order.

#include<stdio.h>
#include<conio.h>

#define ITEMS 5
#define MAXCHAR 20

void main()
{
     char string[ITEMS][MAXCHAR], dummy[MAXCHAR];
     int i=0, j=0;

     printf("enter names of %d items", ITEMS);

     while(i<ITEMS)
              scanf("%s", string[i++]);
     
     for(i=1; i<ITEMS; i++)
     {
          for(j=1; j<=ITEMS-i; j++)
          {
               if(strcmp(string[j-1), string[j]>0)
               {
                    strcpy(dummy, string[j-1]);
                    strcpy(string[j-1], string[j]);
                    strcpy(string[j], dummy);
                }
           }
     }

FUNDAMENTALS  C PROGRAMS    91

     printf("alphabetical list");

     for(i=0; i<ITEMS; i++)
            printf("%s", string[i]);
}
Output:
enter names of 5 times
Ananda
murugan renuka devi shri
alphabetical list
Ananda
devi
murugan
renuka
shri

29. Programs for counting of characters, words and lines in a text.

#include<stdio.h>
#include<conio.h>

void main()
{
     char line[81], ctr;
     int i, c, end=0, characters =0, words=0. lines=0;

     printf("KEY IN THE TEXT");
     printf("GIVE ONE SPACE AFTER EACH WORD WHEN COMPLETED, PRESS RETURN");

     while(end= =0)
     {
          c=0;
          
          while((ctr=getchar()) !='\n')
                   line[c++]=ctr;

          line[c]='\0';

92 C PROGRAMS WITH SOLUTIONS

          if(line[0] = ='\0')

          break;
     else
     {
          words++;
          
          for(i=0; line[i]!='\0'; i++)
                 if(line[i] = =' ' || line[i] = = '\t')
                       words++;
      }

      lines=lines+1;
      characters =characters + strlen(line);
     }

     printf("\n");
     printf("number of lines=%d", lines);
     printf("number of words=%d", words);
     printf("number of characters=%d", characters);
}
Output:
KEY IN THE TEXT
GIVE ONE SPACE AFTER EACH WORD WHEN COMPLETED, PRESS RETURN
Admiration is a very short-lived passion.
Admiration involves a glorious obliquity of vision.
Always we like those who admire us but we do not like those whom we admire.
Fools admire, but men of sense approve
Number of lines=4
Number of words=36
Number of characters=205

30. Program to alphabetize a customer list.

#include<stdio.h>
#include<conio.h>

FUNDAMENTALS  C PROGRAMS  93

#define CUSTOMERS 10

void main()
{
     char first_name[20] [10], second_name[20][10], surname[20][10], name[20][20], telephone[20][10], dummy[20];
     int i,j;

     printf("input names and telephone numbers");
     printf("?");
     
     for(i=0; i<CUSTOMERS; i++)
     {
          scanf("%s %s %s %s", first_name[i], second_name[i], surname[i], telephone[i]);

          strcpy(name[i], surname[i]);

          strcat(name[i], " ,");

          dummy[0]=first_name[i][0];
          dummy[1]='\0';
          strcat(name[i], dummy);
          strcat(name[i], ".");
          dummy[0]=second_name[i][0];
          dummy[1]='\0';
          strcat(name[i], dummy);
      }
      
      for(i=1; i<=CUSTOMERS-1; i++)
             for(j=1; j<=CUSTOMERS-i; j++)
                    if(strcmp(name[j-1], name[j])>0)
                    {
                         strcpy(dummy, name[j-1]);
                         strcpy(name[j-1], name[j]);
                         strcpy(name[j], dummy);
                         strcpy (dummy, telephone[j-1]);
                         strcpy(telephone[j-1], telephone[j]);
                         strcpy(telephone[j], dummy);
                     }
                     
             printf("CUSTOMERS LIST IN ALPHABETICAL ORDER");

94 C PROGRAMS WITH SOLUTIONS

             for(i=0; i<CUSTOMERS; i++)
                    printf("%-20s\t%-10s", name[i], telephone[i]);
}
Output:
Input names and telephone numbers
? anandamurugan 9486153102
Renukadevi 9486644542
CUSTOMERS LIST IN ALPHABETICAL ORDER
anandamurugan 9486153102
Renukadevi 9486644542

31. Program for functions with no arguments and no return values

#include<stdio.h>
#include<conio.h>

void printline(void);
void value (void);

void main()
{
     printline();
     value();
     printline();
}

void printline(void)
{
     int i;
     
     for(i=1; i<=35; i++)
            printf("%c", '-');
     printf("\n");
}

void value(void)
{
     int year, period;

FUNDAMENTALS  C PROGRAMS 95

     float inrate, sum, principal;
     
     printf("principal amount?");
     
     scanf("%f", &principal);
     
     printf("interest rate?");
     
     scanf("%f", &inrate);
     
     printf("period?");
     
     scanf("%d", &period);
     
     sum=principal;
     
     year=1;
     
     while(year<=period)
     {
          sum=sum*(1+inrate);
          year=year+1;
     }
     
     printf("\n%8.2f %5.2f %5d %12.2f\n", principal, inrate, period, sum);
}
Output:
-----------------------------------------
Principal amount? 5000
Interest rate?    0.12
Period?                   5
5000.00           0.12    5    8811.71
----------------------------------------

32. Program for functions with arguments but no return values.

#include<stdio.h>
#include<conio.h>

void printline(char c);
void value (float, float, int);

void main()
{

96 C P ROGRAMS WITH SOLUTIONS

     float principal, inrate;
     int period;

     printf("Enter principal amount, interest");
     printf("rate and period");
     scanf("%f %f %d", & principal, &inrate, &period);
     printline('c');
}

void printline(char ch)
{
     int i;

     for(i=1; i<=52; i++)
           printf("%c", ch);
           
     printf("\n");
}

void value(float p, float r, int n)
{
     int year;
     float sum;
     sum=p;
     year=1;

     while(year<=n)
     {
          sum=sum*(1+r);
          year=year+1;
     }

     printf("%f\t%f\t%d\t%f\n", p, r,n,sum);
}
Output:
Enter principal amount, interest rate, and period
5000 0.12 5
ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
5000.000000    0.120000    5    8811.708984
cccccccccccccccccccccccccccccccccccccccccccccccccccccc

FUNDAMENTALS  C PROGRAMS

33. Program for functions with arguments and return values.

#include<stdio.h>
#include<conio.h>

void printline(char ch, int len);
value (float, float, int);

void main()
{
     float principal, inrate, amount;
     int period;

     printf("enter principal amount, interest");
     printf("rate, and period");
     scanf("%f%f%d", &principal, &inrate, &period);
     printline('*', 52);
     amount=value(principal, inrate, period);
     printf("\n%f\t%f\t%f\t%d\t%f\n\n", principal, inrate, period, amount);
     printline();
}

void printline(char ch, int len)
{
     int i;

     for(i=1; i<=len; i++)
            printf("%c",ch);
    
     printf("\n");
}

value(float p, float r, int n)
{
     int year;
     float sum;
     
     sum=p;
     year=1;
     
     while(year<=n)
     {
          Sum=sum*(1+r);

97

98  C PROGRAMS WITH SOLUTIONS

          year=year+1;
     }

     return(sum);
}
Output:
Enter principal amount, interest rate, and period
5000 0.12

5

*****************************************************************
5000.000000          0.1200000    5    8811.00000
=================================================================

34. Write a function power that computes x raised to the power y for integers x and y and returns double-type value.

#include<stdio.h>
#include<conio.h>

void main()
{
     int x,y;
     double power (int, int);

     printf("enter x,y: ");
     scanf("%d%d", &x,&y);
     printf("%d to power %d is %f", x,y, power (x,y));
}

double power (int x, int y);
{
     P=1.0;
     
     if(y>=0)
           while(y--)
                    p*=x;
     else
             while(y++)
                      p/=x;
     return(p);
}

FUNDAMENTALS  C PROGRAMS

Output:
Enter x,y: 16    2
16 to power 2 is 256.000000

Enter x,y : 16 -2
16 to power -2 is 0.003906

35. Write a program to show how user-defined function is called.

#include<stdio.h>
#include<conio.h>

void main()
{
     int x=1, y=2, z;
     
     z=add(x,y);
     
     printf("z=%d", z);
}

add(a,b);
{
     return(a+b);
}

Output:
z=3

36. Write a program to define user-defined function. Call them at different places.

#include<stdio.h>
#include<conio.h>

void y();

voidy()
{
     printf("Y");
     
     void main()
     {

99

100 C P ROGRAMS WITH SOLUTIONS

          void a(), b(), c(), d();
          
          return();
          
          clrscr();
          
          y();
          
          a();
          
          b();
          
          c();
          
          d();
}

void a()
{
     printf("A");
     
     y();
}

void b()
{
     printf("B");
     a();
}

void c()
{
     a();
     b();
     printf("C");
}

void d()
{
     printf("D");
     c();
     b();
     a();
}
Output:
YAYBAYAYBAYCDAYBAYCBAYAY

FUNDAMENTALS C PROGRAMS    101

37. Write a program to show how similar variable names can be used in different functions.

#include<stdio.h>
#include<conio.h>

void main()
{
     int b=10, c=5;

     return();

     printf("In main() B=%d C=%d", b,c);

     fun();
}

fun()
{
     int b=20, c=10;
     
     printf("In fun() B=%d c=%d", b,c);
}
Output:
In main() B=10 c=5
In fun() B=20 c=10

38. Write a program to show the effect of global variables on different functions.

#include<stdio.h>
#include<conio.h>

int b=10, c=5;

void main()
{
     clrscr();

     printf("In main () B=%d c=%d", b,c);

     fun();

     b++;

     c--;

     printf("Again In main () B=%d c=%d", b,c);
}

fun()

102 C PROGRAMS WITH SOLUTIONS

{
     b++;
     c--;
     
     printf(" In fun () B=%d c=%d", b,c);
}
Output:
In main() B=10 c=5
In fun() B=11 c=4
Again In main() B=12 c=3

39. Write a program to display message using user-defined function.

#include<stdio.h>
#include<conio.h>

void main()
{
     void message();
     
     message();
}

void message()
{
     puts ("Have a nice day");
}
Output:
Have a nice day

40. Write a program to return more than one value from user defined function.

#include<stdio.h>
#include<conio.h>

void main()
{
     int x,y, add, sub, change(int*, int*, int*, int*);

     clrscr();

FUNDAMENTALS C PROGRAMS    103

     printf("Enter values of X and Y:");
     scanf("%d %d", &x, &y);
     
     change(&x &y, &add, &sub);
     
     printf("Addition:%d", add);
     printf("Subtraction:%d", sub);
     
return 0;
}

change(int * a, int*b, int*c, int d)
{
     c=*a+*b;
     *d=*a-*b;
}
Output:
Enter values of x & y: 5 4
Addition: 9
Subtraction:1

41. Write a program to pass arguments to user-defined function by value and by reference.

#include<stdio.h>
#include<conio.h>

void main()
{
     int k, m, other(int, int*);

     clrscr();

     printf("Address of k&m in main(): %u%u", &k&m);

     other(k&m);

     return 0;
}

other(int k, int*m)
{
     printf("Address of k&m in other(): %u%u, &k,m");
}

104  C P ROGRAMS WITH SOLUTIONS

Output:
Address of k&m in main(): 65524 65522
Address of k&m in other(): 65518 65522

42. Write a program to return only absolute value like abs() function.

#include<stdio.h>
#include<conio.h>

void main()
{
     int uabs(int), x;

     clrscr();

     printf("enter a negative value:");
     scanf("%d", x);
     
     x=uabs(x);
     
     printf("X=%d", x);
     
     return 0;
}

uabs(int y)
{
     if(y<0)
           return(y*-1);
     else
             return(y);
}
Output:
Enter a negative value: -5
X=5

43. Write a program to calculate square and cube of an entered number. Use function as an
    argument.

#include<stdio.h>
#include<conio.h>

void main()
{

FUNDAMENTALS C PROGRAMS

     int m;
     
     clrscr();
     
     printf("Cube: %d", cube(sqr(input())));
}

input()
{
     int k;
     
     printf("Number:");
     
     scanf("%d", &k);
     
     return k;
}

sqr(m)
{
     printf("Square:%d", m*m);
     
     return m;
}

cube(m)
{
     return m*m*m;
}
Output:
Number:2
Square: 4
Cube:8

44. Write a program to assign return value of a function to another variable.

#include<stdio.h>
#include<conio.h>

void main()
{
     int input(int);
     int x;
     
     clrscr();
     
     x=input(x);

105

106 C PROGRAMS WITH SOLUTIONS

     printf("x=%d", x);
}

input(int k)
{
     printf("Enter value of x=");
     scanf("%d", &k);

     return(k);
}
Output:
Enter value of x=5
x=5

45. Write a program to perform addition and subtraction of numbers with return value of function.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
     int input(int);
     int sqr(int);
     
     int x;

     clrscr();

     x=sqr(1-input(x)+1);
     
     printf("Square=%d, x");
}

input(int k)
{
     printf("Enter value of x=");
     scanf("%d, &k");
     
     return(k);
}

sqr(int m)
{

FUNDAMENTALS C PROGRAMS 107

     return (pow(m,2));
}
Output:
Enter value of x=5
Square=9

46. Write a program to perform multiplication and division of numbers with return value of
    function.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
     int input(int);
     int sqr(int);

     int x;

     clrscr();

     x=sqr(5*input(x)/2);

     printf("Square=%d, x");
}

input(int k)
{
    printf("Enter value of x=");
    scanf("%d, &k");

    return(k);
}

sqr(int m)
{
    return (pow(m,2));
}
Output:
Enter value of x=5
Square=144

108 C P ROGRAMS WITH SOLUTIONS

47. Write a program to use (++) operator with return value of function.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
     int input(int);
     int sqr(int);
     irit x,y =0;

     clrscr();

     x=sqr(++(y-(input(x))));

     printf("Square=%d", x);
}

input(int k)
{
     printf("Enter value of x=");
     scanf("%d", &k);

     return(k);
}

sqr(int m)
{
     return (pow(m,2));
}
Output:
Enter value of x=7
Square=64

48. Write a program to use mod(%) with function.

#include<stdio.h>
#include<conio.h>

void main()
{
     int j();

     if(j()%2= =0)
     
FUNDAMENTALS C PROGRAMS

           printf("Number is even");
     else
             printf("Number is odd");

     return 0;
}

j()
{
     int x;
     
     clrscr();
     
     printf("Enter a number");
     scanf("%d", &x);
     
     return(x);
}
Output:
Enter a number:5
Number is odd

49. Write a program to evaluate the equation s=sqr(a()+b()) using function.

#include<stdio.h>
#include<conio.h>

void main()
{
     int s=0, a(), b(),sqr(int);
     
     clrscr();
     
     s=sqr(a()+b());
     
     printf("square of sum=%d", s);
     
     return 0;
}

a()
{
     int a;
     printf("Enter value of a:");
     scanf("%d", &a);

     return(a);

109

110  C PROGRAMS WITH SOLUTIONS

}

b()
{
     int b;
     
     printf("Enter value of b:");
     scanf("%d", &b);
     
     return(b);
}

sqr(int x)
{
     return(x*x);
}
Output:
Enter value of a:5
Enter value of b: 3
Square of sum=64

50. Write a program to call user-defined function through if statement.

#include<stdio.h>
#include<conio.h>

void main()
{
     int a();

     clrscr();

     if(a()%2= =0)
           printf("The number is even");
     else
             printf("The number is odd");
}

a()
{
     int a;
     
     printf("Enter value of a:");

FUNDAMENTALS C PROGRAMS

     scanf("%d",&a);
     
     return(a);
}
Output:
Enter value of a:5
The number is odd

51. Write a program to call user-defined function through switch() statement.

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

void main()
{
    int a();

    int x=5;

    clrscr();

    switch(a())
    {
         case's':
                     printf("Square of %d is %d", x, pow(x,2));
                     break;
         case'c':
                     printf("Cube of %d is %d", x, pow(x,3));
                     break;
         case'd':
                     printf("Double of %d is %d", x, x*2);
                     break;
         default:
                     printf("Unexpected choice printed as it is : %d", x);
    }
}

a()
{
     char c='c';

111

112 C P ROGRAMS WITH SOLUTIONS

     printf("Enter your choice square(s), cube(c), double(d):");

     c=getche();

     c=tolower(c);

     return(c);
}
Output:
Enter your choice square(s), cube(c), double (d):D
Double of 5 is 10

52. Write a program to call function through the for loop.

#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
     int plus(int), m=1;
     
     clrscr();
     
     for(; plus(m); m++)
     {
          printf("%3d", m);
     }
}

plus (int k)
{
     if(k= =10)
     {
          exit(1);
          
          return NULL;
     }
     else
     
     return(k);
}
Output:
123456789

======================
Chapter 4  C DEBUGGING
======================

Find the output or error(s) for the following Programs:

1. Program 1.

void main()
{
     int const * p=5;

     printf("%d",++(*p));
}

Answer:
     Compiler error: Cannot modify a constant value.

Explanation:
     p is a pointer to a "constant integer". But we tried to change the value of the "constant integer".

2. Program 2.

main()
{
     char s[]="man";
     int i;

     for(i=0;s[ i ];i++)
           printf("\n%c%c%c%c",s[i], *(s+i), *(i+s), i[s]);
}

Answer:
    mmmm
    aaaa
    nnnn
    
Explanation:
    s[i], *(i+s), *(s+i), i[s] are all different ways of expressing the same idea. Generally array
name is the base address for that array. Here s is the base address. i is the index number/displacement

113

114  C P ROGRAMS WITH SOLUTIONS

from the base address. So, indirecting it with * is same as s[i]. i[s] may be surprising. But in the case
of C it is same as s[i].

3. Program 3.

main()
{
     float me = 1.1;
     double you = 1.1;
     
     if(me==you)
           printf("I love U");
     else
             printf("I hate U");
}

Answer:
    I hate U
Explanation:
    For floating point numbers (float, double, long double) the values cannot be predicted exactly.
Depending on the number of bytes, the precession with of the value represented varies. Float takes
4 bytes and long double takes 10 bytes. So float stores 0.9 with less precision than long double.
Rule of Thumb:
Never compare or at-least be cautious when using floating point numbers with relational
operators (== , >, <, <=, >=,!= ) .

4. Program 4.

main()
{
     static int var = 5;

     printf("%d ",var--);

     if(var)
           main();
}
Answer:
    54321
Explanation:
    When static storage class is given, it is initialized once. The change in the value of a static
variable is retained even between the function calls. Main is also treated like any other ordinary
function, which can be called recursively.

5. Program 5.

main()
{
     int c[]={2.8,3.4,4,6.7,5};

C DEBUGGING 115

     int j,*p=c,*q=c;

     for(j=0; j<5; j++) {
            printf(" %d ", *c);
            ++q;
      }

      for(j=0; j<5; j++) {
            printf(" %d ", *p);
            ++p;
      }
}

Answer:
    2222223465
Explanation:
    Initially pointer c is assigned to both p and q. In the first loop, since only q is incremented and
not c , the value 2 will be printed 5 times. In second loop p itself is incremented. So the values 2 3 4
6 5 will be printed.

6. Program 6.

main()
{
     extern int i;
     i=20;
     
     printf("%d",i);
}

Answer:
    Linker Error : Undefined symbol '_i'
Explanation:
    extern storage class in the following declaration,
extern int i;
specifies to the compiler that the memory for i is allocated in some other program and that address will be given to the current program at the time of linking. But linker finds that no other variable of name i is available in any other program with memory space allocated for it. Hence a linker error has occurred.

7. Program 7.

main()
{
   int i=-1,j=-1,k=0,l=2,m;
   m=i++&&j++&&k++||l++;
   
   printf("%d %d %d %d %d",i,j,k,l,m);

116  C P ROGRAMS WITH SOLUTIONS

}

Answer:
    00131
Explanation:
    Logical operations always give a result of 1 or 0. And also the logical AND (&&) operator
has higher priority over the logical OR (||) operator. So the expression 'i++ && j++ &&
k++' is executed first. The result of this expression is 0(-1 && -1 && 0 = 0). Now the
expression is 0 || 2 which evaluates to 1 (because OR operator always gives 1 except for '0
|| 0' combination- for which it gives 0). So the value of m is 1. The values of other variables
are also incremented by 1.

8. Program 8. 

main()
{
   char *p;
   
   printf("%d %d ",sizeof(*p),sizeof(p));
}

Answer:
    12
Explanation:
    The sizeof() operator gives the number of bytes taken by its operand. P is a character
pointer, which needs one byte for storing its value (a character). Hence sizeof(*p) gives a value of 1.
Since it needs two bytes to store the address of the character pointer sizeof(p) gives 2.

9. Program 9.

main()
{
   int i = 3;
   
   switch(i)
   {
      default:printf("zero");
      
      case 1: printf("one");
              break;
              
      case 2: printf("two");
              break;

      case 3: printf("three");
              break;
   }
}

C DEBUGGING  117

Answer:
  three

Explanation:
  The default case can be placed anywhere inside the loop. It is executed only when all other
  cases doesn't match.

10. Program 10.

main()
{
     printf("%x",-1<<4);
}

Answer:
    fff0
Explanation :
    -1 is internally represented as all 1's. When left shifted four times the least significant 4 bits
are filled with 0's. The %x format specifier specifies that the integer value be printed as a hexadecimal
value.

11. Program 11. 

main()
{
     char string[]="Hello World";
     display(string);
}

void display(char *string)
{
     printf("%s",string);
}

Answer:
    Compiler Error : Type mismatch in redeclaration of function display
Explanation:
    In third line, when the function display is encountered, the compiler doesn't know anything
about the function display. It assumes the arguments and return types to be integers, (which is the
default type). When it sees the actual function display, the arguments and type contradicts with
what it has assumed previously. Hence a compile time error occurs.

12. Program 12. 

main()
{
     int c=- -2;

118 C PROGRAMS WITH SOLUTIONS

     printf("c=%d",c);
}

Answer:
    c=2;
Explanation:
    Here unary minus (or negation) operator is used twice. Same maths rules applies, ie., minus
* minus= plus.

Note:
    However you cannot give like --2. Because -- operator can only be applied to variables as
a decrement operator (eg., i--). 2 is a constant and not a variable.

13. Program 13.

#define int char

main()
{
     int i = 65;
     
     printf("sizeof(i)=%d",sizeof(i));
}

Answer:
    sizeof(i)=1
Explanation:
    Since the #define replaces the string int by the macro char

14. Program 14.

main()
{
   int i=10;

   i=!i>14;

   printf ("i=%d",i);
}

Answer:
   i=0
Explanation:
   In the expression !i>14, NOT (!) operator has more precedence than ' >' symbol. ! is a
unary logical operator. !i (!10) is 0 (not of true is false). 0>14 is false (zero).

15. Program 15.

#include<stdio.h>
main()
{

C DEBUGGING 119

   char s[]={'a','b','c','\n','c','\0'};
   char *p,*str,*str1;

   p=&s[3];
   str=p;
   str1=s;
   
   printf("%d",++*p + ++*str1-32);
}

Answer:
   77
Explanation:
   p is pointing to character '\n'. str1 is pointing to character 'a' ++*p. "p is pointing to '\n' and
that is incremented by one." the ASCII value of '\n' is 10, which is then incremented to 11. The value
of ++*p is 11. ++*str1, str1 is pointing to 'a' that is incremented by 1 and it becomes 'b'. ASCII value
of 'b' is 98.
Now performing (11 + 98 – 32), we get 77("M");
So we get the output 77 :: "M" (ASCII is 77).

16. Program 16.

#include<stdio.h>
main()
{
   int a[2][2][2] = { {10,2,3,4}, {5,6,7,8} };
   int *p,*q;
   
   p=&a[2][2][2];
   *q=***a;
   
   printf("%d----%d",*p,*q);
}

Answer:
   SomeGarbageValue---1
Explanation:
   p=&a[2][2][2] you declare only two 2D arrays, but you are trying to access the third
2D(which you are not declared) it will print garbage values. *q=***a starting address of a is assigned
integer pointer. Now q is pointing to starting address of a. If you print *q, it will print first element of 3D array.

17. Program 17.

#include<stdio.h>
main()
{

120 C PROGRAMS WITH SOLUTIONS

   struct xx
   {
      int x=3;
      char name[]="hello";
   };
   
   struct xx *s;
   
   printf("%d",s->x);
   printf("%s",s->name);
}

Answer:
   Compiler Error
Explanation:
   You should not initialize variables in declaration.

18. Program 18.

#include<stdio.h>
main()
{
   struct xx
   {
      int x;
      
      struct yy
      {
         char s;
         struct xx *p;
      };
      struct yy *q;
    };
}

Answer:
   Compiler Error
Explanation:
   The structure yy is nested within structure xx. Hence, the elements are of yy are to be accessed through the instance of structure xx, which needs an instance of yy to be known. If the instance is created after defining the structure the compiler will not know about the instance relative
to xx. Hence for nested structure yy you have to declare member.

C DEBUGGING 121

19. Program 19.

main()
{
   printf("\nab");
   printf("\bsi");
   printf("\rha");
}

Answer:
   hai
Explanation:
\n - newline
\b - backspace
\r - linefeed

20. Program 20.

main()
{
   int i=5;
   
   printf("%d%d%d%d%d%d",i++,i--,++i,--i,i);
}

Answer:
   45545
Explanation:
   The arguments in a function call are pushed into the stack from left to right. The evaluation
is by popping out from the stack and the evaluation is from right to left, hence the result.

21. Program 21.

#define square(x) x*x

main()
{
   int i;
   i = 64/square(4);
   
   printf("%d",i);
}

Answer:
   64
Explanation:
   The macro call square(4) will substituted by 4*4 so the expression becomes i = 64/4*4.
Since / and * has equal priority the expression will be evaluated as (64/4)*4 i.e., 16*4 = 64.

122 C PROGRAMS WITH SOLUTIONS

22. Program 22.

main()
{
   char *p="hai friends", *p1;
   
   p1=p;
   
   while(*p!='\0') ++*p++;
   
   printf("%s %s",p,p1);
}

Answer:
   ibj!gsjfoet
Explanation:
++*p++ will be parse in the given order
➢ *p that is value at the location currently pointed by p will be taken
➢ ++*p the retrieved value will be incremented
➢ when ; is encountered the location will be incremented that is p++ will be executed
Hence, in the while loop initial value pointed by p is 'h', which is changed to 'i' by executing
++*p and pointer moves to point, 'a' which is similarly changed to 'b' and so on. Similarly blank
space is converted to '!'. Thus, we obtain value in p becomes "ibj!gsjfoet" and since p reaches '\0'
and p1 points to p thus p1does not print anything.

23. Program 23.

#include <stdio.h>

#define a 10

main()
{
   #define a 50
   
   printf("%d",a);
}

Answer:
   50
Explanation:
   The preprocessor directives can be redefined anywhere in the program. So the most recently
assigned value will be taken.

24. Program 24.

#define clrscr() 100

main()
{

C DEBUGGING 123

   clrscr();
   
   printf("%d\n",clrscr());
}

Answer:
   100
Explanation:
   Preprocessor executes as a seperate pass before the execution of the compiler. So textual
replacement of clrscr() to 100 occurs. The input program to compiler looks like this :

main()
{
   100;
   
   printf("%d\n",100);
}

Note:
   100; is an executable statement but with no action. So it doesn't give any problem.

25. Program 25.

main()
{
   printf("%p", main);
}

Answer:
   Some address will be printed.
Explanation:
   Function names are just addresses (just like array names are addresses).
main() is also a function. So the address of function main will be printed. %p in printf
specifies that the argument is an address. They are printed as hexadecimal numbers.

26. Program 26.

main()
{
     clrscr();
}

clrscr();

Answer:
No output/error

124 C P ROGRAMS WITH SOLUTIONS

Explanation:
The first clrscr() occurs inside a function. So it becomes a function call. In the second
clrscr(); is a function declaration (because it is not inside any function).

27. Program 27

enum colors {BLACK,BLUE,GREEN}

main()
{
     printf("%d..%d..%d",BLACK,BLUE,GREEN);
     
     return(1);
}

Answer:
     0..1..2
Explanation:
     enum assigns numbers starting from 0, if not explicitly defined.

28. Program 28.

void main()
{
     char far *farther,*farthest;
     
     printf("%d..%d",sizeof(farther),sizeof(farthest));
}

Answer:
     4..2
Explanation:
     The second pointer is of char type and not a far pointer.

29. Program 29.

main()
{
     int i=400,j=300;
     
     printf("%d..%d");
}

Answer:
     400..300
Explanation:
printf takes the values of the first two assignments of the program. Any number of printf's may be given. All of them take only the first two values. If more number of assignments given in the program, then printf will take garbage values.

C DEBUGGING 125

30. Program 30.

main()
{
     char *p;
     p="Hello"; 
     printf("%c\n",*&*p);
}

Answer:
H
Explanation:
* is a dereference operator & is a reference operator. They can be applied any number of times provided it is meaningful. Here p points to the first character in the string "Hello". *p dereferences it and so its value is H. Again & references it to an address and * dereferences it to the value H.

31. Program 31.

main()
{
     int i=1;
     
     while (i<=5)
     {
          printf("%d",i);
          
          if (i>2)
                goto here;
          i++;
     }
}

fun()
{
     here:
     printf("PP");
}

Answer:
Compiler error: Undefined label 'here' in function main.
Explanation:
Labels have functions scope, in other words the scope of the labels is limited to functions.
The label 'here' is available in function fun() hence it is not visible in function main.

126  C PROGRAMS WITH SOLUTIONS

32. Program 32.

main()
{
     static char names[5][20]={"pascal","ada","cobol","fortran","perl"};
     int i;
     char *t;
     
     t=names[3];
     names[3]=names[4];
     names[4]=t;
     
     for (i=0;i<=4;i++)
            printf("%s", names[i]);
}

Answer:
     Compiler error: Lvalue required in function main
Explanation:
     Array names are pointer constants. So it cannot be modified.

33. Program 33.

void main()
{
     int i=5;
     
     printf("%d", i++ + ++i);
}

Answer:
     Output Cannot be predicted exactly.
Explanation:
     Side effects are involved in the evaluation of i.

34. Program 34.

void main()
{
     int i=5;
     
     printf("%d", i+++++i);
}

Answer:
Compiler Error
Explanation:
The expression i+++++i is parsed as i ++ ++ + i which is an illegal combination of operators.

C DEBUGGING 127

35.  Program 35.

#include<stdio.h>
main()
{
     int i=1,j=2;
     
     switch(i)
     {
          case 1: printf("GOOD");
                  break;
                  
          case j: printf("BAD");
                  break;
      }
}

Answer:
     Compiler Error: Constant expression required in function main.
Explanation:
     The case statement can have only constant expressions (this implies that we cannot use variable names directly so an error).
Note:
     Enumerated types can be used in case statements.

36. Program 36.

main()
{
     int i;
     
     printf("%d",scanf("%d",&i)); // value 10 is given as input here
}

Answer:
     1
Explanation:
     Scanf returns number of items successfully read and not 1/0. Here 10 is given as input which should have been scanned successfully. So number of items read is 1.

37. Program 37.

#define f(g,g2) g##g2
main()
{
     int var12=100;

128  C PROGRAMS WITH SOLUTIONS

     printf("%d",f(var,12));
}

Answer:
100

38. Program 38.

main()
{
     int i=0;
     
     for(;i++;printf("%d",i)) ;
     
     printf("%d",i);
}

Answer:
     1
Explanation:
     Before entering into the for loop the checking condition is "evaluated". Here it evaluates to 0 (false) and comes out of the loop, and i is incremented (note the semicolon after the for loop).

39. Program 39.

#include<stdio.h>
main()
{
     char s[]={'a','b','c','\n','c','\0'};
     char *p,*str,*str1;
     
     p=&s[3];
     str=p;
     str1=s;
     
     printf("%d",++*p + ++*str1-32);
}

Answer:
     M
Explanation:
     p is pointing to character '\n'.str1 is pointing to character 'a' ++*p meAnswer: "p is pointing to '\n' and that is incremented by one." the ASCII value of '\n' is 10. Then it is incremented to 11. The value of ++*p is 11. ++*str1 meAnswer:"str1 is pointing to 'a' that is incremented by 1 and it becomes 'b'. ASCII value of 'b' is 98. both 11 and 98 is added and result is subtracted from 32.
     i.e., (11+98-32)=77("M");

C DEBUGGING 129

40. Program 40.

#include<stdio.h>

main()
{
     struct xx
     {
          int x=3;
          char name[]="hello";
     }
     
     struct xx *s=malloc(sizeof(struct xx));
     
     printf("%d",s->x);
     printf("%s",s->name);
}

Answer:
Compiler Error
Explanation:
Initialization should not be done for structure members inside the structure declaration

41. Program 41.

#include<stdio.h>
main()
{
     struct xx
     {
          int x;
          struct yy
          {
               char s;
               struct xx *p;
          }
          
          struct yy *q;
      }
}

Answer:
      Compiler Error
Explanation:
      In the end of nested structure yy a member have to be declared.

130 C PROGRAMS WITH SOLUTIONS

42. Program 42.
main()
{
     extern int i;
     i=20;
     
     printf("%d",sizeof(i));
}

Answer:
     Linker error: undefined symbol '_i'.
Explanation:
     extern declaration specifies that the variable i is defined somewhere else. The compiler passes the external variable to be resolved by the linker. So compiler doesn't find an error. During linking the linker searches for the definition of i. Since it is not found the linker flags an error.

43. Program 43.

main()
{
     printf("%d", out);
}

int out=100;

Answer:
Compiler error: undefined symbol out in function main.
Explanation:
The rule is that a variable is available for use from the point of declaration. Even though a is a global variable, it is not available for main. Hence an error.

44. Program 44.

main()
{
     extern out;
     
     printf("%d", out);
}

int out=100;

Answer:
100
Explanation:
This is the correct way of writing the previous program.

C DEBUGGING 131

45. Program 45.

main()
{
     show();
}

void show()
{
     printf("I'm the greatest");
}

Answer:
Compier error: Type mismatch in redeclaration of show.
Explanation:
When the compiler sees the function show it doesn't know anything about it. So the default return type (ie, int) is assumed. But when compiler sees the actual definition of show mismatch occurs since it is declared as void. Hence the error.
The solutions are as follows:
1. declare void show() in main().
2. define show() before main().
3. declare extern void show() before the use of show().

46. Program 46.

main()
{
     int a[2][3][2] = {{{2,4},{7,8},{3,4}},{{2,2},{2,3},{3,4}}};
     
     printf("%u %u %u %d \n",a,*a,**a,***a);
     printf("%u %u %u %d \n",a+1,*a+1,**a+1,***a+1);
}

Answer:
100, 100, 100, 2
114, 104, 102, 3
Explanation:
The given array is a 3-D one. It can also be viewed as a 1-D array.
2    4    7    8    3    4    2    2    2    3    3    4 
100  102  104  106  108  110  112  114  116  118  120  122

thus, for the first printf statement a, *a, **a give address of first element since the indirection ***a gives the value. Hence, the first line of the output.

132 C PROGRAMS WITH SOLUTIONS

for the second printf a+1 increases in the third dimension thus points to value at 114, *a+1 increments in second dimension thus points to 104, **a +1 increments the first dimension thus points to 102 and ***a+1 first gets the value at first location and then increments it by 1. Hence, the output.

47. Program 47.

main()
{
     int a[ ] = {10,20,30,40,50}, j, *p;
     
     for(j=0; j<5; j++)
     {
          printf("%d" ,*a);
          
          a++;
      }
      
      p = a;
      
      for(j=0; j<5; j++)
      {
           printf("%d " ,*p);
           
           p++;
       }
}

Answer:
Compiler error: lvalue required.
Explanation:
Error is in line with statement a++. The operand must be an lvalue and may be of any of scalar type for the any operator, array name only when subscripted is an lvalue.
Simply array name is a non-modifiable lvalue.

48. Program 48.

main()
{
     static int a[] = {0,1,2,3,4};
     int *p[] = {a,a+1,a+2,a+3,a+4};
     int **ptr = p;
     ptr++;
     printf("\n %d %d %d", ptr-p, *ptr-a, **ptr);
     *ptr++;
     printf("\n %d %d %d", ptr-p, *ptr-a, **ptr);

C DEBUGGING 133

     *++ptr;
     printf("\n %d %d %d", ptr-p, *ptr-a, **ptr);
     ++*ptr;
     printf("\n %d %d %d", ptr-p, *ptr-a, **ptr);
}

Answer:
111
222
333
444
Explanation:
Let us consider the array and the two pointers with some address

                           a
0   1    2    3     4
                           p
100  102  104  106  108

100   102   104   106   108  
1000  1002  1004  1006  1008

        ptr
    1000
    2000

After execution of the instruction ptr++ value in ptr becomes 1002, if scaling factor for
integer is 2 bytes. Now ptr – p is value in ptr – starting location of array p, (1002 – 1000) / (scaling
factor) = 1, *ptr – a = value at address pointed by ptr – starting value of array a, 1002 has a value
102 so the value is (102 – 100)/(scaling factor) = 1, **ptr is the value stored in the location pointed
by the pointer of ptr = value pointed by value pointed by 1002 = value pointed by 102 = 1. Hence the
output of the firs printf is 1, 1, 1.

After execution of *ptr++ increments value of the value in ptr by scaling factor, so it
becomes1004. Hence, the outputs for the second printf are ptr – p = 2, *ptr – a = 2, **ptr = 2.

After execution of *++ptr increments value of the value in ptr by scaling factor, so it
becomes1004. Hence, the outputs for the third printf are ptr – p = 3, *ptr – a = 3, **ptr = 3.

After execution of ++*ptr value in ptr remains the same, the value pointed by the value is
incremented by the scaling factor. So the value in array p at location 1006 changes from 106 10 108.
Hence, the outputs for the fourth printf are ptr – p = 1006 – 1000 = 3, *ptr – a = 108 – 100 = 4, **ptr = 4.

134  C PROGRAMS WITH SOLUTIONS

49. Program 49.

main()
{
     char *q;
     int j;
     
     for (j=0; j<3; j++) scanf("%s" ,(q+j));
     for (j=0; j<3; j++) printf("%c" ,*(q+j));
     for (j=0; j<3; j++) printf("%s" ,(q+j));
}

Explanation:
Here we have only one pointer to type char and since we take input in the same pointer thus
we keep writing over in the same location, each time shifting the pointer value by 1. Suppose the
inputs are MOUSE, TRACK and VIRTUAL. Then for the first input suppose the pointer starts at
location 100 then the input one is stored as
M  O  U  S  E  \0

When the second input is given the pointer is incremented as j value becomes 1, so the input is filled in memory starting from 101.
M  T  R  A  C  K  \0

The third input starts filling from the location 102
M  T  V  I  R  T  U  A  L  \0

This is the final value stored.
The first printf prints the values at the position q, q+1 and q+2 = M T V
The second printf prints three strings starting from locations q, q+1, q+2
i.e., MTVIRTUAL, TVIRTUAL and VIRTUAL.

50. Program 50

main()
{
   void *vp;
   char ch = 'g', *cp = "goofy";
   int j = 20;
   
   vp = &ch;
   
   printf("%c", *(char *)vp);
   
   vp = &j;
   printf("%d",*(int *)vp);
   
   vp = cp;

C DEBUGGING 135

   printf("%s",(char *)vp + 3);
}

Answer:
   g20fy
Explanation:
   Since a void pointer is used it can be type casted to any other type pointer. vp = &ch stores
address of char ch and the next statement prints the value stored in vp after type casting it to the
proper data type pointer. the output is 'g'. Similarly the output from second printf is '20'. The third
printf statement type casts it to print the string from the 4th value hence the output is 'fy'.

51.  Program 51

main ()
{
     static char *s[] = {"black", "white", "yellow", "violet"};
     char **ptr[] = {s+3, s+2, s+1, s}, ***p;
     p = ptr;
     **++p;
     printf("%s",*--*++p + 3);
}
Answer:
ck
Explanation:
In this problem we have an array of char pointers pointing to start of 4 strings. Then we have
ptr which is a pointer to a pointer of type char and a variable p which is a pointer to a pointer of type
char p hold the initial value of ptr, i.e., p = s+3. The next statement increment value in p by 1, thus
now value of p = s+2. In the printf statement the expression is evaluated *++p causes gets value s+1
then the pre decrement is executed and we get s+1 – 1 = s the indirection operator now gets the
value from the array of s and adds 3 to the starting address. The string is printed starting from this
position. Thus, the output is 'ck'.

52.  Program 52

main()
{
     int i, n;
     char *x = "girl";
     n = strlen(x);
     *x = x[n];
     
     for(i=0; i<n; ++i)

136  C PROGRAMS WITH SOLUTIONS

{
     printf("%s\n",x);
     x++;
}
}
Answer:
(blank space)
irl
rl
l
Explanation:
Here a string (a pointer to char) is initialized with a value "girl". The strlen function returns
the length of the string, thus n has a value 4. The next statement assigns value at the nth location
('\0') to the first location. Now the string becomes "\0irl" . Now the printf statement prints the string
after each iteration it increments it starting position. Loop starts from 0 to 4. The first time x[0] = '\0'
hence it prints nothing and pointer value is incremented. The second time it prints from x[1] i.e., "irl"
and the third time it prints "rl" and the last time it prints "l" and the loop terminates.

53.  Program 53

int i,j;
for(i=0;i<=10;i++)
{
     j+=5;
     assert(i<5);
}
Answer:
Runtime error: Abnormal program termination.
assert failed (i<5), <file name>,<line number>
Explanation:
Asserts are used during debugging to make sure that certain conditions are satisfied. If
assertion fails, the program will terminate reporting the same. After debugging use, #undef NDEBUG
and this will disable all the assertions from the source code. Assertion is a good debugging tool to
make use of.

54.  Program 54

main()
{
     int i=-1;
     +i;

C DEBUGGING 137

     printf("i = %d, +i = %d \n",i,+i);
}
Answer:
i = -1, +i = -1
Explanation:
Unary + is the only dummy operator in C. Where-ever it comes you can just ignore it
just because it has no effect in the expressions (hence the name dummy operator).

55. What are the files which are automatically opened when a C file is executed?

Answer:
stdin, stdout, stderr (standard input,standard output,standard error).

56. What will be the position of the file marker?

a: fseek(ptr,0,SEEK_SET);
b: fseek(ptr,0,SEEK_CUR);
Answer:
a: The SEEK_SET sets the file position marker to the starting of the file.
b: The SEEK_CUR sets the file position marker to the current position of the file.

57.  Program 57

main()
{
     char name[10], s[12];
     scanf(" \"%[^\"]\"",s);
}
How scanf will execute?
Answer:
First it checks for the leading white space and discards it.Then it matches with a
quotation mark and then it reads all character upto another quotation mark.

58. What is the problem with the following code segment?

        while((fgets(receiving array,50,file_ptr)) != EOF);

Answer & Explanation:
fgets returns a pointer. So the correct end of file check is checking for != NULL.

138  C PROGRAMS WITH SOLUTIONS

59.  Program 59

main()
{
     main();
}
Answer:
Runtime error : Stack overflow.
Explanation:
main function calls itself again and again. Each time the function is called its return
address is stored in the call stack. Since there is no condition to terminate the function
call, the call stack overflows at runtime. So it terminates the program and results in an
error.

60.  Program 60

main()
{
     char *cptr,c;
     void *vptr,v;
     c=10; v=0;
     cptr=&c; vptr=&v;
     printf("%c%v",c,v);
}
Answer:
Compiler error (at line number 4): size of v is Unknown.
Explanation:
You can create a variable of type void * but not of type void, since void is an empty
type. In the second line you are creating variable vptr of type void * and v of type void
hence an error.

61.  Program 61

main()
{
     char *str1="abcd";
     char str2[]="abcd";
     
     printf("%d %d %d",sizeof(str1),sizeof(str2),sizeof("abcd"));
}
Answer:
255

C DEBUGGING  139

Explanation:
In first sizeof, str1 is a character pointer so it gives you the size of the pointer variable.
In second sizeof the name str2 indicates the name of the array whose size is 5 (including
the '\0' termination character). The third sizeof is similar to the second one.

62.  Program 62

main()
{
     char not;
     not=!2;
     
     printf("%d",not);
}
Answer:
0
Explanation:
! is a logical operator. In C the value 0 is considered to be the boolean value FALSE
and any non-zero value is considered to be the boolean value TRUE. Here 2 is a nonzero value so TRUE. !TRUE is FALSE (0) so it prints 0.

63.  Program 63

#define FALSE -1
#define TRUE 1
#define NULL 0

main() 
{
     if(NULL)
           puts("NULL");
     else if(FALSE)
                puts("TRUE");
          else
                  puts("FALSE");
}
Answer:
TRUE
Explanation:
The input program to the compiler after processing by the preprocessor is,
main(){
if(0)
puts("NULL");

140 C PROGRAMS WITH SOLUTIONS

else if(-1)
puts("TRUE");
else
puts("FALSE");
}
Preprocessor doesn't replace the values given inside the double quotes. The check by
if condition is boolean value false so it goes to else. In second if -1 is boolean value true
hence "TRUE" is printed.

64.  Program 64

main()
{
     int k=1;
     
     printf("%d==1 is ""%s",k,k==1?"TRUE":"FALSE");
}
Answer:
1==1 is TRUE
Explanation:
When two strings are placed together (or separated by white-space) they are
concatenated (this is called as "stringization" operation). So the string is as if it is given
as "%d==1 is %s". The conditional operator( ?: ) evaluates to "TRUE".

65.  Program 65

main()
{
     int y;
     
     scanf("%d",&y); // input given is 2000
     
     if( (y%4==0 && y%100 != 0) || y%100 == 0)
           printf("%d is a leap year");
     else
             printf("%d is not a leap year");
}
Answer:
2000 is a leap year.
Explanation:
An ordinary program to check if leap year or not.

C DEBUGGING 141

66.  Program 66

#define max 5
#define int arr1[max]

main()
{
     typedef char arr2[max];
     
     arr1 list={0,1,2,3,4};
     arr2 name="name";
     
     printf("%d %s",list[0],name);
}
Answer:
Compiler error (in the line arr1 list = {0,1,2,3,4})
Explanation:
arr2 is declared of type array of size 5 of characters. So it can be used to declare the
variable name of the type arr2. But it is not the case of arr1. Hence an error.
Rule of Thumb:
#defines are used for textual replacement whereas typedefs are used for declaring
new types.

67.  Program 67

int i=10;
main()
{
     extern int i;
     {
          int i=20;
          {
               const volatile unsigned i=30;
               printf("%d",i);
          }
          printf("%d",i);
     }
     printf("%d",i);
}
Answer:
30,20,10
Explanation:
'{' introduces new block and thus new scope. In the innermost block i is declared as,
const volatile unsigned.

142  C PROGRAMS WITH SOLUTIONS

which is a valid declaration. i is assumed of type int. So printf prints 30. In the next
block, i has value 20 and so printf prints 20. In the outermost block, i is declared as
extern, so no storage space is allocated for it. After compilation is over the linker
resolves it to global variable i (since it is the only variable visible there). So it prints i's
value as 10.

68.  Program 68

main()
{
     int *j;
     {
          int i=10;
          j=&i;
     }
     printf("%d",*j);
}
Answer:
10
Explanation:
The variable i is a block level variable and the visibility is inside that block only. But the
lifetime of i is lifetime of the function so it lives upto the exit of main function. Since the
i is still allocated space, *j prints the value stored in i since j points i.

69.  Program 69

main()
{
     int i=-1;
     -i;
     
     printf("i = %d, -i = %d \n",i,-i);
}
Answer:
i = -1, -i = 1
Explanation:
-i is executed and this execution doesn't affect the value of i. In printf first you just
print the value of i. After that the value of the expression -i = -(-1) is printed.

70.  Program 70 

#include<stdio.h>
main()

C DEBUGGING  143

{
     const int i=4;
     float j;
     
     j = ++i;
     
     printf("%d %f", i,++j);
}
Answer:
Compiler error
Explanation:
i is a constant. You cannot change the value of constant.

71.  Program 71

#include<stdio.h>

main()
{
     int a[2][2][2] = { {10,2,3,4}, {5,6,7,8} };
     int *p,*q;
     
     p=&a[2][2][2];
     *q=***a;
     
     printf("%d..%d",*p,*q);
}
Answer:
garbagevalue..1
Explanation:
p=&a[2][2][2] you declare only two 2D arrays but you are trying to access the third
2D(which you are not declared) it will print garbage values. *q=***a starting address
of a is assigned integer pointer now q is pointing to starting address of a.if you print *q
meAnswer:it will print first element of 3D array.

72.  Program 72

#include<stdio.h>
main()
{
     register i=5;
     char j[]= "hello";
     
     printf("%s %d",j,i);
}

144  C PROGRAMS WITH SOLUTIONS

Answer:
hello 5
Explanation:
If you declare i as register compiler will treat it as ordinary integer and it will take
integer value. i value may be stored either in register or in memory.

73.  Program 73

main()
{
     int i=5,j=6,z;
     
     printf("%d",i+++j);
}
Answer:
11
Explanation:
The expression i+++j is treated as (i++ + j).

74.  Program 74

struct aaa{
           struct aaa *prev;
           int i;
           struct aaa *next;
           };
main()
{
     struct aaa abc,def,ghi,jkl;
     int x=100;
     
     abc.i=0;abc.prev=&jkl;
     abc.next=&def;
     def.i=1;def.prev=&abc;def.next=&ghi;
     ghi.i=2;ghi.prev=&def;
     ghi.next=&jkl;
     jkl.i=3;jkl.prev=&ghi;jkl.next=&abc;
     x=abc.next->next->prev->next->i;
     
     printf("%d",x);
}

C DEBUGGING 145

Answer:
2
Explanation:
Above all statements form a double circular linked list;
abc.next->next->prev->next->i
this one points to "ghi" node the value of at particular node is 2.

75.  Program 75

struct point
{
     int x;
     int y;
};

struct point origin,*pp;

main()
{
     pp=&origin;
     
     printf("origin is(%d%d)\n",(*pp).x,(*pp).y);
     printf("origin is (%d%d)\n",pp->x,pp->y);
}
Answer:
origin is(0,0)
origin is(0,0)
Explanation:
pp is a pointer to structure. We can access the elements of the structure either with
arrow mark or with indirection operator.
Note:
Since structure point is globally declared x & y are initialized as zeroes.

76. Program 76

main()
{
     int i=_l_abc(10);
     
     printf("%d\n",--i);
}

int _l_abc(int i)
{

146 C PROGRAMS WITH SOLUTIONS

     return(i++);
}
Answer:
9
Explanation:
return(i++) it will first return i and then increments. i.e., 10 will be returned.

77.  Program 77

main()
{
     char *p;
     int *q;
     long *r;
     
     p=q=r=0;
     p++;
     q++;
     r++;
     
     printf("%p...%p...%p",p,q,r);
}
Answer:
0001...0002...0004
Explanation:
++ operator when applied to pointers increments address according to their
corresponding data-types.

78.  Program 78

main()
{
     char c=' ',x,convert(z);
     getc(c);
     
     if((c>='a') && (c<='z'))
           x=convert(c);
           
     printf("%c",x);
}

convert(z)
{
     return z-32;

C DEBUGGING 147

}
Answer:
Compiler error.
Explanation:
Declaration of convert and format of getc() are wrong.

79.  Program 79

main(int argc, char **argv)
{
     printf("enter the character");
     getchar();
     sum(argv[1],argv[2]);
}

sum(num1,num2)
int num1,num2;
{
     return num1+num2;
}
Answer:
Compiler error.
Explanation:
argv[1] & argv[2] are strings. They are passed to the function sum without converting
it to integer values.

80.  Program 80

# include <stdio.h>

int one_d[]={1,2,3};

main()
{
     int *ptr;
     
     ptr=one_d;
     ptr+=3;
     
     printf("%d",*ptr);
}
Answer:
garbage value

148  C PROGRAMS WITH SOLUTIONS

Explanation:
ptr pointer is pointing to out of the array range of one_d.

81.  Program 81

# include<stdio.h>

aaa() 
{
      printf("hi");
}

bbb()
{
      printf("hello");
}

ccc()
{
     printf("bye");
}

main()
{
     int (*ptr[3])();
     ptr[0]=aaa;
     ptr[1]=bbb;
     ptr[2]=ccc;
     ptr[2]();
}
Answer:
bye
Explanation:
ptr is array of pointers to functions of return type int.ptr[0] is assigned to address of the
function aaa. Similarly ptr[1] and ptr[2] for bbb and ccc respectively. ptr[2]() is in
effect of writing ccc(), since ptr[2] points to ccc.

82.  Program 82

#include<stdio.h>

main()
{
     FILE *ptr;
     char i;
     
     ptr=fopen("zzz.c","r");

C DEBUGGING 149

     while((i=fgetch(ptr))!=EOF)
              printf("%c",i);
}
Answer:
contents of zzz.c followed by an infinite loop.
Explanation:
The condition is checked against EOF, it should be checked against NULL.

83.  Program 83

main()
{
     int i =0;j=0;
     
     if(i && j++)
           printf("%d..%d",i++,j);
           printf("%d..%d,i,j);
}
Answer:
0..0
Explanation:
The value of i is 0. Since this information is enough to determine the truth value of the
boolean expression. So the statement following the if statement is not executed. The
values of i and j remain unchanged and get printed.

84.  Program 84

main()
{
     int i;
     
     i = abc();
     
     printf("%d",i);
}

abc()
{
     _AX = 1000;
}
Answer:
1000

150 C PROGRAMS WITH SOLUTIONS

Explanation:
Normally the return value from the function is through the information from the
accumulator. Here _AH is the pseudo global variable denoting the accumulator. Hence,
the value of the accumulator is set 1000 so the function returns value 1000.

85.  Program 85

int i;

main()
{
     int t;
     
     for(t=4; scanf("%d",&i)-t;printf("%d\n",i))
            printf("%d--",t--);
}
// If the inputs are 0,1,2,3 find the o/p
Answer:
4--0
3--1
2--2
Explanation:
Let us assume some x= scanf("%d",&i)-t the values during execution will be,

t      i      x
4      0      -4
3      1      -2
2      2      0

86.  Program 86

main()
{
     int a= 0;int b = 20;char x =1;char y =10;
     
     if(a,b,x,y)
           printf("hello");
}
Answer:
hello
Explanation:
The comma operator has associativity from left to right. Only the rightmost value is
returned and the other values are evaluated and ignored. Thus the value of last variable
y is returned to check in if. Since it is a non zero value if becomes true so, "hello" will
be printed.

C DEBUGGING  151

87.  Program 87

main()
{
     unsigned int i;
     
     for(i=1; i>-2; i--)
            printf("c aptitude");
}
Explanation:
i is an unsigned integer. It is compared with a signed value. Since the both types
doesn't match, signed is promoted to unsigned value. The unsigned equivalent of -2 is
a huge value so condition becomes false and control comes out of the loop.

88. In the following pgm add a stmt in the function fun such that the address of 'a' gets 
    stored in 'j'.

main()
{
     int * j;
     
     void fun(int **);
     fun(&j);
}

void fun(int **k) 
{
     int a =0;
/* add a stmt here*/
}
Answer:
*k = &a
Explanation:
The argument of the function is a pointer to a pointer.

89. What are the following notations of defining functions known as?

(i.) 

int abc(int a,float b)
{
     /* some code */
}

(ii.) 

int abc(a,b)
int a; float b;
{
     /* some code*/
}

152  C PROGRAMS WITH SOLUTIONS

Answer:
i. ANSI C notation
ii. Kernighan & Ritche notation.

90.  Program 90

main()
{
     char *p;
     
     p="%d\n";
     
     p++;
     p++;
     
     printf(p-2,300);
}
Answer:
300
Explanation:
The pointer points to % since it is incremented twice and again decremented by 2, it
points to '%d\n' and 300 is printed.

91.  Program 91

main()
{
     char a[100];
     
     a[0]='a'; a[1]='b'; a[2]='c'; a[4]='d';
     
     abc(a);
}

abc(char a[])
{
     a++;
     printf("%c",*a);
     
     a++;
     printf("%c",*a);
}
Explanation:
The base address is modified only in function and as a result a points to 'b' then after
incrementing to 'c' so bc will be printed.

92.  Program 92

func(a,b)
int a,b;

C DEBUGGING 153

{
     return( a= (a==b) );
}

main()
{
     int process(),func();
     
     printf("The value of process is %d !\n ",process(func,3,6));
}

process(pf,val1,val2)
int (*pf) ();
int val1,val2;
{
     return((*pf) (val1,val2));
}
Answer:
The value of process is 0 !
Explanation:
The function 'process' has 3 parameters - 1, a pointer to another function 2 and 3,
integers. When this function is invoked from main, the following substitutions for formal
parameters take place: func for pf, 3 for val1 and 6 for val2. This function returns the
result of the operation performed by the function 'func'. The function func has two
integer parameters. The formal parameters are substituted as 3 for a and 6 for b. since
3 is not equal to 6, a==b returns 0. Therefore the function returns 0 which in turn is
returned by the function 'process'.

93.  Program 93

void main()
{
     static int i=5;
     
     if(--i) 
     {
          main();
          
          printf("%d ",i);
     }
}
Answer:
0000

154  C PROGRAMS WITH SOLUTIONS

Explanation:
The variable "I" is declared as static, hence memory for I will be allocated for only
once, as it encounters the statement. The function main() will be called recursively
unless I becomes equal to 0, and since main() is recursively called, so the value of
static I ie., 0 will be printed every time the control is returned.

94.  Program 94

void main()
{
     int k=ret(sizeof(float));
     printf("\n here value is %d",++k);
}

int ret(int ret)
{
     ret += 2.5;
     
     return(ret);
}
Answer:
Here value is 7
Explanation:
The int ret(int ret), ie., the function name and the argument name can be the same.
Firstly, the function ret() is called in which the sizeof(float) i.e., 4 is passed, after the
first expression the value in ret will be 6, as ret is integer hence the value stored in ret
will have implicit type conversion from float to int. The ret is returned in main() it is
printed after and preincrement.

95.  Program 95

void main()
{
     char a[]="12345\0";
     int i=strlen(a);
     
     printf("here in 3 %d\n",++i);
}
Answer:
here in 3 6
Explanation:
The char array 'a' will hold the initialized string, whose length will be counted from 0 till
the null character. Hence the 'I' will hold the value equal to 5, after the pre-increment
in the printf statement, the 6 will be printed.

C DEBUGGING  155

96.  Program 96

void main()
{
     unsigned giveit=-1;
     int gotit;
     
     printf("%u ",++giveit);
     printf("%u \n",gotit=--giveit);
}
Answer:
0 65535
Explanation:
give it value is incremented. In printf, the value of gotit is the decrement of give it.

97.  Program 97

void main()
{
     int i;
     char a[]="\0";
     
     if(printf("%s\n",a))
           printf("Ok here \n");
     else
             printf("Forget it\n");
}
Answer:
Ok here
Explanation:
printf will return how many characters does it print. Hence printing a null character
returns 1 which makes the if statement true, thus "Ok here" is printed.

98.  Program 98
void main()
{
     void *v;
     int integer=2;
     int *i=&integer;
     v=i;
     
     printf("%d",(int*)*v);
}
Answer:
Compiler Error. We cannot apply indirection on type void*.

156  C PROGRAMS WITH SOLUTIONS

Explanation:
Void pointer is a generic pointer type. No pointer arithmetic can be done on it. Void
pointers are normally used for:
1. Passing generic pointers to functions and returning such pointers.
2. As a intermediate pointer type.
3. Used when the exact pointer type will be known at a later point of time.

99.  Program 99

void main()
{
     int i=i++, j=j++, k=k++;
     
     printf("%d%d%d",i,j,k);
}
Answer:
Garbage values.
Explanation:
An identifier is available to use in program code from the point of its declaration.
So expressions such as i = i++ are valid statements. The i, j and k are automatic
variables and so they contain some garbage value. Garbage in is garbage out (GIGO).

100.  Program 100

void main()
{
     static int i=i++, j=j++, k=k++;
     
     printf("i = %d j = %d k = %d", i, j, k);
}
Answer:
i=1j=1k=1
Explanation:
Since static variables are initialized to zero by default.

101.  Program 101

void main()
{
     while(1)
     {
          if(printf("%d",printf("%d")))
                break;
          else
                  continue;
     }
}

C DEBUGGING 157

Answer:
Garbage values
Explanation:
The inner printf executes first to print some garbage value. The printf returns No. of
characters printed and this value also cannot be predicted. Still the outer printf prints
something and so returns a non-zero value. So it encounters the break statement and
comes out of the while statement.

102.  Program 102

main()
{
     unsigned int i=10;
     
     while(i-->=0)
              printf("%u ",i);
}
Answer:
10 9 8 7 6 5 4 3 2 1 0 65535 65534…..
Explanation:
Since i is an unsigned integer it can never become negative. So the expression i-- >=0
will always be true, leading to an infinite loop.

103.  Program 103

#include<conio.h>
main()
{
     int x,y=2,z,a;
     
     if(x=y%2) z=2;
     
     a=2;
     
     printf("%d %d",z,x);
}
Answer:
Garbage-value 0
Explanation:
The value of y%2 is 0. This value is assigned to x. The condition reduces to if (x) or in
other words if(0) and so z goes uninitialized.
Thumb Rule: Check all control paths to write bug free code.

158  C PROGRAMS WITH SOLUTIONS

104.  Program 104

main()
{
     int a[10];
     
     printf("%d",*a+1-*a+3);
}
Answer:
4
Explanation:
*a and -*a cancels out. The result is as simple as 1 + 3 = 4 !

105.  Program 105

#define prod(a,b) a*b
main()
{
     int x=3,y=4;
     
     printf("%d",prod(x+2,y-1));
}
Answer:
10
Explanation:
The macro expands and evaluates to as:
x+2*y-1 => x+(2*y)-1 => 10

106.  Program 106

main()
{
     unsigned int i=65000;
     
     while(i++!=0);
     
     printf("%d",i);
}
Answer:
1
Explanation:
Note the semicolon after the while statement. When the value of i becomes 0 it comes
out of while loop. Due to post-increment on i the value of i while printing is 1.

107.  Program 107

main()
{

C DEBUGGING

159

     int i=0;
     
     while(+(+i--)!=0)
              i-=i++;
              
     printf("%d",i);
}
Answer:
-1
Explanation:
Unary + is the only dummy operator in C. So it has no effect on the expression and
now the while loop is, while(i--!=0) which is false and so breaks out of while loop. The
value –1 is printed due to the post-decrement operator.

108.  Program 108

main()
{
     float f=5,g=10;
     
     enum{i=10,j=20,k=50};
     
     printf("%d\n",++k);
     printf("%f\n",f<<2);
     printf("%lf\n",f%g);
     printf("%lf\n",fmod(f,g));
}
Answer:
Line no 5: Error: Lvalue required
Line no 6: Cannot apply leftshift to float
Line no 7: Cannot apply mod to float
Explanation:
Enumeration constants cannot be modified, so you cannot apply ++.
Bit-wise operators and % operators cannot be applied on float values.
fmod() is to find the modulus values for floats as % operator is for ints.

109.  Program 109

main()
{
     int i=10;
     
     void pascal f(int,int,int);
     
     f(i++,i++,i++);
     
     printf(" %d",i);

160  C PROGRAMS WITH SOLUTIONS

}

void pascal f(integer :i,integer:j,integer :k)
{
     write(i,j,k);
}

Answer:
Compiler error: unknown type integer
Compiler error: undeclared function write
Explanation:
Pascal keyword doesn't mean that pascal code can be used. It means that the function
follows Pascal argument passing mechanism in calling the functions.

110.  Program 110

void pascal f(int i,int j,int k)
{
     printf("%d %d %d",i, j, k);
}

void cdecl f(int i,int j,int k)
{
     printf("%d %d %d",i, j, k);
}

main()
{
     int i=10;
     
     f(i++,i++,i++);
     
     printf(" %d\n",i);
     
     i=10;
     
     f(i++,i++,i++);
     
     printf(" %d",i);
}

Answer:
10 11 12 13
12 11 10 13
Explanation:
Pascal argument passing mechanism forces the arguments to be called from left to
right. cdecl is the normal C argument passing mechanism where the arguments are
passed from right to left.

C DEBUGGING 161

111. What is the output of the program given below?

main()
{
     signed char i=0;
     
     for(;i>=0;i++);
     
     printf("%d\n",i);
}
Answer:
-128
Explanation:
Notice the semicolon at the end of the for loop. The initial value of the i is set to 0. The
inner loop executes to increment the value from 0 to 127 (the positive range of char)
and then it rotates to the negative value of -128. The condition in the for loop fails and
so comes out of the for loop. It prints the current value of i that is -128.

112. Program 112

main()
{
     unsigned char i=0;
     
     for(; i>=0; i++);
     
     printf("%d\n",i);
}

Answer:
infinite loop
Explanation:
The difference between the previous question and this one is that the char is declared
to be unsigned. So the i++ can never yield negative value and i>=0 never becomes
false so that it can come out of the for loop.

113.  Program 113

main()
{
     char i=0;
     
     for(; i>=0; i++);
     
     printf("%d\n",i);
}

162  C PROGRAMS WITH SOLUTIONS

Answer:
Behavior is implementation dependent.
Explanation:
The detail if the char is signed/unsigned by default is implementation dependent. If the
implementation treats the char to be signed by default the program will print –128 and
terminate. On the other hand if it considers char to be unsigned by default, it goes to
infinite loop.
Rule:
You can write programs that have implementation dependent behavior. But don't write
programs that depend on such behavior.

114. Is the following statement a declaration/definition. Find what does it mean?

     int (*x)[10];

Answer:
Definition.
x is a pointer to array of(size 10) integers.
Apply clock-wise rule to find the meaning of this definition.

115. What is the output for the program given below?
typedef enum errorType
                     {
                          warning, 
                          error, 
                          exception,}error;
main()
{
     error g1;
     g1=1;
     
     printf("%d",g1);
}

Answer:
Compiler error: Multiple declaration for error.
Explanation:
The name error is used in the two meanings. One means that it is a enumerator constant
with value 1. The another use is that it is a type name (due to typedef) for enum
errorType. Given a situation the compiler cannot distinguish the meaning of error to
know in what sense the error is used:
error g1;
g1=error;
// which error it refers in each case?

C DEBUGGING  163

When the compiler can distinguish between usages then it will not issue error (in pure
technical terms, names can only be overloaded in different namespaces).
Note: The extra comma in the declaration, enum errorType{warning, error, exception,}
is not an error. An extra comma is valid and is provided just for programmer's
convenience.

116. typedef struct error{int warning, error, exception;}error;

main()
{
     error g1;
     g1.error =1;
     
     printf("%d",g1.error);
}
Answer:
1
Explanation:
The three usages of name errors can be distinguishable by the compiler at any instance,
so valid (they are in different namespaces).
Typedef struct error{int warning, error, exception;}error;
This error can be used only by preceding the error by struct kayword as in:
struct error someError;
typedef struct error{int warning, error, exception;}error;
This can be used only after . (dot) or -> (arrow) operator preceded by the variable
name as in :
g1.error =1;
printf("%d",g1.error);
typedef struct error{int warning, error, exception;}error;
This can be used to define variables without using the preceding struct keyword as in:
error g1;
Since the compiler can perfectly distinguish between these three usages, it is perfectly
legal and valid.
Note:
This code is given here to just explain the concept behind. In real programming don't
use such overloading of names. It reduces the readability of the code. Possible doesn't
mean that we should use it!

164  C PROGRAMS WITH SOLUTIONS

117.  Program 117

#ifdef something
int some=0;
#endif

main()
{
     int thing = 0;
     
     printf("%d %d\n", some ,thing);
}
Answer:
Compiler error : undefined symbol some
Explanation:
This is a very simple example for conditional compilation. The name something is not
already known to the compiler making the declaration
int some = 0;
effectively removed from the source code.

118.  Program 118

#if something == 0
int some=0;
#endif

main()
{
     int thing = 0;
     
     printf("%d %d\n", some ,thing);
}
Answer:
00
Explanation:
This code is to show that preprocessor expressions are not the same as the ordinary
expressions. If a name is not known the preprocessor treats it to be equal to zero.

119. What is the output for the following program?
main()
{
     int arr2D[3][3];

C DEBUGGING 165

     printf("%d\n", ((arr2D==* arr2D)&&(* arr2D == arr2D[0])) );
}
Answer:
1
Explanation:
This is due to the close relation between the arrays and pointers. N dimensional arrays
are made up of (N-1) dimensional arrays. arr2D is made up of a 3 single arrays that
contains 3 integers each.
arr2D

arr2D[1]
arr2D[2]
arr2D[3]
The name arr2D refers to the beginning of all the 3 arrays. *arr2D refers to the start of
the first 1D array (of 3 integers) that is the same address as arr2D. So the expression
(arr2D == *arr2D) is true (1).
Similarly, *arr2D is nothing but *(arr2D + 0), adding a zero doesn't change the value/
meaning. Again arr2D[0] is the another way of telling *(arr2D + 0). So the expression
(*(arr2D + 0) == arr2D[0]) is true (1).
Since both parts of the expression evaluates to true the result is true(1) and the same is
printed.

120. Program 120

void main()
{
     if(~0 == (unsigned int)-1)
           printf("You can answer this if you know how values are represented in memory");
}
Answer:
You can answer this if you know how values are represented in memory.
Explanation:
~ (tilde operator or bit-wise negation operator) operates on 0 to produce all ones to fill
the space for an integer. –1 is represented in unsigned value as all 1's and so both are
equal.

166  C PROGRAMS WITH SOLUTIONS

121.  Program 121

int swap(int *a,int *b)
{
     *a=*a+*b;*b=*a-*b;*a=*a-*b;
}

main()
{
     int x=10,y=20;
     
     swap(&x,&y);
     
     printf("x= %d y = %d\n",x,y);
}
Answer:
x = 20 y = 10
Explanation:
This is one way of swapping two values. Simple checking will help understand this.

122.  Program 122

main()
{
     char *p = "ayqm";
     
     printf("%c",++*(p++));
}
Answer:
b
Explanation:
Address of p is incremented and the value of p is incremented after that.

123.  Program 123

main()
{
     int i=5;
     
     printf("%d",++i++);
}
Answer:
Compiler error: Lvalue required in function main
Explanation:
++i yields an rvalue. For postfix ++ to operate an lvalue is required.

124.  Program 124

main()
{
     char *p = "ayqm";

C DEBUGGING 167

     char c;
     c = ++*p++;
     printf("%c",c);
}
Answer:
b
Explanation:
There is no difference between the expression ++*(p++) and ++*p++. Parenthesis just
works as a visual clue for the reader to see which expression is first evaluated.

125.  Program 125

int aaa() {printf("Hi");}
int bbb() {printf("hello");}
iny ccc() {printf("bye");}
main()
{
     int ( * ptr[3]) ();
     ptr[0] = aaa;
     ptr[1] = bbb;
     ptr[2] =ccc;
     ptr[2]();
}
Answer:
bye
Explanation:
int (* ptr[3])() says that ptr is an array of pointers to functions that takes no arguments
and returns the type int. By the assignment ptr[0] = aaa; it means that the first function
pointer in the array is initialized with the address of the function aaa. Similarly, the other
two array elements also get initialized with the addresses of the functions bbb and ccc.
Since ptr[2] contains the address of the function ccc, the call to the function ptr[2]() is
same as calling ccc(). So it results in printing "bye".

126. Program 126

main()
{

168  C PROGRAMS WITH SOLUTIONS

     int i=5;
     printf("%d",i=++i ==6);
}
Answer:
1
Explanation:
The expression can be treated as i = (++i==6), because == is of higher precedence
than = operator. In the inner expression, ++i is equal to 6 yielding true(1). Hence the
result.

127.  Program 127

main()
{
     char p[ ]="%d\n";
     p[1] = 'c';
     printf(p,65);
}
Answer:
A
Explanation:
Due to the assignment p[1] = 'c' the string becomes, "%c\n". Since this string becomes
the format string for printf and ASCII value of 65 is 'A', the same gets printed.

128. Describe given expression.

         void ( * abc( int, void ( *def) () ) ) ();
         
Answer:
abc is a ptr to a function which takes 2 parameters .(a). an integer variable.(b). a ptrto
a funtion which returns void. the return type of the function is void.
Explanation:
Apply the clock-wise rule to find the result.

129.  Program 129

main()
{
     while (strcmp("some","some\0"))
              printf("Strings are not equal\n");
}

C DEBUGGING 169

Answer:
No output
Explanation:
Ending the string constant with \0 explicitly makes no difference. So "some" and
"some\0" are equivalent. So, strcmp returns 0 (false) hence breaking out of the while
loop.

130.  Program 130

main()
{
     char str1[] = {'s','o','m','e'};
     char str2[] = {'s','o','m','e','\0'};

     while (strcmp(str1,str2))
              printf("Strings are not equal\n");
}
Answer:
"Strings are not equal"
"Strings are not equal"
….
Explanation:
If a string constant is initialized explicitly with characters, '\0' is not appended
automatically to the string. Since str1 doesn't have null termination, it treats whatever
the values that are in the following positions as part of the string until it randomly
reaches a '\0'. So str1 and str2 are not the same, hence the result.

131.  Program 131

main()
{
     int i = 3;
     
     for (;i++=0;) printf("%d",i);
}
Answer:
Compiler Error: Lvalue required.
Explanation:
As we know that increment operators return rvalues and hence it cannot appear on
the left hand side of an assignment operation.

170 C PROGRAMS WITH SOLUTIONS

132.  Program 132

void main()
{
     int *mptr, *cptr;
     
     mptr = (int*)malloc(sizeof(int));
     
     printf("%d",*mptr);
     
     int *cptr = (int*)calloc(sizeof(int),1);
     
     printf("%d",*cptr);
}
Answer:
garbage-value 0
Explanation:
The memory space allocated by malloc is uninitialized, whereas calloc returns the
allocated memory space initialized to zeros.

133. Program 133

void main()
{
     static int i;
     
     while(i<=10)
              (i>2)?i++:i--;
              
     printf("%d", i);
}
Answer:
32767
Explanation:
Since i is static it is initialized to 0. Inside the while loop the conditional operator evaluates
to false, executing i--. This continues till the integer value rotates to positive value
(32767). The while condition becomes false and hence, comes out of the while loop,
printing the i value.

134. Program 134

main()
{
     int i=10,j=20;
     
     j = i, j?(i,j)?i:j:j;
     
     printf("%d %d", i, j);
}

C DEBUGGING 171

Answer:
10 10
Explanation:
The Ternary operator ( ? : ) is equivalent for if-then-else statement. So the question
can be written as:
if(i,j)
{
if(i,j)
j = i;
else
j = j;
}
else
j = j;

135. Program 135

     1. const char *a;
     2. char* const a;
     3. char const *a;
-Differentiate the above declarations.

Answer:
  1. 'const' applies to char * rather than 'a' ( pointer to a constant char )
          *a='F'    : illegal
           a="Hi"   : legal

  2. 'const' applies to 'a' rather than to the value of a (constant pointer to char )
          *a='F'    : legal
           a="Hi"   : illegal

  3. Same as 1.

136. Program 136

main()
{
     int i=5,j=10;
     i=i&=j&&10;
     
     printf("%d %d",i,j);
}

172  C PROGRAMS WITH SOLUTIONS

Answer:
1 10
Explanation:
The expression can be written as i=(i&=(j&&10)); The inner expression (j&&10)
evaluates to 1 because j==10. i is 5. i = 5&1 is 1. Hence the result.

137. Program 137

main()
{
     int i=4,j=7;
     
     j = j || i++ && printf("YOU CAN");

     printf("%d %d", i, j);
}
Answer:
41
Explanation:
The boolean expression needs to be evaluated only till the truth value of the
expression is not known. j is not equal to zero itself means that the expression's truth
value is 1. Because it is followed by || and true || (anything) => true where (anything)
will not be evaluated. So the remaining expression is not evaluated and so the value
of i remains the same.
Similarly when && operator is involved in an expression, when any of the operands
become false, the whole expression's truth value becomes false and hence the remaining
expression will not be evaluated. false && (anything) => false where (anything)
will not be evaluated.

138. Program 138

main()
{
     register int a=2;
     
     printf("Address of a = %d",&a);
     printf("Value of a = %d",a);
}
Answer:
Compiler Error: '&' on register variable
Rule to Remember:
& (address of ) operator cannot be applied on register variables.

C DEBUGGING 173

139. Program 139

main()
{
     float i=1.5;
     switch(i)
     {
          case 1: printf("1");
          case 2: printf("2");
          
          default : printf("0");
     }
}
Answer:
Compiler Error: switch expression not integral
Explanation:
Switch statements can be applied only to integral types.

140. Program 140

main()
{
     extern i;
     
     printf("%d\n",i);
     {
          int i=20;
          
          printf("%d\n",i);
     }
}
Answer:
Linker Error : Unresolved external symbol i
Explanation:
The identifier i is available in the inner block and so using extern has no use in resolving
it.

141. Program 141

main()
{
     int a=2,*f1,*f2;
     f1=f2=&a;
     *f2+=*f2+=a+=2.5;

174  C PROGRAMS WITH SOLUTIONS

     printf("\n%d %d %d",a,*f1,*f2);
}
Answer:
16 16 16
Explanation:
f1 and f2 both refer to the same memory location a. So changes through f1 and f2
ultimately affects only the value of a.

142. Program 142

main()
{
     char *p="GOOD";
     char a[ ]="GOOD";
     
     printf("\n sizeof(p) = %d, sizeof(*p) = %d, strlen(p) = %d", sizeof(p),sizeof(*p), strlen(p));
     printf("\n sizeof(a) = %d, strlen(a) = %d", sizeof(a), strlen(a));
}
Answer:
sizeof(p) = 2, sizeof(*p) = 1, strlen(p) = 4
sizeof(a) = 5, strlen(a) = 4
Explanation:
sizeof(p) => sizeof(char*) => 2
sizeof(*p) => sizeof(char) => 1
Similarly,
sizeof(a) => size of the character array => 5
When sizeof operator is applied to an array it returns the sizeof the array and it is
not the same as the sizeof the pointer variable. Here the sizeof(a) where a is the
character array and the size of the array is 5 because the space necessary for the
terminating NULL character should also be taken into account.

143. Program 143

#define DIM( array, type) sizeof(array)/sizeof(type)
main()
{
     int arr[10];
     
     printf("The dimension of the array is %d", DIM(arr, int));
}

C DEBUGGING  175

Answer:
10
Explanation:
The size of integer array of 10 elements is 10 * sizeof(int). The macro expands to
sizeof(arr)/sizeof(int) => 10 * sizeof(int) / sizeof(int) => 10.

144. Program 144

int DIM(int array[])
{
     return sizeof(array)/sizeof(int );
}

main()
{
     int arr[10];
     
     printf("The dimension of the array is %d", DIM(arr));
}
Answer:
1
Explanation:
Arrays cannot be passed to functions as arguments and only the pointers can be passed.
So the argument is equivalent to int * array (this is one of the very few places where []
and * usage are equivalent). The return statement becomes, sizeof(int *)/ sizeof(int)
that happens to be equal in this case.

145. Program 145

main()
{
     static int a[3][3]={1,2,3,4,5,6,7,8,9};
     int i,j;
     static *p[]={a,a+1,a+2};
     
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
                 printf("%d\t%d\t%d\t%d\n",*(*(p+i)+j), *(*(j+p)+i),*(*(i+p)+j),*(*(p+j)+i));
     }
}

176 C PROGRAMS WITH SOLUTIONS

Answer:
1111
2424
3737
4242
5555
6868
7373
8686
9999

Explanation:
*(*(p+i)+j) is equivalent to p[i][j].

146. Program 146

main()
{
     void swap();
     
     int x=10,y=8;
     
     swap(&x,&y);
     
     printf("x=%d y=%d",x,y);
}

void swap(int *a, int *b)
{
     *a ^= *b, *b ^= *a, *a ^= *b;
}
Answer:
x=10 y=8
Explanation:
Using ^ like this is a way to swap two variables without using a temporary variable and
that too in a single statement.
Inside main(), void swap(); means that swap is a function that may take any number of
arguments (not no arguments) and returns nothing. So this doesn't issue a compiler
error by the call swap(&x,&y); that has two arguments.
This convention is historically due to pre-ANSI style (referred to as Kernighan and
Ritchie style) style of function declaration. In that style, the swap function will be
defined as follows,

C DEBUGGING 177

void swap()
int *a, int *b
{
     *a ^= *b, *b ^= *a, *a ^= *b;
}
where the arguments follow the (). So naturally the declaration for swap will look like,
void swap() which means the swap can take any number of arguments.

147. Program 147

main()
{
     int i = 257;
     int *iPtr = &i;
     
     printf("%d %d", *((char*)iPtr), *((char*)iPtr+1) );
}
Answer:
11
Explanation:
The integer value 257 is stored in the memory as, 00000001 00000001, so the individual
bytes are taken by casting it to char * and get printed.

148. Program 148

main()
{
     int i = 258;
     int *iPtr = &i;
     
     printf("%d %d", *((char*)iPtr), *((char*)iPtr+1) );
}
Answer:
21
Explanation:
The integer value 257 can be represented in binary as, 00000001 00000001. Remember
that the INTEL machines are 'small-endian' machines. Small-endian means that the
lower order bytes are stored in the higher memory addresses and the higher order
bytes are stored in lower addresses. The integer value 258 is stored in memory as:
00000001 00000010.

178 C PROGRAMS WITH SOLUTIONS

149. Program 149

main()
{
     int i=300;
     char *ptr = &i;
     *++ptr=2;
     
     printf("%d",i);
}
Answer:
556
Explanation:
The integer value 300 in binary notation is: 00000001 00101100. It is stored in memory
(small-endian) as: 00101100 00000001. Result of the expression *++ptr = 2 makes the
memory representation as: 00101100 00000010. So the integer corresponding to it is
00000010 00101100 => 556.

150. Program 150

#include <stdio.h>
main()
{
     char * str = "hello";
     char * ptr = str;
     char least = 127;
     
     while(*ptr++)
              least = (*ptr<least ) ? *ptr :least;
              
     printf("%d",least);
}
Answer:
0
Explanation:
After 'ptr' reaches the end of the string the value pointed by 'str' is '\0'. So the value of
'str' is less than that of 'least'. So the value of 'least' finally is 0.

151. Declare an array of N pointers to functions returning pointers to functions returning pointers
     to characters?
Answer:
(char*(*)()) (*ptr[N])();

C DEBUGGING 179

152. Program 152

main()
{
     struct student
     {
          char name[30];
          struct date dob;
     }stud;
     
     struct date
     {
          int day,month,year;
     };
     scanf("%s%d%d%d", stud.rollno, &student.dob.day, &student.dob.month, &student.dob.year);
}

Answer:
Compiler Error: Undefined structure date
Explanation:
Inside the struct definition of 'student' the member of type struct date is given. The
compiler doesn't have the definition of date structure (forward reference is not allowed
in C in this case) so it issues an error.

153. Program 153

main()
{
     struct date;
     
     struct student
     {
          char name[30];
          struct date dob;
     }stud;
     
     struct date
     {
          int day,month,year;
     };
     
     scanf("%s%d%d%d", stud.rollno, &student.dob.day, &student.dob.month, &student.dob.year);
}

180  C PROGRAMS WITH SOLUTIONS

Answer:
Compiler Error: Undefined structure date
Explanation:
Only declaration of struct date is available inside the structure definition of 'student'
but to have a variable of type struct date the definition of the structure is required.

154. There were 10 records stored in "somefile.dat" but the following program printed 11 names.
     What went wrong?
     
void main()
{
     struct student
     {
          char name[30], rollno[6];
     }stud;
     
     FILE *fp = fopen("somefile.dat","r");
     
     while(!feof(fp))
     {
          fread(&stud, sizeof(stud), 1 , fp);
          puts(stud.name);
     }
}
Explanation:
fread reads 10 records and prints the names successfully. It will return EOF only when
fread tries to read another record and fails reading EOF (and returning EOF). So it
prints the last record again. After this only the condition feof(fp) becomes false, hence
comes out of the while loop.

155. Is there any difference between the two declarations?
     1. int foo(int *arr[]) and
     2. int foo(int *arr[2])
Answer:
No
Explanation:
Functions can only pass pointers and not arrays. The numbers that are allowed inside
the [] is just for more readability. So there is no difference between the two declarations.

C DEBUGGING 181

156. What is the subtle error in the following code segment?

void fun(int n, int arr[])
{
     int *p=0;
     int i=0;
     
     while(i++<n)
              p = &arr[i];
              
     *p = 0;
}
Answer & Explanation:
If the body of the loop never executes p is assigned no address. So p remains NULL
where *p =0 may result in problem (may rise to runtime error "NULL pointer assignment"
and terminate the program).

157. What is wrong with the following code?

int *foo()
{
     int *s = malloc(sizeof(int)100);
     assert(s != NULL);
     
     return s;
}

Answer & Explanation:
assert macro should be used for debugging and finding out bugs. The check s != NULL is
for error/exception handling and for that assert shouldn't be used. A plain if and the
corresponding remedy statement has to be given.

158. What is the hidden bug with the following statement?

     assert(val++ != 0);

Answer & Explanation:
assert macro is used for debugging and removed in release version. In assert, the
experssion involves side-effects. So the behavior of the code becomes different in
case of debug version and the release version thus leading to a subtle bug.
Rule to Remember:
Don't use expressions that have side-effects in assert statements.

182  C PROGRAMS WITH SOLUTIONS

159. Program 159

void main()
{
     int *i = 0x400; // i points to the address 400
     *i = 0;

// set the value of memory location pointed by i;

}
Answer:
Undefined behavior
Explanation:
The second statement results in undefined behavior because it points to some location
whose value may not be available for modification. This type of pointer in which the
non-availability of the implementation of the referenced location is known as 'incomplete
type'.

160. Program 160

#define assert(cond) if(!(cond)) \
(fprintf(stderr, "assertion failed: %s, file %s, line %d \n",#cond,\
__FILE__,__LINE__), abort())

void main()
{
     int i = 10;
     
     if(i==0)
           assert(i < 100);
     else
             printf("This statement becomes else for if in assert macro");
}
Answer:
No output
Explanation:
The else part in which the printf is there becomes the else for if in the assert macro.
Hence nothing is printed.
The solution is to use conditional operator instead of if statement,
#define assert(cond) ((cond)?(0): (fprintf (stderr, "assertion failed: \ %s, file %s, line
%d \n",#cond, __FILE__,__LINE__), abort()))

C DEBUGGING  183

Note:
However this problem of "matching with nearest else" cannot be solved by the usual
method of placing the if statement inside a block like this,
#define assert(cond) { \
if(!(cond)) \
(fprintf(stderr, "assertion failed: %s, file %s, line %d \n",#cond,\
__FILE__,__LINE__), abort()) \
}

161. Is the following code legal?

struct a
{
     int x;
     struct a b;
}

Answer:
No
Explanation:
It is not legal for a structure to contain a member that is of the same type as in this
case. Because this will cause the structure declaration to be recursive without end.

162. Is the following code legal?

struct a
{
     int x;
     struct a *b;
}
Answer:
Yes.
Explanation:
*b is a pointer to type struct a and so is legal. The compiler knows, the size of the
pointer to a structure even before the size of the structure is determined(as you know
the pointer to any type is of same size). This type of structures is known as 'selfreferencing' structure.

184 C PROGRAMS WITH SOLUTIONS

163. Is the following code legal?

typedef struct a
{
     int x;
     aType *b;
}aType
Answer:
No
Explanation:
The typename aType is not known at the point of declaring the structure (forward
references are not made for typedefs).

164. Is the following code legal?

typedef struct a aType;
struct a
{
     int x;
     aType *b;
};

Answer:
Yes
Explanation:
The typename aType is known at the point of declaring the structure, because it is
already typedefined.

165. Is the following code legal?

void main()
{
     typedef struct a aType;
     aType someVariable;
     struct a
     {
          int x;
          aType *b;
     };
}

C DEBUGGING

185

Answer:
No
Explanation:
When the declaration,
typedef struct a aType;
is encountered body of struct a is not known. This is known as 'incomplete types'.

166. Program 166

void main()
{
     printf("sizeof (void *) = %d \n", sizeof( void *));
     printf("sizeof (int *) = %d \n", sizeof(int *));
     printf("sizeof (double *) = %d \n", sizeof(double *));
     printf("sizeof(struct unknown *) = %d \n", sizeof(struct unknown *));
}

Answer:
sizeof (void *) = 2
sizeof (int *) = 2
sizeof (double *) = 2
sizeof(struct unknown *) = 2
Explanation:
The pointer to any type is of same size.

167. char inputString[100] = {0};
     To get string input from the keyboard which one of the following is better?
     1) gets(inputString)
     2) fgets(inputString, sizeof(inputString), fp)

Answer & Explanation:
The second one is better because gets(inputString) doesn't know the size of the string
passed and so, if a very big input (here, more than 100 chars) the charactes will be
written past the input string. When fgets is used with stdin performs the same operation
as gets but is safe.

168. Which version do you prefer of the following two?
     1) printf("%s",str);
     2) printf(str);

// or the more curt one

186  C PROGRAMS  WITH  SOLUTIONS

Answer & Explanation:
Prefer the first one. If the str contains any format characters like %d then it will result
in a subtle bug.

169. Program 169

void main()
{
     int i=10, j=2;
     int *ip= &i, *jp = &j;
     int k = *ip/*jp;
     
     printf("%d",k);
}
Answer:
Compiler Error: "Unexpected end of file in comment started in line 5".
Explanation:
The programmer intended to divide two integers, but by the "maximum munch" rule,
the compiler treats the operator sequence / and * as /* which happens to be the starting
of comment. To force what is intended by the programmer,
int k = *ip/ *jp;
// give space explicity separating / and *
//or
int k = *ip/(*jp);
// put braces to force the intention will solve the problem.

170. Program 170

void main()
{
     char ch;
     
     for(ch=0;ch<=127;ch++)
            printf("%c %d \n", ch, ch);
}

Answer:
Implementaion dependent
Explanation:
The char type may be signed or unsigned by default. If it is signed then ch++ is executed
after ch reaches 127 and rotates back to -128. Thus ch is always smaller than 127.

C DEBUGGING 187

171. Is this code legal?

     int *ptr;
     ptr = (int *) 0x400;

Answer:
Yes
Explanation:
The pointer ptr will point at the integer in the memory location 0x400.

172. Program 172

main()
{
     char a[4]="HELLO";
     
     printf("%s",a);
}
Answer:
Compiler error: Too many initializers
Explanation:
The array a is of size 4 but the string constant requires 6 bytes to get stored.

173. Program 173

main()
{
     char a[4]="HELL";
     
     printf("%s",a);
}
Answer:
HELL%@!~@!@???@~~!
Explanation:
The character array has the memory just enough to hold the string "HELL" and doesnt
have enough space to store the terminating null character. So it prints the HELL correctly
and continues to print garbage values till it accidentally comes across a NULL character.

174. Program 174

main()
{
     int a=10, *j;
     void *k;
     j=k=&a;
     j++;

188 C PROGRAMS WITH SOLUTIONS

     k++;
     
     printf("\n %u %u ",j,k);
}
Answer:
Compiler error: Cannot increment a void pointer
Explanation:
Void pointers are generic pointers and they can be used only when the type is not
known and as an intermediate address storage type. No pointer arithmetic can be done
on it and you cannot apply indirection operator (*) on void pointers.

175. Program 175

main()
{
     extern int i;
     {

          int i=20;
          {
               const volatile unsigned i=30; printf("%d",i);
          }
          printf("%d",i);
     }
     printf("%d",i);
}
int i;

176. printf can be implemented by using __________ list.

Answer:
Variable length argument lists

177. Program 177

char *someFun()
{
     char *temp = "string constant";
     
     return temp;
}

int main()
{
     puts(someFun());
}

C DEBUGGING 189

Answer:
string constant
Explanation:
The program suffers no problem and gives the output correctly because the character
constants are stored in code/data area and not allocated in stack, so this doesn't lead to
dangling pointers.

178. Program 178

char *someFun1()
{
     char temp[ ] = "string";
     
     return temp;
}

char *someFun2()
{
     char temp[ ] = {'s', 't','r','i','n','g'};
     
     return temp;
}

int main()
{
     puts(someFun1());
     puts(someFun2());
}
Answer:
Garbage values.
Explanation:
Both the functions suffer from the problem of dangling pointers. In someFun1() temp is
a character array and so the space for it is allocated in heap and is initialized with
character string "string". This is created dynamically as the function is called, so is also
deleted dynamically on exiting the function so the string data is not available in the
calling function main() leading to print some garbage values. The function someFun2()
also suffers from the same problem but the problem can be easily identified in this
case.

179. What will print it?

main()
{

190 C PROGRAMS WITH SOLUTIONS

     char *k1="hitechskill.com";
     char *k2;
     k2=(char*)malloc(20);
     memset (k2, 0, 20);
     
     while(*k2++ = *k1++);
              printf("%s\n",k2);
}

Answer: empty string.

180. What will be printed as the result of the operation below?

main()
{
     int a=20, b=35;
     
     a=b++ + a++;
     b= ++b + ++a;
     
     printf("%d%d\n",a,b);
}

Answer: 5794

181. What will be printed as the result of the operation below?

main()
{
     int a=5;
     
     printf(?%d,%d,%d\n?,a,a< <2,a>>2);
}
Answer: 5,20,1

182. What will be printed as the result of the operation below?

#define swap(a,b) a=a+b;b=a-b;a=a-b;
void main()
{
     int m=5, n=10;

C DEBUGGING

     swap(m,n);
     
     printf("%d %d\n",m,n);
     
     swap2(m,n);
     
     printf("%d %d\n",m,n);
}

int swap2(int x, int y)
{
     int temp;
     temp=x;
     y=x;
     x=temp;
     
     return 0;
}

Answer: 10, 5
10, 5

183. What will be printed as the result of the operation below?

main()
{
     char *ptr = "SC Systems";
     *pt++; printf("%s\n",pt);
     pt++;
     
     printf("%s\n",pt);
}
Answer: SC Systems
C Systems

184. What will be printed as the result of the operation below?

main()
{
     char s1[]="SC";
     char s2[]= "Systems";

191

192 C PROGRAMS WITH SOLUTIONS

     printf("%s",s1);
}

Answer: SC

185. What will be printed as the result of the operation below?

main()
{
     char *ptr1;
     char *ptr2;
     
     ptr1=(char *)malloc(25);
     ptr2=(char *)malloc(25);
     
     strcpy(ptr1,"SC");
     strcpy(ptr2,"Systems");
     strcat(ptr1,ptr2);
     
     printf("%s",ptr1);
}

Answer: SCSystems

186. The following variable is available in file1.c, who can access it?:

     static int average;
     
Answer: All the functions in the file1.c can access the variable.

187. What will be the result of the following code?

#define TRUE 0 // some code
while(TRUE)
{
     // some code
}

Answer: This will not go into the loop as TRUE is defined as 0.

188. What will be printed as the result of the operation below?

int x;
int modifyvalue()

C DEBUGGING

{
     return(x+=10);
}

int changevalue(int x)
{
     return(x+=1);
}

void main()
{
     int x=10;
     x++;
     changevalue(x);
     x++;
     modifyvalue();
     
     printf("First output:%d\n",x);
     
     x++;
     changevalue(x);
     
     printf("Second output:%d\n",x);
     
     modifyvalue();
     
     printf("Third output:%d\n",x);
}
Answer: 12 , 13 , 13

189. What will be printed as the result of the operation below?

main()
{
     int x=10, y=15;
     x = x++;
     y = ++y;
     
     printf("%d %d\n",x,y);

193

194 C PROGRAMS WITH SOLUTIONS

}
Answer: 11, 16

190. How many times main is get called?

main()
{
     printf("Jumboree");
     main();
}
Answer: Till stack overflow

191. What is output for the following program?

#include<stdio.h>
main()
{
     int *p,*q,i;
     
     p=(int *)100;
     q=(int *)200;
     
     i=q-p;
     
     printf("%d",i);
}
a) 100 b) 25 c) 0

d) compile error

Answer : b) 25

192. What is output for the following program?

#include<stdio.h>
#define swap(a,b) temp=a,a=b,b=temp;
main()
{
     int a=5,b=6;
     int temp;
     
     if(a>b)
           swap(a,b);
           
     printf("a=%d,b= %d",a,b);
}

C DEBUGGING

a) a=5 b=6 b) a=6 b=5 c) a=0 b=6 d) None
Answer: a) a=5 b=6

193. What is output for the following program?

#include<stdio.h>
main()
{
     unsigned char i;
     
     for( i=0;i<300;i++)
     {
          printf("*");
     }
}

a)299 b)300 c)infinite

d)none

Answer: c) (infinite)

194. What is output for the following program?

#include<stdio.h>
main()
{
     int n=2;
     int sum=5;
     
     switch(n)
     {
          case 2:sum=sum-2;
          break;
          
          case 3:sum*=5;
          break;
          
          default :sum=0;
     }
     printf("%d",sum);
}

a)15 b)0 c)6
Answer: a) 15

d)none

195

196  C PROGRAMS WITH SOLUTIONS

195. What is output for the following program?

#include<stdio.h>
main()
{
     int a=10,b=5;
     
     if(a=a&b)
           b=a^b;
           
     printf("a=%d,b=%d",a,b);
}

a)a=0,b=5 b)a=10 b=5

c)a=0,b=0 d)none

Answer: a) a=0,b=5

196. What is output for the following program?
#include<stdio.h>
main()
{
    int a[5],i,*ip;
    
    for(i=0;i<5;i++)
           a[i]=i;
           
    ip=a;
           
    printf("%d",*(ip+3*sizeof(int)));
}
a)0

b)5 c)1 d)none

Answer: d) none

197. What is the size of the structure?

#include<stdio.h>
main()
{
     struct
     {
          char a;
          short b;
          int c;
     }temp;

C DEBUGGING  197

}
a)7 b)8 c)12

d)120

Answer: b)8
198. Define pointer to function that take argument as character pointer and return void pointer.
Answer:

void *(*f)(char *)

199. 5-2-3*5-2 evaluates 18 then
     i) - left associative * has precedence over 
     ii) - right associative * has precedence over 
     iii) * left associative - has precedence over *
     iv) * right associative - has precedence over *
a) i
b) ii
c) iii
d) iv

Answer: iv

200. Find the output of the following program.

void main()
{
     float b=1,h=1,a;
     a=1/2*b*h;
     
     printf("%.2f",a);
}

a) 0.00
b) 0.0
c) 0.50
d) 0.5
Answer: a) 0.00

201. Find the output of the following program.

void main()
{
     static int n[3];
     
     printf("%c",*(n+10)+90);
}

198 C PROGRAMS WITH SOLUTIONS

a) Garbage value
b) Runtime error
c) Compiler error
d) None of these
Answer: d) None of these

202. Find the output of the following program.

void main()
{
     printf("%%%%d\r%%%%%");
}
a) %%%
b) %%%%
c) %%%%%
d) None of these
Answer: a) %%%

203. Find the output of the following program.

int v()
{
    float m=0;
    
    return m++;
}

int main()
{
     printf("%.7f ",v());
}

a) 0.0000000
b) 0.00
c) Error
d) None
Answer: a) 0.0000000

204. Find the output of the following program.

void main()
{

C DEBUGGING

     int i=2,j=1;
     j>=i;
     
     printf("%d",j);
}

a) 1
b) 0
c) 2
d) None of these

Answer: a) 1

205. Find the output of the following program.

void main()
{
     int a=10, b=20;
     
     a^=b;
     b^=a;
     
     printf("%d : %d",a,b);
}

a) 10:30
b) 30:10
c) Garbage value
d) 20:10
Answer: b) 30:10

206. Find the output of the following program.

void main()
{
     int a=10;
     
     if(!(!a)==!0)
           printf("God");
     else
             printf("Good");
}

a) Good
b) God

199

200 C PROGRAMS WITH SOLUTIONS

c) We can't predict
d) Error
Answer: a) Good

207. Find the output of the following program.

void main()
{
     int a=100,b=200;
     
     printf("%c",a>b?'a':'b');
}

a) b
b) a
c) 200
d) 100

Answer: a) b

208. Find the output of the following program.

void main()
{
     char a=65,b=97;
     
     if('a>'b')
           printf("A")
           printf("B")
}

a) AB
b) A
c) B
d) Error

Answer: a) AB

209. What will be the output?

void main()
{
     do
     {

C DEBUGGING

          if(0)
                main();
                
      printf("Thaal");
     }while(0);
}

a) Thaal
b) Infinite Loop
c) Syntax error
d) Nothing get printed

Answer: a) Thaal

210. For the following C program

#define AREA(x)(3.14*x*x)
main()
{
     float r1=6.25,r2=2.5,a;
     
     a=AREA(r1);
     
     printf("\n Area of the circle is %f ", a);
     
     a=AREA(r2);
     
     printf("\n Area of the circle is %f ", a);
}

What is the output?

Answer: Area of the circle is 122.656250
Area of the circle is 19.625000

211. What will be the output?

void main()
{
     int d=5;
     
     printf("%f ",d);
}

Answer: Undefined

212. What will be the output?

void main()
{

201

202 C PROGRAMS WITH SOLUTIONS

     int i;
     
     for(i=1;i<4,i++)
            switch(i)
                      case 1: printf("%d",i);
                      break;
                      {
                           case 2:printf("%d",i);break;
                           case 3:printf("%d",i);break;
                      }
                      switch(i) case 4:printf("%d",i);
}

Answer: 1,2,3,4

213. What will be the output?

void main()
{
     char *s="\12345s\n";
     
     printf("%d",sizeof(s));
}
Answer: 6

214. What will be the output?

void main()
{
     unsigned i=1; /* unsigned char k= -1 => k=255; */
     signed j=-1; /* char k= -1 => k=65535 */
     /* unsigned or signed int k= -1 =>k=65535 */
     if(i<j)
           printf("less");
     else if(i>j)
                printf("greater");
          else if(i==j)
                     printf("equal");
}

Answer: less

C DEBUGGING 203

215. What will be the output:

void main()
{
     float j;
     
     j=1000*1000;
     
     printf("%f ",j);
}

1. 1000000
2. Overflow
3. Error
4. None

Answer: 4

216. A structure pointer is defined of the type time. With 3 fields min,sec hours having pointers to
     intergers.
     Write the way to initialize the 2nd element to 10.

217. What will be the output?

void main()
{
     int i=7;
     
     printf("%d",i++*i++);
}

Answer: 56

218. int f()
void main()
{
     f(1);
     f(1,2);
     f(1,2,3);
}

f(int i,int j,int k)
{

204  C PROGRAMS WITH SOLUTIONS

     printf("%d %d %d",i,j,k);
}

What are the number of syntax errors in the above?

Answer: None.

219. What will be the output?

void main()
{
    int i=7;
    
    printf("%d",i++*i++);
}

Answer: 56

220. What will be the output?

#define one 0
#ifdef one
printf("one is defined ");
#ifndef one
printf("one is not defined ");

Answer: "one is defined"

221. What will be the output?

void main()
{
     int count=10, *temp, sum=0;
     
     temp=&count;
     *temp=20;
     temp=&sum;
     *temp=count;
     
     printf("%d %d %d ",count,*temp,sum);
}

Answer: 20 20 20

C DEBUGGING

222. What is alloca()?

Answer: It allocates and frees memory after use/after getting out of scope.

223. What will be the output?

main()
{
     static i=3;
     
     printf("%d",i--);
     
     return i>0 ? main():0;
}

Answer: 321

224. What will be the output?

char *foo()
{
     char result[100]);
     strcpy(result,"anything is good");
     
     return(result);
}

void main()
{
     char *j;
     j=foo()
     
     printf("%s",j);
}

Answer: anything is good.

225. What will be the output?

void main()
{
     char *s[]={ "dharma","hewlett-packard","siemens","ibm"};
     char **p;
     p=s;
     
     printf("%s",++*p);

205

206  C PROGRAMS WITH SOLUTIONS

     printf("%s",*p++);
     printf("%s",++*p);
}

Answer: "harma" (p->add(dharma) && (*p)->harma)
        "harma" (after printing, p->add(hewlett-packard) &&(*p)->harma)
        "ewlett-packard"

226. What will be the output?

main()
{
 int i=0;
 
 for(i=0;i<20;i++)
 {
      switch(i)
                case 0:i+=5;
                case 1:i+=2;
                case 5:i+=5;
                default i+=4;
                break;
 }
 printf("%d,",i);
 }
}

a) 0,5,9,13,17
b) 5,9,13,17
c) 12,17,22
d) 16,21
e) Syntax error

Answer: (d)

227. What will be the output?

main()
{
     char c=-64;
     int i=-32
     unsigned int u =-16;
     
     if(c>i)
     {
          printf("pass1,");
          if(c<u)
          
C DEBUGGING

                printf("pass2");
          else
                  printf("Fail2");
      }
      else
              printf("Fail1);
              if(i<u)
                    printf("pass2");
              else
                    printf("Fail2")
}

a) Pass1,Pass2
b) Pass1,Fail2
c) Fail1,Pass2
d) Fail1,Fail2
e) None of these

Answer: (c)

228. What will the following program do?

void main()
{
     int i;
     char a[]="String";
     char *p="New Sring";
     char *Temp;
     Temp=a;
     a=malloc(strlen(p) + 1);
     strcpy(a,p); //Line number:9//
     p = malloc(strlen(Temp) + 1);
     strcpy(p,Temp);
     
     printf("(%s, %s)",a,p);
free(p);
free(a);
} //Line number 15//

a) Swap contents of p & a and print:(New string, string)

207

208 C PROGRAMS WITH SOLUTIONS

b) Generate compilation error in line number 8
c) Generate compilation error in line number 5
d) Generate compilation error in line number 7
e) Generate compilation error in line number 1

Answer: (b)

229. In the following code segment what will be the result of the function,

value of x , value of y
{
     unsigned int x=-1;
     int y;
     y = ~0;
     
     if(x == y)
           printf("same");
     else
           printf("not same");
}

a) same, MAXINT, -1
b) not same, MAXINT, -MAXINT
c) same , MAXUNIT, -1
d) same, MAXUNIT, MAXUNIT
e) not same, MAXINT, MAXUNIT

Answer: (a)

230. What will be the result of the following program ?

char *gxxx()
{
     static char xxx[1024];
     
     return xxx;
}

main()
{
     char *g="string";
     
     strcpy(gxxx(),g);
     
     g = gxxx();
     
     strcpy(g,"oldstring");
     
     printf("The string is : %s",gxxx());
}

C DEBUGGING

a) The string is : string
b) The string is : Oldstring
c) Run time error/Core dump
d) Syntax error during compilation
e) None of these

Answer: (b)

231. Find the output for the following C program.

main()
{
     char *p1="Name";
     char *p2;
     p2=(char *)malloc(20);
     
     while(*p2++=*p1++);
     
     printf("%s\n",p2);
}

Answer: An empty string

232. Find the output for the following C program.

main()
{
     int x=20,y=35;
     x = y++ + x++;
     y = ++y + ++x;
     
     printf("%d %d\n",x,y);
}

Answer: 57 94

233. Find the output for the following C program.

main()
{
     int x=5;
     
     printf("%d %d %d\n",x,x<<2,x>>2);
}

Answer: 5 20 1

209

210  C PROGRAMS WITH SOLUTIONS

234. Find the output for the following C program.

#define swap1(a,b) a=a+b;b=a-b;a=a-b;

main()
{
     int x=5,y=10;
     
     swap1(x,y);
     
     printf("%d %d\n",x,y);
     
     swap2(x,y);
     
     printf("%d %d\n",x,y);
}

int swap2(int a,int b)
{
     int temp;
     
     temp=a;
     b=a;
     a=temp;
     
     return;
}

Answer: 10 5

235. Find the output for the following C program.

main()
{
     char *ptr = "Ramco Systems";

     (*ptr)++;
     
     printf("%s\n",ptr);
     
     ptr++;
     
     printf("%s\n",ptr);
}

Answer: Samco Systems

236. Find the output for the following C program.

#include<stdio.h>

main()

C DEBUGGING

{
     char s1[]="Ramco";
     char s2[]="Systems";
     
     s1=s2;
     
     printf("%s",s1);
}

Answer: Compilation error giving it cannot be an modifiable 'lvalue'.

237. Find the output for the following C program.

#include<stdio.h>

main()

{
     char *p1;
     char *p2;
     p1=(char *) malloc(25);
     p2=(char *) malloc(25);
     strcpy(p1,"Ramco");
     strcpy(p2,"Systems");
     strcat(p1,p2);
     
     printf("%s",p1);
}

Answer: RamcoSystems

238. Find the output for the following C program given that
     [1]. The following variable is available in file1.c static int average_float;

     Answer: All the functions in the file1.c can access the variable.

239. Find the output for the following C program.

# define TRUE 0
...
...
...
some code

while(TRUE)
{
     some code
}
Answer: This won't go into the loop as TRUE is defined as 0.

211

212  C PROGRAMS WITH SOLUTIONS

240. Program 240

struct list
{
     int x;
     struct list *next;
}*head;

the struct head.x =100
Is the above assignment to pointer is correct or wrong ?

Answer: Wrong

241. What is the output of the following ?

main()
{ 
     int i;
     i=1;
     i=i+2*i++;
     
     printf(%d,i);
}

Answer: 4

242. Program 242
main()
{
     FILE *fp1,*fp2;
     fp1=fopen("one","w")
     fp2=fopen("one","w")
     fputc('A',fp1)
     fputc('B',fp2)
     fclose(fp1)
     fclose(fp2)
}

Find the Error, If Any?
Answer: No error. But It will over writes on same file.

243. What will be the output?

#define MAN(x,y) (x)>(y)?(x):(y)
{
     int i=10;

C DEBUGGING  213

     j=5;
     k=0;
     k=MAX(i++,++j);
     printf(%d %d %d %d,i,j,k);
}

Answer: 10 5 0

244. int z,x=5,y=-10,a=4,b=2;
     z = x++ - --y * b / a;
     What number will z in the sample code above contain?
Choice 1 5
Choice 2 6
Choice 3 10 [Ans] Corrected by buddy by running the program
Choice 4 11
Choice 5 12

245. With every use of a memory allocation function, what function should be used to release
     allocated memory which is no longer needed?

     Choice 1 unalloc()
Choice 2 dropmem()
Choice 3 dealloc()
Choice 4 release()
Choice 5 free() [Ans]

246. Program 246

void *ptr;
myStruct myArray[10];
ptr = myArray;

Which of the following is the correct way to increment the variable "ptr"?

Choice 1 ptr = ptr + sizeof(myStruct); [Ans]
Choice 2 ++(int*)ptr;
Choice 3 ptr = ptr + sizeof(myArray);

214  C PROGRAMS WITH SOLUTIONS

Choice 4 increment(ptr);
Choice 5 ptr = ptr + sizeof(ptr);

247. Program 247

char* myFunc (char *ptr)
{
     ptr += 3;
     
     return (ptr);
}

int main()
{
     char *x, *y;
     x = "HELLO";
     y = myFunc (x);
     
     printf ("y = %s \n", y);
     
     return 0;
}

What will print when the sample code above is executed?
Choice 1 y = HELLO
Choice 2 y = ELLO
Choice 3 y = LLO
Choice 4 y = LO [Ans]
Choice 5 x = O

248. struct node *nPtr, *sPtr;

/* pointers for a linked list. */

for (nPtr=sPtr; nPtr; nPtr=nPtr->next)
{
     free(nPtr);
}
The sample code above releases memory from a linked list. Which of the choices below
accurately describes how it will work?

C DEBUGGING

Choice 1 It will work correctly since the for loop covers the entire list.
Choice 2 It may fail since each node "nPtr" is freed before its next address can be accessed. (Ans)
Choice 3 In the for loop, the assignment "nPtr=nPtr->next" should be changed to "nPtr=nPtr.next".
Choice 4 This is invalid syntax for freeing memory.
Choice 5 The loop will never end.

249. What function will read a specified number of elements from a file?
     Choice 1 fileread()
     Choice 2 getline()
     Choice 3 readfile()
     Choice 4 fread()(Ans)
     Choice 5 gets().
     
250. "My salary was increased by 15%!"
     Select the statement which will EXACTLY reproduce the line of text above.
     Choice 1  printf("\"My salary was increased by 15/%\!\"\n");
     Choice 2  printf("My salary was increased by 15%!\n"); (Ans)
     Choice 3  printf("My salary was increased by 15'%'!\n");
     Choice 4  printf("\"My salary was increased by 15%%!\"\n");[Ans]
     Choice 5  printf("\"My salary was increased by 15'%'!\"\n");
     
251. What is a difference between a declaration and a definition of a variable?

Choice 1 Both can occur multiple times, but a declaration must occur first.
Choice 2 There is no difference between them.
Choice 3 A definition occurs once, but a declaration may occur many times.

215

216  C PROGRAMS WITH SOLUTIONS

Choice 4 A declaration occurs once, but a definition may occur many times. [Ans]
Choice 5 Both can occur multiple times, but a definition must occur first.

252. int testarray[3][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
     What value does testarray[2][1][0] in the sample code above contain?
     Choice 1 3
     Choice 2 5
     Choice 3 7
     Choice 4 9
     Choice 5 11[Ans].

253. Program 253

int a=10,b;
b=a++ + ++a;
printf("%d,%d,%d,%d",b,a++,a,++a);

What will be the output when following code is executed?
Choice 1 12,10,11,13
Choice 2 22,10,11,13
Choice 3 22,11,11,11
Choice 4 12,11,11,11
Choice 5 22,13,13,13[Ans].

254. Program 254

int x[] = { 1, 4, 8, 5, 1, 4 };
int *ptr, y;
ptr = x + 4;
y = ptr - x;

What does y in the sample code above equal?

Choice 1 -3
Choice 2 0
Choice 3 4[Ans]

C DEBUGGING

Choice 4 4 + sizeof( int )
Choice 5 4 * sizeof( int )

255. Program 255

void myFunc (int x)
{
     if(x > 0)
           myFunc(--x);
           
     printf("%d, ", x);
}

int main()
{
    myFunc(5);
    
    return 0;
}

What will the above sample code produce when executed?

Choice 1 1, 2, 3, 4, 5, 5,
Choice 2 4, 3, 2, 1, 0, 0,
Choice 3 5, 4, 3, 2, 1, 0,
Choice 4 0, 0, 1, 2, 3, 4, [Ans]
Choice 5 0, 1, 2, 3, 4, 5,

256. 11 ^ 5
     What does the operation shown above produce?
Choice 1 1
Choice 2 6
Choice 3 8
Choice 4 14 [Ans]
Choice 5 15.

257. #define MAX_NUM 15
     Referring to the sample above, what is MAX_NUM?
     Choice 1 MAX_NUM is an integer variable.
     Choice 2 MAX_NUM is a linker constant.

217

218 C PROGRAMS WITH SOLUTIONS

     Choice 3 MAX_NUM is a precompiler constant.
     Choice 4 MAX_NUM is a preprocessor macro. [Ans]
     Choice 5 MAX_NUM is an integer constant.

258. Which one of the following will turn off buffering for stdout?
     Choice 1 setbuf( stdout, FALSE );
     Choice 2 setvbuf( stdout, NULL );
     Choice 3 setbuf( stdout, NULL ); [Ans]
     Choice 4 setvbuf( stdout, _IONBF );
     Choice 5 setbuf( stdout, _IONBF );

259. What is a proper method of opening a file for writing as binary file?
     Choice  1  FILE *f = fwrite( "test.bin", "b" );
     Choice  2  FILE *f = fopenb( "test.bin", "w" );
     Choice  3  FILE *f = fopen( "test.bin", "wb" );
     Choice  4  FILE *f = fwriteb( "test.bin" );
     Choice  5  FILE *f = fopen( "test.bin", "bw" ); [Ans]

260. Which one of the following functions is the correct choice for moving blocks of binary data
     that are of arbitrary size and position in memory?
     Choice 1 memcpy()
     Choice 2 memset()
     Choice 3 strncpy()
     Choice 4 strcpy()
     Choice 5 memmove()[Ans]

261. int x = 2 * 3 + 4 * 5;
     What value will x contain in the sample code above?
     Choice 1 22
     Choice 2 26[Ans]
     Choice 3 46
     Choice 4 50
     Choice 5 70
     
262. Program 262

void * array_dup (a, number, size)
const void * a;
size_t number;

C DEBUGGING  219

size_t size;
{
     void * clone;
     size_t bytes;
     assert(a != NULL);
     bytes = number * size;
     clone = alloca(bytes);
     
     if (!clone)
           return clone;
           
     memcpy(clone, a, bytes);
     
     return clone;
}

The function array_dup(), defined above, contains an error. Which one of the following
correctly analyzes it?

Choice 1 If the arguments to memcpy() refer to overlapping regions, the destination buffer will be subject to memory corruption.
Choice 2 array_dup() declares its first parameter to be a pointer, when the actual argument will be an array.
Choice 3 The memory obtained from alloca() is not valid in the context of the caller. Moreover, alloca() is nonstandard. [Ans]
Choice 4 size_t is not a Standard C defined type and may not be known to the compiler. Choice 5 The definition of array_dup() is unusual. Functions cannot be defined using
this syntax.

263. Program 263

         int var1;
         
     If a variable has been declared with file scope, as above, can it safely be accessed globally
     from another file?
     
Choice 1 Yes; it can be referenced through the register specifier.
Choice 2 No; it would have to have been initially declared as a static variable.
Choice 3 No; it would need to have been initially declared using the global keyword.[Ans]
Choice 4 Yes; it can be referenced through the publish specifier.
Choice 5 Yes; it can be referenced through the extern specifier.

220  C PROGRAMS WITH SOLUTIONS

264. Program 264

         time_t t;
         
     Which one of the following statements will properly initialize the variable t with the current
     time from the sample above?
     
     Choice 1 t = clock();[Ans]
     Choice 2 time( &t );
     Choice 3 t = ctime();
     Choice 4 t = localtime();
     Choice 5 None of the above

265. Which one of the following provides conceptual support for function calls?

     Choice 1 The system stack[Ans]
     Choice 2 The data segment
     Choice 3 The processor's registers
     Choice 4 The text segment
     Choice 5 The heap

266. C is which kind of language?

     Choice 1 Machine
     Choice 2 Procedural[Ans]
     Choice 3 Assembly
     Choice 4 Object-oriented
     Choice 5 Strictly-typed

267. Program 267

int i,j;
int ctr = 0;
int myArray[2][3];
for (i=0; i<3; i++)
for (j=0; j<2; j++)
{
     myArray[j][i] = ctr;
     ++ctr;
}

What is the value of myArray[1][2]; in the sample code above?

Choice 1 1
Choice 2 2

C DEBUGGING

Choice 3 3
Choice 4 4
Choice 5 5 [Ans] 00,10,01,11,12

268. Program 268

int x = 0;
for(x=1; x<4; x++);
       printf("x=%d\n", x);
       
What will be printed when the sample code above is executed?

Choice 1 x=0
Choice 2 x=1
Choice 3 x=3
Choice 4 x=4[Ans]
Choice 5 x=5

269. Program 269

int x = 3;
if( x == 2 );
x = 0;
if( x == 3 )
      x++;
else 
        x += 2;
        
What value will x contain when the sample code above is executed?

Choice 1 1
Choice 2 2[Ans]
Choice 3 3
Choice 4 4
Choice 5 5

270. Program 270

char *ptr;
char myString[] = "abcdefg";
ptr = myString;
ptr += 5;

What string does ptr point to in the sample code above?

Choice 1 fg [Ans]/*because string*/
Choice 2 efg

221

222 C PROGRAMS WITH SOLUTIONS

Choice 3 defg
Choice 4 cdefg
Choice 5 None of the above

271. Program 271

double x = -3.5, y = 3.5;
printf( "%.0f : %.0f\n", ceil( x ), ceil( y ) );
printf( "%.0f : %.0f\n", floor( x ), floor( y ) );

What will the code above print when executed?

    ceil =>rounds up 3.2=4 floor =>rounds down 3.2=3

Choice 1 -3 : 4 -4 : 3 [Ans]
Choice 2 -4 : 4 -3 : 3
Choice 3 -4 : 3 -4 : 3
Choice 4 -4 : 3 -3 : 4
Choice 5 -3 : 3 -4 : 4

272. Which one of the following will declare a pointer to an integer at address 0x200 in memory?

Choice 1 int *x; *x = 0x200;[Ans]
Choice 2 int *x = &0x200;
Choice 3 int *x = *0x200;
Choice 4 int *x = 0x200;
Choice 5 int *x( &0x200 );

273. Program 273

int x = 5;
int y = 2;
char op = '*';
switch (op)
{
     default : x += 1;
     case '+' : x += y; /*It will go to all the cases*/
     case '-' : x -= y;
}

After the sample code above has been executed, what value will the variable x contain?
Choice 1 4
Choice 2 5
Choice 3 6 [Ans]

C DEBUGGING 223

Choice 4 7
Choice 5 8

274. Program 274

x = 3, counter = 0;
while ((x-1))
{
     ++counter;
     x--;
}

Referring to the sample code above, what value will the variable counter have when
completed?

Choice 1 0
Choice 2 1
Choice 3 2[Ans]
Choice 4 3
Choice 5 4

275. Program 275

     char ** array [12][12][12];
     
     Consider array, defined above. Which one of the following definitions and initializations of p is valid?

Choice 1 char ** (* p) [12][12] = array; [Ans]
Choice 2 char ***** p = array;
Choice 3 char * (* p) [12][12][12] = array;
Choice 4 const char ** p [12][12][12] = array;
Choice 5 char (** p) [12][12] = array;

276. Program 276

         void (*signal(int sig, void (*handler) (int))) (int);
         
     Which one of the following definitions of sighandler_t allows the above declaration to be rewritten as follows:

         sighandler_t signal (int sig, sighandler_t handler);
         
Choice 1 typedef void (*sighandler_t) (int);[Ans]
Choice 2 typedef sighandler_t void (*) (int);
Choice 3 typedef void *sighandler_t (int);
Choice 4 #define sighandler_t(x) void (*x) (int)
Choice 5 #define sighandler_t void (*) (int)

224  C PROGRAMS WITH SOLUTIONS

277. All of the following choices represent syntactically correct function definitions. Which one
     of the following represents a semantically legal function definition in Standard C?

Choice 1 Code:[Ans]

int count_digits (const char * buf) {
    assert(buf != NULL);
    int cnt = 0, i;
    for (i = 0; buf[i] != '\0'; i++)
           if (isdigit(buf[i]))
                 cnt++;
     return cnt;
}

Choice 2 Code:

int count_digits (const char * buf) {
int cnt = 0;
assert(buf != NULL);
for (int i = 0; buf[i] != '\0'; i++)
if (isdigit(buf[i]))
cnt++;
return cnt;
}

Choice 3 Code:

int count_digits (const char * buf) {
int cnt = 0, i;
assert(buf != NULL);
for (i = 0; buf[i] != '\0'; i++)
if (isdigit(buf[i]))
cnt++;
return cnt;
}

Choice 4 Code:

int count_digits (const char * buf) {
assert(buf != NULL);

C DEBUGGING 225

for (i = 0; buf[i] != '\0'; i++)
if (isdigit(buf[i]))
cnt++;
return cnt;
}

Choice 5 Code:
int count_digits (const char * buf) {
assert(buf != NULL);
int cnt = 0;
for (int i = 0; buf[i] != '\0'; i++)
if (isdigit(buf[i]))
cnt++;
return cnt;
}

278. Program 278

     struct customer *ptr = malloc( sizeof( struct customer ) );

     Given the sample allocation for the pointer "ptr" found above, which one of the following
     statements is used to reallocate ptr to be an array of 10 elements?

Choice 1 ptr = realloc( ptr, 10 * sizeof( struct customer)); [Ans]
Choice 2 realloc( ptr, 9 * sizeof( struct customer ) );
Choice 3 ptr += malloc( 9 * sizeof( struct customer ) );
Choice 4 ptr = realloc( ptr, 9 * sizeof( struct customer ) );
Choice 5 realloc( ptr, 10 * sizeof( struct customer ) );

279. Which one of the following is a true statement about pointers?

     Choice 1 Pointer arithmetic is permitted on pointers of any type.
     Choice 2 A pointer of type void * can be used to directly examine or modify an object of any type.
     Choice 3 Standard C mandates a minimum of four levels of indirection accessible through a pointer.
     Choice 4 A C program knows the types of its pointers and indirectly referenced data items at runtime. [Ans]
     Choice 5 Pointers may be used to simulate call-by-reference.

226  C PROGRAMS WITH SOLUTIONS

280. Which one of the following functions returns the string representation from a pointer to a
     time_t value?
     
Choice 1 localtime
Choice 2 gmtime
Choice 3 strtime [Ans]
Choice 4 asctime
Choice 5 ctime

281. Program 281

     short testarray[4][3] = { {1}, {2, 3}, {4, 5, 6} };
     printf("%d\n", sizeof( testarray ) );

     Assuming a short is two bytes long, what will be printed by the above code?
     
Choice 1 It will not compile because not enough initializers are given.
Choice 2 6
Choice 3 7
Choice 4 12
Choice 5 24 [Ans]

282. Program 282

     char buf [] = "Hello world!";
     char * buf = "Hello world!";
     
     In terms of code generation, how do the two definitions of buf, both presented above, differ?
     
Choice 1 The first definition certainly allows the contents of buf to be safely modified at runtime; the second definition does not.
Choice 2 The first definition is not suitable for usage as an argument to a function call; the second definition is.
Choice 3 The first definition is not legal because it does not indicate the size of the array to be allocated; the second definition is legal.
Choice 4 They do not differ -- they are functionally equivalent. [Ans]
Choice 5 The first definition does not allocate enough space for a terminating NULL character, nor does it append one; the second definition does.

283. In a C expression, how is a logical AND represented?

Choice 1 @@
Choice 2 ||
Choice 3 .AND.
Choice 4 && [Ans]
Choice 5 .AND

C DEBUGGING  227

284. How do printf()'s format specifiers %e and %f differ in their treatment of floating-point numbers?

Choice 1 %e always displays an argument of type double in engineering notation; %f always displays an argument of type double in decimal notation. [Ans]
Choice 2 %e expects a corresponding argument of type double; %f expects a corresponding argument of type float.
Choice 3 %e displays a double in engineering notation if the number is very small or very large. Otherwise, it behaves like %f and displays the number in decimal notation.
Choice 4 %e displays an argument of type double with trailing zeros; %f never displays trailing zeros.
Choice 5 %e and %f both expect a corresponding argument of type double and format it identically. %e is left over from K&R C; Standard C prefers %f for new code.

285. Which one of the following Standard C functions can be used to reset end-of-file and error conditions on an open stream?

     Choice 1 clearerr()
     Choice 2 fseek()(Ans)
     Choice 3 ferror()
     Choice 4 feof()
     Choice 5 setvbuf()

286. Which one of the following will read a character from the keyboard and will store it in the variable c?

Choice 1 c = getc();
Choice 2 getc( &c );
Choice 3 c = getchar( stdin );
Choice 4 getchar( &c )
Choice 5 c = getchar(); [Ans]

287. Program 287

#include <stdio.h>

int i;

void increment( int i )
{
     i++;
}

228  C PROGRAMS  WITH  SOLUTIONS

int main()
{
     for( i = 0; i < 10; increment( i ))
     {
     }
     printf("i=%d\n", i);
     
return 0;
}

What will happen when the program above is compiled and executed?

Choice 1 It will not compile.
Choice 2 It will print out: i=9.
Choice 3 It will print out: i=10.
Choice 4 It will print out: i=11.
Choice 5 It will loop indefinitely.[Ans]

288. Program 288

     char ptr1[] = "Hello World";
     char *ptr2 = malloc( 5 );
     ptr2 = ptr1;
     
What is wrong with the above code (assuming the call to malloc does not fail)?

Choice 1 There will be a memory overwrite.
Choice 2 There will be a memory leak.
Choice 3 There will be a segmentation fault.
Choice 4 Not enough space is allocated by the malloc. (Ans)
Choice 5 It will not compile.

289. Program 289

int i = 4;
switch (i)
{
 default:
         ;
 case 3:
         i += 5;
         if(i == 8)

C DEBUGGING  229

         {
              i++;
              if (i == 9) break;
              i *= 2;
         }
         i -= 4;
         break;
         
         case 8:
         i += 5;
         break;
}
printf("i = %d\n", i);
         
What will the output of the sample code above be?
         
Choice 1 i = 5[Ans]
Choice 2 i = 8
Choice 3 i = 9
Choice 4 i = 10
Choice 5 i = 18

290. Which one of the following C operators is right associative?

Choice 1 = [Ans]
Choice 2 ,
Choice 3 []
Choice 4 ^
Choice 5 ->

291. What does the "auto" specifier do?

Choice 1 It automatically initializes a variable to 0;.
Choice 2 It indicates that a variable's memory will automatically be preserved.[Ans]
Choice 3 It automatically increments the variable when used.
Choice 4 It automatically initializes a variable to NULL.
Choice 5 It indicates that a variable's memory space is allocated upon entry into the block.

230 C PROGRAMS WITH SOLUTIONS

292. How do you include a system header file called sysheader.h in a C source file?

Choice 1 #include <sysheader.h> [Ans]
Choice 2 #incl "sysheader.h"
Choice 3 #includefile <sysheader>
Choice 4 #include sysheader.h
Choice 5 #incl <sysheader.h>

293. Which one of the following printf() format specifiers indicates to print a double value in
     decimal notation, left aligned in a 30-character field, to four (4) digits of precision?
     
Choice 1 %-30.4e
Choice 2 %4.30e
Choice 3 %-4.30f
Choice 4 %-30.4f [Ans] decimal notation
Choice 5 %#30.4f

294. Program 294

int x = 0;

for ( ; ; )
{
     if (x++ == 4)
           break;
           
     continue;
}
printf("x=%d\n", x);

What will be printed when the sample code above is executed?

Choice 1 x=0
Choice 2 x=1
Choice 3 x=4
Choice 4 x=5[Ans]
Choice 5 x=6

295. According to the Standard C specification, what are the respective minimum sizes (in bytes)
     of the following three data types: short; int; and long?
     
Choice 1 1, 2, 2
Choice 2 1, 2, 4
Choice 3 1, 2, 8

C DEBUGGING

Choice 4 2, 2, 4[Ans]
Choice 5 2, 4, 8

296. Program 296

int y[4] = {6, 7, 8, 9};
int *ptr = y + 2;

printf("%d\n", ptr[ 1 ] ); /*ptr+1 == ptr[1]*/

What is printed when the sample code above is executed?

Choice 1 6
Choice 2 7
Choice 3 8
Choice 4 9[Ans]
Choice 5 The code will not compile.

297. Program 297

penny = one
nickel = five
dime = ten
quarter = twenty-five

How is enum used to define the values of the American coins listed above?

Choice 1 enum coin {(penny,1), (nickel,5), (dime,10), (quarter,25)};
Choice 2 enum coin ({penny,1}, {nickel,5}, {dime,10}, {quarter,25});
Choice 3 enum coin {penny=1,nickel=5,dime=10,quarter=25};[Ans]
Choice 4 enum coin (penny=1,nickel=5,dime=10,quarter=25);
Choice 5 enum coin {penny, nickel, dime, quarter} (1, 5, 10, 25);

298. Program 298

         char txt [20] = "Hello world!\0";
         
How many bytes are allocated by the definition above?

Choice 1 11 bytes
Choice 2 12 bytes
Choice 3 13 bytes
Choice 4 20 bytes[Ans]
Choice 5 21 bytes

299. Program 299

int i = 4;
int x = 6;
double z;

231

232 C PROGRAMS WITH SOLUTIONS

z = x / i;
printf("z=%.2f\n", z);

What will print when the sample code above is executed?

Choice 1 z=0.00
Choice 2 z=1.00[Ans]
Choice 3 z=1.50
Choice 4 z=2.00
Choice 5 z=NULL

300. Which one of the following variable names is NOT valid?

Choice 1 go_cart
Choice 2 go4it
Choice 3 4season[Ans]
Choice 4 run4
Choice 5 _what

301. int a [8] = { 0, 1, 2, 3 };

The definition of a above explicitly initializes its first four elements. Which one of the following
describes how the compiler treats the remaining four elements?

Choice 1 Standard C defines this particular behavior as implementation-dependent. The
         compiler writer has the freedom to decide how the remaining elements will be
         handled.
Choice 2 The remaining elements are initialized to zero(0).[Ans]
Choice 3 It is illegal to initialize only a portion of the array. Either the entire array must
         be initialized, or no part of it may be initialized.
Choice 4 As with an enum, the compiler assigns values to the remaining elements by
         counting up from the last explicitly initialized element. The final four elements
         will acquire the values 4, 5, 6, and 7, respectively.
Choice 5 They are left in an uninitialized state; their values cannot be relied upon.

302. Which one of the following is a true statement about pointers?

Choice 1 They are always 32-bit values.
Choice 2 For efficiency, pointer values are always stored in machine registers. (Ans)
Choice 3 With the exception of generic pointers, similarly typed pointers may be
subtracted from each other.

C DEBUGGING  233

Choice 4 A pointer to one type may not be cast to a pointer to any other type.
Choice 5 With the exception of generic pointers, similarly typed pointers may be added
         to each other.

303. Which one of the following statements allocates enough space to hold an array of 10 integers
     that are initialized to 0?

Choice 1 int *ptr = (int *) malloc(10, sizeof(int));
Choice 2 int *ptr = (int *) calloc(10, sizeof(int));
Choice 3 int *ptr = (int *) malloc(10*sizeof(int)); [Ans]
Choice 4 int *ptr = (int *) alloc(10*sizeof(int));
Choice 5 int *ptr = (int *) calloc(10*sizeof(int));

304. What are two predefined FILE pointers in C?

Choice 1 stdout and stderr
Choice 2 console and error
Choice 3 stdout and stdio [Ans]
Choice 4 stdio and stderr
Choice 5 errout and conout

305. Program 305

u32 X (f32 f)
{
     union {
            f32 f;
            u32 n;
           } u;
           
     u.f = f;
     
     return u.n;
}

Given the function X(), defined above, assume that u32 is a type-definition indicative of a 32bit unsigned integer and that f32 is a type-definition indicative of a 32-bit floating-point number.

Which one of the following describes the purpose of the function defined above?

Choice 1 X() effectively rounds f to the nearest integer value, which it returns.
Choice 2 X() effectively performs a standard typecast and converts f to a roughly
         equivalent integer. [Ans]

234 C PROGRAMS WITH SOLUTIONS

Choice 3 X() preserves the bit-pattern of f, which it returns as an unsigned integer of
         equal size.
Choice 4 Since u.n is never initialized, X() returns an undefined value. This function is
         therefore a primitive pseudorandom number generator.
Choice 5 Since u.n is automatically initialized to zero (0) by the compiler, X() is an
         obtuse way of always obtaining a zero (0) value.
         
306. Program 306

long factorial (long x)
{
     ????
     
     return x * factorial(x - 1);
}

With what do you replace the ???? to make the function shown above return the correct
answer?

Choice 1 if (x == 0) return 0;
Choice 2 return 1;
Choice 3 if (x >= 2) return 2;
Choice 4 if (x == 0) return 1;
Choice 5 if (x <= 1) return 1; [Ans]{more probable}

307. Program 307

/* Increment each integer in the array 'p' of * size 'n'. */
void increment_ints (int p [/*n*/], int n)
{
     assert(p != NULL); /* Ensure that 'p' isn't a null pointer. */
     assert(n >= 0); /* Ensure that 'n' is nonnegative. */
     
     while (n) /* Loop over 'n' elements of 'p'. */
     {
          *p++;
          
          /* Increment *p. */
          p++, n--;
          
          /* Increment p, decrement n. */
      }
}

Consider the function increment_ints(), defined above. Despite its significant inline
commentary, it contains an error. Which one of the following correctly assesses it?

C DEBUGGING  235

Choice 1 *p++ causes p to be incremented before the dereference is performed, because
         both operators have equal precedence and are right associative.
Choice 2 An array is a nonmodifiable lvalue, so p cannot be incremented directly. A
         navigation pointer should be used in conjunction with p.
Choice 3 *p++ causes p to be incremented before the dereference is performed, because
         the autoincrement operator has higher precedence than the indirection
         operator. (Ans)
Choice 4 The condition of a while loop must be a Boolean expression. The condition
         should be n != 0.
Choice 5 An array cannot be initialized to a variable size. The subscript n should be
         removed from the definition of the parameter p.

308. How is a variable accessed from another file?

Choice 1 The global variable is referenced via the extern specifier.[Ans]
Choice 2 The global variable is referenced via the auto specifier.
Choice 3 The global variable is referenced via the global specifier.
Choice 4 The global variable is referenced via the pointer specifier.
Choice 5 The global variable is referenced via the ext specifier.

309. When applied to a variable, what does the unary "&" operator yield?

Choice 1 The variable's value
Choice 2 The variable's binary form
Choice 3 The variable's address [Ans]
Choice 4 The variable's format
Choice 5 The variable's right value

310. Program 310

/* sys/cdef.h */
#if

defined(__STDC__) || defined(__cplusplus)

#define __P(protos) protos
#else
#define __P(protos) ()
#endif

/* stdio.h */
#include <sys/cdefs.h>
div_t div __P((int, int));

236 C PROGRAMS WITH SOLUTIONS

The code above comes from header files for the FreeBSD implementation of the C library.

What is the primary purpose of the __P() macro?

Choice 1 The __P() macro has no function and merely obfuscates library function
         declarations. It should be removed from further releases of the C library.
Choice 2 The __P() macro provides forward compatibility for C++ compilers, which do
         not recognize Standard C prototypes.
Choice 3 Identifiers that begin with two underscores are reserved for C library
         implementations. It is impossible to determine the purpose of the macro from
         the context given.
Choice 4 The __P() macro provides backward compatibility for K&R C compilers,
         which do not recognize Standard C prototypes. [Ans]
Choice 5 The __P() macro serves primarily to differentiate library functions from
         application-specific functions.

311. Which one of the following is NOT a valid identifier?

Choice 1 __ident
Choice 2 auto [Ans]
Choice 3 bigNumber
Choice 4 g42277
Choice 5 peaceful_in_space

312. Program 342

int read_long_string (const char ** const buf) {
char * p = NULL;
const char * fwd = NULL;
size_t len = 0;
assert(buf);

do
{
     p = realloc(p, len += 256);
     
     if (!p)
           return 0;
           
     if (!fwd)
           fwd = p;
     else
             fwd = strchr(p, '\0');

C DEBUGGING 237

} while (fgets(fwd, 256, stdin));

*buf = p;

return 1;
}

The function read_long_string(), defined above, contains an error that may be particularly
visible under heavy stress. Which one of the following describes it?

Choice 1 The write to *buf is blocked by the const qualifications applied to its type.
Choice 2 If the null pointer for char is not zero-valued on the host machine, the implicit
         comparisons to zero (0) may introduce undesired behavior. Moreover, even if
         successful, it introduces machine-dependent behavior and harms portability.
Choice 3 The symbol stdin may not be defined on some ANCI C compliant systems.
Choice 4 The else causes fwd to contain an errant address. (Ans)
Choice 5 If the call to realloc() fails during any iteration but the first, all memory
         previously allocated by the loop is leaked.

313. Program 313

FILE *f = fopen( fileName, "r" );

readData( f );

if( ???? )
{
     puts( "End of file was reached" );
}

Which one of the following can replace the ???? in the code above to determine if the end of
a file has been reached?

Choice 1 f == EOF[Ans]
Choice 2 feof( f )
Choice 3 eof( f )
Choice 4 f == NULL
Choice 5 !f

314. Global variables that are declared static are ____________.

Which one of the following correctly completes the sentence above?

Choice 1 Deprecated by Standard C
Choice 2 Internal to the current translation unit

238  C PROGRAMS WITH SOLUTIONS

Choice 3 Visible to all translation units
Choice 4 Read-only subsequent to initialization
Choice 5 Allocated on the heap[Ans]

double read_double (FILE * fp) {
                                    double d;
                                    assert(fp != NULL);
                                    fscanf(fp, " %lf ", d);
                                          
                                    return d;
                                }
                                         
The code above contains a common error. Which one of the following describes it?

Choice 1 fscanf() will fail to match floating-point numbers not preceded by whitespace.
Choice 2 The format specifier %lf indicates that the corresponding argument should be
         long double rather than double. (Ans)
Choice 3 The call to fscanf() requires a pointer as its last argument.
Choice 4 The format specifier %lf is recognized by fprintf() but not by fscanf().
Choice 5 d must be initialized prior to usage.

315. Which one of the following is NOT a valid C identifier?

Choice 1 ___S
Choice 2 1___ [Ans]
Choice 3 ___1
Choice 4 ___
Choice 5 S___

316. According to Standard C, what is the type of an unsuffixed floating-point literal, such as 123.45?

Choice 1 long double
Choice 2 Unspecified
Choice 3 float[Ans]
Choice 4 double
Choice 5 signed float

C DEBUGGING

239

317. Which one of the following is true for identifiers that begin with an underscore?

Choice 1 They are generally treated differently by preprocessors and compilers from
         other identifiers.
Choice 2 They are case-insensitive. (Ans)
Choice 3 They are reserved for usage by standards committees, system implementers,
         and compiler engineers.
Choice 4 Applications programmers are encouraged to employ them in their own code
         in order to mark certain symbols for internal usage.
Choice 5 They are deprecated by Standard C and are permitted only for backward
         compatibility with older C libraries.

318. Which one of the following is valid for opening a read-only ASCII file?

Choice 1 fileOpen (filenm, "r");
Choice 2 fileOpen (filenm, "ra");
Choice 3 fileOpen (filenm, "read");
Choice 4 fopen (filenm, "read");
Choice 5 fopen (filenm, "r");[Ans]

319. Program 319

         f = fopen( filename, "r" );

Referring to the code above, what is the proper definition for the variable f?

Choice 1 FILE f;
Choice 2 FILE *f;[Ans]
Choice 3 int f;
Choice 4 struct FILE f;
Choice 5 char *f;

320. If there is a need to see output as soon as possible, what function will force the output from
     the buffer into the output stream?

Choice 1 flush()
Choice 2 output()(Ans)
Choice 3 fflush()
Choice 4 dump()
Choice 5 write()

240 C PROGRAMS WITH SOLUTIONS

321. Program 321

     short int x; /* assume x is 16 bits in size */

What is the maximum number that can be printed using printf("%d\n", x), assuming that x is 
initialized as shown above?

Choice 1 127
Choice 2 128
Choice 3 255
Choice 4 32,767 [Ans]
Choice 5 65,536

322. Program 322

void crash (void)
{
     printf("got here");
     
     *((char *) 0) = 0;
}

The function crash(), defined above, triggers a fault in the memory management hardware
for many architectures. Which one of the following explains why "got here" may NOT be
printed before the crash?

Choice 1 The C standard says that dereferencing a null pointer causes undefined
         behavior. This may explain why printf() apparently fails.
Choice 2 If the standard output stream is buffered, the library buffers may not be
         flushed before the crash occurs. (Ans)
Choice 3 printf() always buffers output until a newline character appears in the buffer.
         Since no newline was present in the format string, nothing is printed.
Choice 4 There is insufficient information to determine why the output fails to appear.
         A broader context is required.
Choice 5 printf() expects more than a single argument. Since only one argument is
         given, the crash may actually occur inside printf(), which explains why the
         string is not printed. puts() should be used instead.

323. Program 323

char * dwarves [] = {
"Sleepy",
"Dopey" "Doc",
"Happy",
"Grumpy" "Sneezy",

C DEBUGGING  241

"Bashful",
};

How many elements does the array dwarves (declared above) contain? Assume the C
compiler employed strictly complies with the requirements of Standard C.

Choice 1 4
Choice 2 5[Ans]
Choice 3 6
Choice 4 7
Choice 5 8

324. Which one of the following can be used to test arrays of primitive quantities for strict equality
     under Standard C?

Choice 1 qsort()
Choice 2 bcmp() [Ans]
Choice 3 memcmp()
Choice 4 strxfrm()
Choice 5 bsearch()

325. Program 325

int debug (const char * fmt, ...) {
extern FILE * logfile;
va_list args;
assert(fmt);
args = va_arg(fmt, va_list);

return vfprintf(logfile, fmt, args);
}

The function debug(), defined above, contains an error. Which one of the following describes it?

Choice 1 The ellipsis is a throwback from K&R C. In accordance with Standard C, the
         declaration of args should be moved into the parameter list, and the K&R C
         macro va_arg() should be deleted from the code.
Choice 2 vfprintf() does not conform to ISO 9899: 1990, and may not be portable.
Choice 3 Library routines that accept argument lists cause a fault on receipt of an empty
         list. The argument list must be validated with va_null() before invoking
         vfprintf().
Choice 4 The argument list args has been improperly initialized. [Ans]

242 C PROGRAMS WITH SOLUTIONS

Choice 5 Variadic functions are discontinued by Standard C; they are legacy constructs
         from K&R C, and no longer compile under modern compilers.

326. Program 326

char *buffer = "0123456789";
char *ptr = buffer;
ptr += 5;

printf( "%s\n", ptr );
printf( "%s\n", buffer );

What will be printed when the sample code above is executed?

Choice 1 0123456789 56789
Choice 2 5123456789 5123456789
Choice 3 56789

56789

Choice 4 0123456789 0123456789
Choice 5 56789

0123456789 [Ans]

327. Program 327

char * get_rightmost (const char * d)
{
     char rightmost [MAXPATHLEN];
     const char * p = d;
     assert(d != NULL);
     
     while (*d != '\0')
     {
          if (*d == '/')
                p = (*(d + 1) != '\0') ? d + 1 : p;
                d++;
     }
     
     memset(rightmost, 0, sizeof(rightmost));
     memcpy(rightmost, p, strlen(p) + 1);
     
     return rightmost;
}

The function get_rightmost(), defined above, contains an error. Which one of the following
describes it?

Choice 1 The calls to memset() and memcpy() illegally perform a pointer conversion on
         rightmost without an appropriate cast.

C DEBUGGING  243

Choice 2 The code does not correctly handle the situation where a directory separator '/'
         is the final character. [Ans]
Choice 3 The if condition contains an incorrectly terminated character literal.
Choice 4 memcpy() cannot be used safely to copy string data.
Choice 5 The return value of get_rightmost() will be invalid in the caller's context.

328. What number is equivalent to -4e3?

Choice 1 -4000 [Ans]
Choice 2 -400
Choice 3 -40
Choice 4 .004
Choice 5 .0004

329. Program 329
void freeList( struct node *n )
{
     while(n)
     {
          ????
     }
}

Which one of the following can replace the ???? for the function above to release the
memory allocated to a linked list?

Choice 1 n = n->next; free( n );
Choice 2 struct node m = n; n = n->next; free( m );
Choice 3 struct node m = n; free( n );
Choice 4 free( n );
         n = m->next;
         n = n->next; [Ans]
Choice 5 struct node m = n; free( m );
         n = n->next; (Ans)

330. How does variable definition differ from variable declaration?

Choice 1 Definition allocates storage for a variable, but declaration only informs the
         compiler as to the variable's type.
Choice 2 Declaration allocates storage for a variable, but definition only informs the
         compiler as to the variable's type.
Choice 3 Variables may be defined many times, but may be declared only once.[Ans]

244  C PROGRAMS WITH SOLUTIONS

Choice 4 Variable definition must precede variable declaration.
Choice 5 There is no difference in C between variable declaration and variable
         definition.

331. Program 331

int x[] = {1, 2, 3, 4, 5};
int u;
int *ptr = x;
????
for( u = 0; u < 5; u++ )
{
     printf("%d-", x[u]);
}
printf( "\n" );

Which one of the following statements could replace the ???? in the code above to cause the
string 1-2-3-10-5- to be printed when the code is executed?

Choice 1 *ptr + 3 = 10;
Choice 2 *ptr[ 3 ] = 10;
Choice 3 *(ptr + 3) = 10;[Ans]
Choice 4 (*ptr)[ 3 ] = 10;
Choice 5 *(ptr[ 3 ]) = 10;

332. 
/* sum_array() has been ported from FORTRAN. No * logical changes have been made */

double sum_array(double d[],int n)
{
     register int i;
     double total=0;
     assert(d!=NULL);
     
     for(i=l;i<=n;i++)
            total+=d[i];
            
     return total;
}

The function sum_array(), defined above, contains an error. Which one of the following
accurately describes it?

C DEBUGGING  245

Choice 1 The range of the loop does not match the bounds of the array d.
Choice 2 The loop processes the incorrect number of elements.
Choice 3 total is initialized with an integer literal. The two are not compatible in an
         assignment. [Ans]
Choice 4 The code above fails to compile if there are no registers available for i.
Choice 5 The formal parameter d should be declared as double * d to allow dynamically
         allocated arrays as arguments.

333. Program 333

#include <stdio.h>
void func()
{
     int x = 0;
     static int y = 0;
     x++; y++;
     printf( "%d -- %d\n", x, y );
}
int main()
{
     func();
     func();
     
     return 0;
}

What will the code above print when it is executed?

Choice 1 1 -- 1 1 -- 1
Choice 2 1 -- 1 2 -- 1
Choice 3 1 -- 1 2 -- 2
Choice 4 1 -- 0 1 -- 0
Choice 5 1 -- 1 1 -- 2 [Ans]

334. Program 334

int fibonacci (int n)
{ 
     switch (n)

246 C PROGRAMS WITH SOLUTIONS

    {
         default:
                  return (fibonacci(n - 1) + fibonacci(n - 2));
         case 1:
         case 2:
    }
    return 1;
}

The function above has a flaw that may result in a serious error during some invocations.

Which one of the following describes the deficiency illustrated above?

Choice 1 For some values of n, the environment will almost certainly exhaust its stack
         space before the calculation completes.[Ans]
Choice 2 An error in the algorithm causes unbounded recursion for all values of n.
Choice 3 A break statement should be inserted after each case. Fall-through is not
         desirable here.
Choice 4 The fibonacci() function includes calls to itself. This is not directly supported
         by Standard C due to its unreliability.
Choice 5 Since the default case is given first, it will be executed before any case
         matching n.

335. When applied to a variable, what does the unary "&" operator yield?

     Choice 1 The variable's address [Ans]
     Choice 2 The variable's right value
     Choice 3 The variable's binary form
     Choice 4 The variable's value
     Choice 5 The variable's format

336. short int x; /* assume x is 16 bits in size */
     What is the maximum number that can be printed using printf("%d\n", x), assuming that x is
     initialized as shown above?
     
Choice 1 127
Choice 2 128
Choice 3 255
Choice 4 32,767[Ans]
Choice 5 65,536

C DEBUGGING  247

337. int x = 011 | 0x10;
     What value will x contain in the sample code above?
     
Choice 1 3
Choice 2 13 [Ans]
Choice 3 19
Choice 4 25
Choice 5 27

338. Which one of the following calls will open the file test.txt for reading by fgetc?
     Choice 1 fopen( "test.txt", "r" );
     Choice 2 read( "test.txt" )
     Choice 3 fileopen( "test.txt", "r" ); [Ans]
     Choice 4 fread( "test.txt" )
     Choice 5 freopen( "test.txt" )

339. Program 339

int m = – 14;
int n = 6;
int o;
o = m % ++n;
n += m++ – o;
m <<= (o ^ n) & 3;

Assuming two's-complement arithmetic, which one of the following correctly represents the
values of m, n, and o after the execution of the code above?

Choice 1 m = – 26, n = – 7, o = 0
Choice 2 m = – 52, n = – 4, o = – 2 (Ans)
Choice 3 m = – 26, n = – 5, o = – 2
Choice 4 m = – 104, n = – 7, o = 0
Choice 5 m = – 52, n = – 6, o = 0

340. How do printf()'s format specifiers %e and %f differ in their treatment of floating-point
     numbers?

Choice 1 %e displays an argument of type double with trailing zeros; %f never displays
         trailing zeros.
Choice 2 %e displays a double in engineering notation if the number is very small or
         very large. Otherwise, it behaves like %f and displays the number in decimal
         notation.

248  C PROGRAMS WITH SOLUTIONS

Choice 3 %e always displays an argument of type double in engineering notation; %f
         always displays an argument of type double in decimal notation. [Ans]
Choice 4 %e expects a corresponding argument of type double; %f expects a
         corresponding argument of type float.
Choice 5 %e and %f both expect a corresponding argument of type double and format it
         identically. %e is left over from K&R C; Standard C prefers %f for new code.

341. $$Except 1 all choices are O.K.$$
     c = getchar();
     What is the proper declaration for the variable c in the code above?
     
Choice 1 char *c;
Choice 2 unsigned int c;
Choice 3 int c;
Choice 4 unsigned char c;
Choice 5 char c;[Ans]

342. Which one of the following will define a function that CANNOT be called from another
     source file?
     
Choice 1 void function() { ... }
Choice 2 extern void function() { ... }
Choice 3 const void function() { ... }
Choice 4 private void function() { ... } [Ans]
Choice 5 static void function() { ... }

==============================
Chapter  5    SAMPLE QUESTIONS
==============================

1. Base class has some virtual method and derived class has a method with the same name. If
   we initialize the base class pointer with derived object, calling of that virtual method will
   result in which method being called?

(a) Base method
(b) Derived method.

Ans. (b)

2. For the following C program

#define AREA(x)(3.14*x*x)

main()
{
     float r1=6.25, r2=2.5, a;
     
     a=AREA(r1);
     
     printf("\n Area of the circle is %f ", a);
     
     a=AREA(r2);
     
     printf("\n Area of the circle is %f ", a);
}

What is the output?

Ans. Area of the circle is 122.656250
     Area of the circle is 19.625000

3. Write a C program to find the sum of numbers between 1 and n.

Ans. Program

main()
{
     int n, i, s = 0;
     
     scanf("%d", &n);
     
     for (i = 1; i<=n, i++)
            s = s + i;
            
     printf("\n sum = %.d", s);
}

249

250  C PROGRAMS WITH SOLUTIONS

4. Program 4

void main()
{
     int d=5;
     
     printf("%f ",d);
}

Ans. Undefined

5. Program 5
void main()
{
     int i;
     
     for(i=1;i<4,i++)
            switch(i)
                      case 1: printf("%d",i);
                              break;
                      {
                      case 2:printf("%d",i);break;
                      case 3:printf("%d",i);break;
                      }
                      
                      switch(i) 
                                case 4:printf("%d",i);
}

Ans. 1,2,3,4

6. Program 6

void main()
{
     char *s="\12345s\n";
     
     printf("%d",sizeof(s));
}

Ans. 6

7. Program 7

void main()
{
     unsigned i=1;    /* unsigned char k= -1 => k=255; */
     signed j=-1;     /* char k= -1 => k=65535 */
     
     /* unsigned or signed int k= -1 =>k=65535 */
     if(i<j)
           printf("less");
     else
             if(i>j)

SAMPLE QUESTIONS  251

                   printf("greater");
             else if(i= =j)
                        printf("equal");
}

Ans. less

8. Program 8

void main()
{
     float j;
     j=1000*1000;
     
     printf("%f ",j);
}

1. 1000000
2. Overflow
3. Error
4. None

Ans. 4

9. How do you declare an array of N pointers to functions returning pointers to functions
   returning pointers to characters?

Ans. The first part of this question can be answered in at least three ways:
     1. char *(*(*a[N])())();
     2. Build the declaration up incrementally, using typedefs:
     
typedef char *pc;

/* pointer to char */
typedef pc fpc();

/* function returning pointer to char */
typedef fpc *pfpc;

/* pointer to above */
typedef pfpc fpfpc();

/* function returning... */
typedef fpfpc *pfpfpc; /* pointer to... */

pfpfpc a[N];

/* array of... */

3. Use the cdecl program, which turns English into C and vice-versa:
   cdecl> declare a as array of pointer to function returning pointer to function returning pointer
   to char
   
char *(*(*a[])())()

cdecl can also explain complicated declarations, help with casts, and indicate which set of
parentheses the arguments go in (for complicated function definitions, like the one above).
Any good book on C should explain how to read these complicated C declarations "inside
out" to understand them ("declaration mimics use").

C PROGRAMS WITH SOLUTIONS    252

The pointer-to-function declarations in the examples above have not included parameter
type information. When the parameters have complicated types, declarations can *really*
get messy.

(Modern versions of cdecl can help here, too.)

10. A structure pointer is defined of the type time . With 3 fields min,sec hours having pointers to
    intergers.
     
    Write the way to initialize the 2nd element to 10.

11. In the above question an array of pointers is declared.
    Write the statement to initialize the 3rd element of the 2 element to 10;

12. Program 12

int f()

void main()
{
     f(1);
     f(1,2);
     f(1,2,3);
}

f(int i,int j,int k)
{
     printf("%d %d %d",i,j,k);
}

What are the number of syntax errors in the above?

Ans. None.

13.  Program 13

void main()
{
     int i=7;
     
     printf("%d",i++*i++);
}

Ans.56

14. Program 14

#define one 0
#ifdef one
printf("one is defined ");
#ifndef one
printf("one is not defined ");

Ans."one is defined"

15. Program 15

void main()
{
     int count=10,*temp,sum=0;
     temp=&count;

SAMPLE QUESTIONS  253

     *temp=20;
     temp=&sum;
     *temp=count;
     
     printf("%d %d %d ",count,*temp,sum);
}

Ans. 20 20 20

16. What is alloca()?

Ans. It allocates and frees memory after use/after getting out of scope.

17. Program 17

main()
{
     static i=3;
     
     printf("%d",i--);
     
     return i>0 ? main():0;
}

Ans. 321

18. Program 18

char *foo()
{
     char result[100]);
     
     strcpy(result,"anything is good");
     
     return(result);
}

void main()
{
     char *j;
     
     j=foo()
     
     printf("%s",j);
}

Ans. anything is good.

19. Program 19

void main()
{
     char *s[]={ "dharma","hewlett-packard","siemens","ibm"};
     char **p;
     
     p=s;
     
     printf("%s",++*p);

254 C P ROGRAMS WITH SOLUTIONS

     printf("%s",*p++);
     printf("%s",++*p);
}

Ans. "harma" (p->add(dharma) && (*p)->harma)
     "harma" (after printing, p->add(hewlett-packard) &&(*p)->harma)
     "ewlett-packard"

20. Output of the following program is

main()
{
     int i=0;
     
     for(i=0;i<20;i++)
     {
          switch(i)
                    case 0:i+=5;
                    case 1:i+=2;
                    case 5:i+=5;
                    default i+=4;
                    break;
     }
     printf("%d,",i);
}
}

(a) 0,5,9,13,17            (b) 5,9,13,17
(c) 12,17,22               (d) 16,21
(e) Syntax error

Ans. (d)

21. What is the ouptut in the following program?

main()
{
     char c=-64;
     int i=-32
     unsigned int u =-16;
     
     if(c>i)
     {
          printf("pass1,");
          if(c<u)
                printf("pass2");
          else
                  printf("Fail2");
      }

SAMPLE QUESTIONS    255

      else
              printf("Fail1);
              
     if(i<u)
           printf("pass2");
     else
             printf("Fail2")
}

(a) Pass1,Pass2      (b) Pass1,Fail2
(c) Fail1,Pass2      (d) Fail1,Fail2
(e) None of these

Ans. (c)

22. What will the following program do?

void main()
{
     int i;
     char a[]="String";
     char *p="New Sring";
     char *Temp;
     Temp=a;
     
     a=malloc(strlen(p) + 1);
     
     strcpy(a,p); //Line number:9//
     
     p = malloc(strlen(Temp) + 1);
     
     strcpy(p,Temp);
     
     printf("(%s, %s)",a,p);
     
     free(p);
     free(a);
     
} //Line number 15//

(a) Swap contents of p & a and print:(New string, string)
(b) Generate compilation error in line number 8
(c) Generate compilation error in line number 5
(d) Generate compilation error in line number 7
(e) Generate compilation error in line number 1

Ans. (b)

256 C PROGRAMS WITH SOLUTIONS

23. In the following code segment what will be the result of the function,
    value of x , value of y

{
     unsigned int x=-1;
     int y;
     y = ~0;
     
     if(x == y)
           printf("same");
     else
             printf("not same");
}

(a) same, MAXINT, -1
(b) not same, MAXINT, -MAXINT
(c) same , MAXUNIT, -1
(d) same, MAXUNIT, MAXUNIT
(e) not same, MAXINT, MAXUNIT

Ans. (a)

24. What will be the result of the following program ?

char *gxxx()
{
     static char xxx[1024];
     
     return xxx;
}

main()
{
     char *g="string";
     strcpy(gxxx(),g);
     g = gxxx();
     strcpy(g,"oldstring");
     
     printf("The string is : %s",gxxx());
}

(a) The string is : string                 (b) The string is :Oldstring
(c) Run time error/Core dump               (d) Syntax error during compilation
(e) None of these

Ans. (b)

25. Find the output for the following C program.

main()
{
     char *p1="Name";

SAMPLE QUESTIONS

     char *p2;
     p2=(char *)malloc(20);
     
     while(*p2++=*p1++);
     
     printf("%s\n",p2);
}

Ans. An empty string

26. Find the output for the following C program.

main()
{
     int x=20, y=35;
     x = y++ + x++;
     y = ++y + ++x;
     
     printf("%d %d\n",x,y);
}

Ans. 57 94

27. Find the output for the following C program.

main()
{
     int x=5;
     
     printf("%d %d %d\n",x,x<<2,x>>2);
}

Ans. 5 20 1

28. Find the output for the following C program.

#define swap1(a,b) a=a+b; b=a-b; a=a-b;

main()
{
      int x=5,y=10;
      
      swap1(x,y);
      
      printf("%d %d\n",x,y);
      
      swap2(x,y);
      
      printf("%d %d\n",x,y);
}

int swap2(int a,int b)

257

258  C PROGRAMS WITH SOLUTIONS

{
     int temp;
     temp=a;
     b=a;
     a=temp;
     
     return;
}

Ans. 10 5

29. Find the output for the following C program.

main()
{
     char *ptr = "Ramco Systems";
     
     (*ptr)++;
     
     printf("%s\n",ptr);
     
     ptr++;
     
     printf("%s\n", ptr);
}

Ans. Samco Systems

30. Find the output for the following C program.

#include<stdio.h>

main()
{
     char s1[]="Ramco";
     char s2[]="Systems";
     
     s1=s2;
     
     printf("%s", s1);
}

Ans. Compilation error giving it cannot be an modifiable 'lvalue'

31. Find the output for the following C program.

#include<stdio.h>

main()
{
     char *p1;
     char *p2;

SAMPLE QUESTIONS

     p1=(char *) malloc(25);
     p2=(char *) malloc(25);

     strcpy(p1,"Ramco");
     strcpy(p2,"Systems");

     strcat(p1,p2);

     printf("%s",p1);
}

Ans. RamcoSystems

32. Write a function in C to calculate n!
Ans. 

int fact (int k)
{
     int P = 1, i;
     for (i = 1; i< = k; i++)
            P = p*i;
            
     return (P);
}

33. Find the output for the following C program.

# define TRUE 0
some code

while(TRUE)
{
     some code
}

Ans. This won't go into the loop as TRUE is defined as 0

34. Program 34

struct list{
                int x;
                struct list *next;
            }*head;
            
the struct head.x =100

Is the above assignment to pointer is correct or wrong ?

Ans. Wrong

35. What is the output of the following ?

int i;

259

260  C PROGRAMS WITH SOLUTIONS

i=1;
i=i+2*i++;
printf(%d,i);

Ans. 4

36. Program 36

FILE *fp1,*fp2;

fp1=fopen("one","w")
fp2=fopen("one","w")

fputc('A',fp1)
fputc('B',fp2)

fclose(fp1)
fclose(fp2)
}

Find the Error, If Any?

Ans. no error. But It will over writes on same file.

37. What is the output for the following ?

Program:

main()
{
     int x = 5;
     
     while (x= =1)
              x = x – 1;
              
     printf ("%d\n", x);
}

Output:
The while loop will not be executed because the condition is false and the value of x will be
printed.
x = 5.

38. Write a C program to find the square root of a given number.

main()
{
     float x;
     scanf("%f ", &x);
     
     printf("\n square root of %.6.2f is %6.2f ", x, sqrt(x));
}

SAMPLE QUESTIONS    261

39. Program

#define MAN(x,y) (x)>(y)?(x):(y)
{
     int i=10;
     
     j=5;
     
     k=0;
     
     k=MAX(i++,++j);
     
     printf(%d %d %d %d,i,j,k);
}

Ans. 10 5 0

40. Program 40

void main()
{
     int i=7;
     
     printf("%d",i++*i++);
}

Ans. 56



=======================================
Chapter  6  SHORT QUESTIONS AND ANSWERS
=======================================

1. What is C language?

Ans. The C programming language is a standardized programming language developed in the
early 1970s by Ken Thompson and Dennis Ritchie for use on the UNIX operating system. It
has since spread to many other operating systems, and is one of the most widely used
programming languages.

2. What is the output of printf("%d")?

Ans. 1. When we write printf("%d",x); this means compiler will print the value of x.

     2. When we use %d the compiler internally uses it to access the argument in the stack
(argument stack). Ideally compiler determines the offset of the data variable depending on
the format specification string. Now when we write printf("%d",a) then compiler first accesses
the top most element in the argument stack of the printf which is %d and depending on the
format string it calculated to offset to the actual data variable in the memory which is to be
printed. Now when only %d will be present in the printf then compiler will calculate the
correct offset (which will be the offset to access the integer variable) but as the actual data
object is to be printed is not present at that memory location so it will print what ever will be
the contents of that memory location.

     3. Some compilers check the format string and will generate an error without the proper
number and type of arguments for things like printf(...) and scanf(...).

3. What is the difference between "calloc(...)" and "malloc(...)"?

Ans. 1. calloc(...) allocates a block of memory for an array of elements of a certain size. By
default the block is initialized to 0. The total number of memory allocated will be
(number_of_elements * size).
malloc(...) takes in only a single argument which is the memory required in bytes. malloc(...)
allocated bytes of memory and not blocks of memory like calloc(...).

     2. malloc(...) allocates memory blocks and returns a void pointer to the allocated space, or
NULL if there is insufficient memory available.
calloc(...) allocates an array in memory with elements initialized to 0 and returns a pointer to
the allocated space. calloc(...) calls malloc(...) in order to use the C++ _set_new_mode
function to set the new handler mode.

262

SHORT QUESTIONS AND ANSWERS 263

4. What is the difference between "printf(...)" and "sprintf(...)"?

Ans. sprintf(...) writes data to the character array whereas printf(...) writes data to the standard
output device.

5. How to reduce a final size of executable?

Ans. Size of the final executable can be reduced using dynamic linking for libraries.

6. Can you tell me how to check whether a linked list is circular?

Ans. Create two pointers, and set both to the start of the list. Update each as follows:

while (pointer1) {
         pointer1 = pointer1->next;
         pointer2 = pointer2->next;
         if (pointer2) pointer2=pointer2->next;
         if (pointer1 == pointer2) {
                                        print ("circular");
                                   }
}

If a list is circular, at some point pointer2 will wrap around and be either at the item just
before pointer1, or the item before that. Either way, its either 1 or 2 jumps until they meet.

7. "union" Data Type What is the output of the following program? Why?
#include
main() 
{
     typedef union {
                        int a;
                        char b[10];
                        float c;
                   }
     Union;
     Union x,y = {100};
     x.a = 50;
     strcpy(x.b,"hello");
     x.c = 21.50;
     printf("Union x : %d %s %f n",x.a,x.b,x.c);
     printf("Union y : %d %s %f n",y.a,y.b,y.c);
}

8. Write out a function that prints out all the permutations of a string. For example,
   abc would give you abc, acb, bac, bca, cab, cba.

264 C PROGRAMS WITH SOLUTIONS

void PrintPermu (char *sBegin, char* sRest) {
                                                 int iLoop;
                                                 char cTmp;
                                                 char cFLetter[1];
                                                 char *sNewBegin;
                                                 char *sCur;
                                                 int iLen;
                                                 static int iCount;
                                                 iLen = strlen(sRest);
                                                 
                                                 if (iLen == 2) {
                                                                     iCount++;
                                                                     printf("%d: %s%s\n",iCount,sBegin,sRest);
                                                                     iCount++;
                                                                     printf("%d: %s%c%c\n",iCount,sBegin,sRest[1],sRest[0]);
                                                                     
                                                                     return;
                                                                 } else if (iLen == 1) {
                                                                                            iCount++;
                                                                                            printf("%d: %s%s\n", iCount, sBegin, sRest);
                                                                                            
                                                                                            return;
                                                                                        } else {
                                                                                                    // swap the first character of sRest with each of
                                                                                                    // the remaining chars recursively call debug print
                                                                                                    sCur = (char*)malloc(iLen);
                                                                                                    sNewBegin = (char*)malloc(iLen);
                                                                                                    for (iLoop = 0; iLoop < iLen; iLoop ++) {
                                                                                                                                                 strcpy(sCur, sRest);
                                                                                                                                                 strcpy(sNewBegin, sBegin);
                                                                                                                                                 cTmp = sCur[iLoop];
                                                                                                                                                  sCur[iLoop] = sCur[0];
                                                                                                                                                  sCur[0] = cTmp;
                                                                                                                                                sprintf(cFLetter, "%c", sCur[0]);
                                                                                                                                                strcat(sNewBegin, cFLetter);
                                                                                                                                                debugprint(sNewBegin, sCur+1);
                                                                                                                                              }
                                                                                                 }
                                               }

SHORT QUESTIONS AND ANSWERS 265

void main() {
                 char s[255];
                 char sIn[255];
                 
                 printf("\nEnter a string:");
                 
                 scanf("%s%*c",sIn);
                 
                 memset(s,0,255);
                 
                 PrintPermu(s, sIn);
}

9. What will print out?

main()
{
     char *p1="name";
     char *p2;
     p2=(char*)malloc(20);
     memset (p2, 0, 20);
     
     while(*p2++ = *p1++);
     
     printf("%s\n",p2);
}

The pointer p2 value is also increasing with p1 .
*p2++ = *p1++ means copy value of *p1 to *p2 , then increment both addresses (p1,p2) by
one , so that they can point to next address . So when the loop exits (ie when address p1
reaches next character to "name" ie null) p2 address also points to next location to "name".
When we try to print string with p2 as starting address , it will try to print string from location
after "name" … hence it is null string ….
e.g. :
initially p1 = 2000 (address) , p2 = 3000
*p1 has value "n" ..after 4 increments , loop exits … at that time p1 value will be 2004 , p2
=3004 … the actual result is stored in 3000 - n , 3001 - a , 3002 - m , 3003 -e … we r trying
to print from 3004 …. where no data is present … that's why its printing null .

Ans. empty string.

10. What will happen in these three cases?

if(a=0)
{
     //somecode
}

if (a==0)
{
     //do something
}

266 C PROGRAMS WITH SOLUTIONS

if (a===0)
{
     //do something
}

What are x, y, y, u

#define Atype int*
typedef int *p;
p x, z;
Atype y, u;

Ans. x and z are pointers to int. y is a pointer to int but u is just an integer variable.

11. What does static variable mean?

Ans. There are 3 main uses for the static.
     1. If you declare within a function:
        It retains the value between function calls
     2. If it is declared for a function name:
        By default function is extern..so it will be visible from other files if the function declaration is
        as static..it is invisible for the outer files
     3. Static for global variables:

By default we can use the global variables from outside files If it is static global..that variable
is limited to with in the file.

12. Advantages of a macro over a function.

Ans. Macro gets to see the Compilation environment, so it can expand __TIME__ __FILE__

#defines. It is expanded by the preprocessor.

For example, you can't do this without macros

    #define PRINT(EXPR) printf( #EXPR "=%d\n", EXPR)
    PRINT( 5+6*7 ) // expands into printf("5+6*7=%d", 5+6*7 );

You can define your mini language with macros:

     #define strequal(A,B) (!strcmp(A,B))
     
Macros are a necessary evils of life. The purists don't like them, but without it no real work
gets done.

13. What are the differences between malloc() and calloc()?

Ans. There are 2 differences.
     First, is in the number of arguments. malloc() takes a single argument(memory required in
bytes), while calloc() needs 2 arguments(number of variables to allocate memory, size in
bytes of a single variable).
     Secondly, malloc() does not initialize the memory allocated, while calloc() initializes the allocated
memory to ZERO.

SHORT QUESTIONS AND ANSWERS 267

14. What are the different storage classes in C?

Ans. C has three types of storage: automatic, static and allocated.
Variable having block scope and without static specifier have automatic storage duration.
Variables with block scope, and with static specifier have static scope. Global variables (i.e.,
file scope) with or without the static specifier also have static scope.

Memory obtained from calls to malloc(), alloc() or realloc() belongs to allocated storage
class.

15. What is the difference between strings and character arrays?

Ans. A major difference is: string will have static storage duration, whereas as a character array
will not, unless it is explicity specified by using the static keyword.
Actually, a string is a character array with following properties:
     * the multibyte character sequence, to which we generally call string, is used to initialize an
array of static storage duration. The size of this array is just sufficient to contain these
characters plus the terminating NUL character.
     * it not specified what happens if this array, i.e., string, is modified.
     * Two strings of same value[1] may share same memory area. For example, in the following
declarations:
     char *s1 = "Calvin and Hobbes";
     char *s2 = "Calvin and Hobbes";
the strings pointed by s1 and s2 may reside in the same memory location. But, it is not true
for the following:
     char ca1[] = "Calvin and Hobbes";
     char ca2[] = "Calvin and Hobbes";
[1] The value of a string is the sequence of the values of the contained characters, in order.

16. Write down the equivalent pointer expression for referring the same element
    a[i][j][k][l].

Ans. a[i] == *(a+i)
     a[i][j] == *(*(a+i)+j)
     a[i][j][k] == *(*(*(a+i)+j)+k)
     a[i][j][k][l] == *(*(*(*(a+i)+j)+k)+l)

17. Which bitwise operator is suitable for checking whether a particular bit is on or off?

Ans. The bitwise AND operator. Here is an example:

enum 
{
     KBit0 = 1, KBit1,… KBit31,
};

268 C PROGRAMS WITH SOLUTIONS

if ( some_int & KBit24 )
      printf ( "Bit number 24 is ON\n" );
else
        printf ( "Bit number 24 is OFF\n" );
        
18. Which bitwise operator is suitable for turning off a particular bit in a number?

Ans. The bitwise AND operator, again. In the following code snippet, the bit number 24 is reset to
     zero.
      
     some_int = some_int & ~KBit24;

19. Which bitwise operator is suitable for putting on a particular bit in a number?

Ans. The bitwise OR operator. In the following code snippet, the bit number 24 is turned ON:

         some_int = some_int | KBit24;

20. Does there exist any other function which can be used to convert an integer or a
    float to a string?

Ans. Some implementations provide a nonstandard function called itoa(), which converts an integer
     to string.
     
         #include
         char *itoa(int value, char *string, int radix);

DESCRIPTION
The itoa() function constructs a string representation of an integer.

PARAMETERS

value:
Is the integer to be converted to string representation.

string:
Points to the buffer that is to hold resulting string.

The resulting string may be as long as seventeen bytes.

radix:
Is the base of the number; must be in the range 2 - 36.

A portable solution exists. One can use sprintf():

     char s[SOME_CONST];
     int i = 10;
     float f = 10.20;
     sprintf ( s, "%d %f \n", i, f );

21. Why does malloc(0) return valid memory address? What's the use?

Ans. malloc(0) does not return a non-NULL under every implementation.
     An implementation is free to behave in a manner it finds suitable, if the allocation size
     requested is zero. The implmentation may choose any of the following actions:

SHORT QUESTIONS AND ANSWERS 269

         * A null pointer is returned.
         * The behavior is same as if a space of non-zero size was requested. In this case, the usage
           of return value yields to undefined-behavior.

22. Notice, however, that if the implementation returns a non-NULL value for a request
    of a zero-length space, a pointer to object of ZERO length is returned! Think, how
    an object of zero size should be represented?
    
Ans. For implementations that return non-NULL values, a typical usage is as follows:

void
func ( void )
{
     int *p; /* p is a one-dimensional array,
                whose size will vary during the
                the lifetime of the program */
     size_t c;
     
     p = malloc(0); /* initial allocation */
     
     if (!p)
     {
          perror ("FAILURE" );
          
          return;
      }
      
      /* … */
      while (1)
      {
           c = (size_t) … ; /* Calculate allocation size */
           p = realloc ( p, c * sizeof *p );
           /* use p, or break from the loop */
           
           /* … */
       }
       
       return;
}

Notice that this program is not portable, since an implementation is free to return NULL for
a malloc(0) request, as the C Standard does not support zero-sized objects.

23. How do I write code that reads data at memory location specified by segment and
    offset?

Ans. Use peekb() function. This function returns byte(s) read from specific segment and offset
locations in memory. The following program illustrates use of this function. In this program
from VDU memory we have read characters and its attributes of the first row. The information
stored in file is then further read and displayed using peek() function.

270 C PROGRAMS WITH SOLUTIONS

#include <stdio.h>
#include <dos.h>

main()
{
     char far *scr = 0xB8000000;
     FILE *fp;
     int offset;
     char ch;
     
     if ( ( fp = fopen ( "scr.dat", "wb" ) ) == NULL )
     {
          printf ( "\nUnable to open file" );
          
          exit();
      }
      
      // reads and writes to file
      
      for ( offset = 0 ; offset < 160 ; offset++ )
             fprintf ( fp, "%c", peekb ( scr, offset ) ) ;
             
      fclose ( fp ) ;
      
      if ( ( fp = fopen ( "scr.dat", "rb" ) ) == NULL )
      {
           printf ( "\nUnable to open file" );
           
           exit();
      }
      
      // reads and writes to file
      for ( offset = 0 ; offset < 160 ; offset++ )
      {
           fscanf ( fp, "%c", &ch );
           printf ( "%c", ch ) ;
      }
      
      fclose ( fp );
}

24. What is conversion operator?

Ans. class can have a public method for specific data type conversions.
     for example:

class Boo
{

SHORT QUESTIONS AND ANSWERS 271

     double value;
     public:
     Boo(int i)
     operator double()
     {
          return value;
     }
};

Boo BooObject;

double i = BooObject; // assigning object to variable i of type double. now conversion operator
                         gets called to assign the value.

25. What is the difference between malloc()/free() and new/delete?

Ans. malloc allocates memory for object in heap but doesn't invoke object's constructor to initiallize
     the object.
     
new allocates memory and also invokes constructor to initialize the object.
malloc() and free() do not support object semantics
Does not construct and destruct objects
string * ptr = (string *)(malloc (sizeof(string)))
Are not safe
Does not calculate the size of the objects that it construct
Returns a pointer to void

     int *p = (int *) (malloc(sizeof(int)));
     int *p = new int;
     
Are not extensible
new and delete can be overloaded in a class
"delete" first calls the object's termination routine (i.e. its destructor) and then releases the
space the object occupied on the heap memory. If an array of objects was created using
new, then delete must be told that it is dealing with an array by preceding the name with an
empty []:Int_t *my_ints = new Int_t[10];
...
delete []my_ints;

26. What is the difference between "new" and "operator new" ?

Ans. "operator new" works like malloc.

272 C PROGRAMS WITH SOLUTIONS

27. What is difference between template and macro?

Ans. There is no way for the compiler to verify that the macro parameters are of compatible
types. The macro is expanded without any special type checking.
If macro parameter has a postincremented variable ( like c++ ), the increment is performed
two times.

Because macros are expanded by the preprocessor, compiler error messages will refer to
the expanded macro, rather than the macro definition itself. Also, the macro will show up in
expanded form during debugging.

for example:

Macro:
#define min(i, j) (i < j ? i : j)
template:
template<class T>
T min (T i, T j)
{
     return i < j ? i : j;
}

28. What are advantages and disadvantages of external storage class?

Ans. Advantages of external storage class are:
     1)Persistent storage of a variable retains the latest value
     2)The value is globally available
     
     Disadvantages of external storage class are:
     1)The storage for an external variable exists even when the variable is not needed
     2)The side effect may produce surprising output
     3)Modification of the program is difficult
     4)Generality of a program is affected.

29. What is a void pointer?

Ans. A void pointer is a C convention for a raw address. The compiler has no idea what type of
object a void Pointer really points to. If you write

     int *ip;

ip points to an int. If you write

     void *p;
     
p doesn't point to a void!

In C and C++, any time you need a void pointer, you can use another pointer type. For
example, if you have a char*, you can pass it to a function that expects a void*. You don't
even need to cast it. In C (but not in C++), you can use a void* any time you need any kind
of pointer, without casting. (In C++, you need to cast it).

SHORT QUESTIONS AND ANSWERS 273

A void pointer is used for working with raw memory or for passing a pointer to an unspecified
type.

Some C code operates on raw memory. When C was first invented, character pointers (char *)
were used for that. Then people started getting confused about when a character pointer
was a string, when it was a character array, and when it was raw memory.

30. How can type-insensitive macros be created?

Ans. A type-insensitive macro is a macro that performs the same basic operation on different
     data types.

This task can be accomplished by using the concatenation operator to create a call to a typesensitive 
function based on the parameter passed to the macro. The following program provides an example:

#include
#define SORT(data_type) sort_ ## data_type
void sort_int(int** i);
void sort_long(long** l);
void sort_float(float** f);
void sort_string(char** s);
void main(void);
void main(void)
{
     int** ip;
     long** lp;
     float** fp;
     char** cp;
     ...
     sort(int)(ip);
     sort(long)(lp);
     sort(float)(fp);
     sort(char)(cp);
     ...
}

This program contains four functions to sort four different data types: int, long, float, and
string (notice that only the function prototypes are included for brevity). A macro named
SORT was created to take the data type passed to the macro and combine it with the sort_
string to form a valid function call that is appropriate for the data type being sorted. Thus, the
string

274 C PROGRAMS WITH SOLUTIONS

     sort(int)(ip);

translates into

     sort_int(ip);
     
after being run through the preprocessor.

31. When should a type cast not be used?

Ans. A type cast should not be used to override a const or volatile declaration. Overriding these
     type modifiers can cause the program to fail to run correctly.
     A type cast should not be used to turn a pointer to one type of structure or data type into
     another. In the rare events in which this action is beneficial, using a union to hold the values
     makes the programmer's intentions clearer.

32. When is a switch statement better than multiple if statements?

Ans. A switch statement is generally best to use when you have more than two conditional
     expressions based on a single variable of numeric type.

33. What is storage class and what are storage variable?

Ans. A storage class is an attribute that changes the behavior of a variable. It controls the lifetime,
     scope and linkage.
     
There are five types of storage classes

     1) auto
     2) static
     3) extern
     4) register
     5) typedef.

34. What is a static function?

Ans. A static function is a function whose scope is limited to the current source file. Scope refers
to the visibility of a function or variable. If the function or variable is visible outside of the
current source file, it is said to have global, or external, scope. If the function or variable is
not visible outside of the current source file, it is said to have local, or static, scope.

35. How can I sort things that are too large to bring into memory?

Ans. A sorting program that sorts items that are on secondary storage (disk or tape) rather than
primary storage (memory) is called an external sort. Exactly how to sort large data depends
on what is meant by too large to fit in memory. If the items to be sorted are themselves too
large to fit in memory (such as images), but there aren't many items, you can keep in
memory only the sort key and a value indicating the data's location on disk. After the key/
value pairs are sorted, the data is rearranged on disk into the correct order. If too large to fit
in memory means that there are too many items to fit into memory at one time, the data can
be sorted in groups that will fit into memory, and then the resulting files can be merged. A
sort such as a radix sort can also be used as an external sort, by making each bucket in the

SHORT QUESTIONS AND ANSWERS 275

sort a file. Even the quick sort can be an external sort. The data can be partitioned by writing
it to two smaller files. When the partitions are small enough to fit, they are sorted in memory
and concatenated to form the sorted file.

36. What is a pointer variable?

Ans. A pointer variable is a variable that may contain the address of another variable or any valid
     address in the memory.

37. What is a pointer value and address?

Ans. A pointer value is a data object that refers to a memory location. Each memory location is
numbered in the memory. The number attached to a memory location is called the address of
the location.

38. What is a modulus operator? What are the restrictions of a modulus operator?

Ans. A Modulus operator gives the remainder value. The result of x%y is obtained by (x-(x/y)*y).
This operator is applied only to integral operands and cannot be applied to float or double.
A linker converts an object code into an executable code by linking together the necessary
build in functions. The form and place of declaration where the variable is declared in a
program determine the linkage of variable.

39. What is a function and built-in function?

Ans. A large program is subdivided into a number of smaller programs or subprograms. Each
subprogram specifies one or more actions to be performed for a large program. such
subprograms are functions.

The function supports only static and extern storage classes. By default, function assumes
extern storage class. functions have global scope. Only register or auto storage class is
allowed in the function parameters. Built-in functions that predefined and supplied along
with the compiler are known as built-in functions. They are also known as library functions.

40. What is a macro, and how do you use it?

Ans. A macro is a preprocessor directive that provides a mechanism for token replacement in
your source code. Macros are created by using the #define statement.
Here is an example of a macro: Macros can also utilize special operators such as the stringizing
operator (#) and the concatenation operator (##).The stringizing operator can be used to
convert macro parameters to quoted strings, as in the following example:

     #define DEBUG_VALUE(v) printf(#v is equal to %d.n, v)

In your program, you can check the value of a variable by invoking the DEBUG_VALUE
macro:

     ...
     int x = 20;
     DEBUG_VALUE(x);
...

276 C PROGRAMS WITH SOLUTIONS

The preceding code prints x is equal to 20. on-screen. This example shows that the stringizing
operator used with macros can be a very handy debugging tool.

41. What is the difference between goto and longjmp() and setjmp()?

Ans. A goto statement implements a local jump of program execution, and the longjmp() and
setjmp() functions implement a nonlocal, or far, jump of program execution.
Generally, a jump in execution of any kind should be avoided because it is not considered
good programming practice to use such statements as goto and longjmp in your program.

A goto statement simply bypasses code in your program and jumps to a predefined position.

To use the goto statement, you give it a labeled position to jump to. This predefined position
must be within the same function. You cannot implement gotos between functions.

When your program calls setjmp(), the current state of your program is saved in a structure
of type jmp_buf. Later, your program can call the longjmp() function to restore the program's
state as it was when you called setjmp().Unlike the goto statement, the longjmp() and setjmp()
functions do not need to be implemented in the same function.

However, there is a major drawback to using these functions: your program, when restored
to its previously saved state, will lose its references to any dynamically allocated memory
between the longjmp() and the setjmp(). This means you will waste memory for every
malloc() or calloc() you have implemented between your longjmp() and setjmp(), and your
program will be horribly inefficient. It is highly recommended that you avoid using functions
such as longjmp() and setjmp() because they, like the goto statement, are quite often an
indication of poor programming practice.

42. Is it acceptable to declare/define a variable in a C header?

Ans. A global variable that must be accessed from more than one file can and should be declared
in a header file. In addition, such a variable must be defined in one source file.
Variables should not be defined in header files, because the header file can be included in
multiple source files, which would cause multiple definitions of the variable. The ANSI C
standard will allow multiple external definitions, provided that there is only one initialization.

But because there's really no advantage to using this feature, it's probably best to avoid it
and maintain a higher level of portability.

Global variables that do not have to be accessed from more than one file should be declared
static and should not appear in a header file.

43. Why should I prototype a function?

Ans. A function prototype tells the compiler what kind of arguments a function is looking to
receive and what kind of return value a function is going to give back. This approach helps
the compiler ensure that calls to a function are made correctly and that no erroneous type
conversions are taking place.

44. What is the quickest searching method to use?

Ans. A binary search, such as bsearch() performs, is much faster than a linear search. A hashing
algorithm can provide even faster searching. One particularly interesting and fast method

SHORT QUESTIONS AND ANSWERS 277

for searching is to keep the data in a digital trie. A digital trie offers the prospect of being
able to search for an item in essentially a constant amount of time, independent of how many
items are in the data set.

A digital trie combines aspects of binary searching, radix searching, and hashing. The term
digital trie refers to the data structure used to hold the items to be searched. It is a multilevel
data structure that branches N ways at each level.

45. What are the advantages of auto variables?

Ans. 1) The same auto variable name can be used in different blocks
     2) There is no side effect by changing the values in the blocks
     3) The memory is economically used
     4) Auto variables have inherent protection because of local scope.

46. What are the characteristics of arrays in C?

Ans. 1) An array holds elements that have the same data type.
     2) Array elements are stored in subsequent memory locations.
     3) Two-dimensional array elements are stored row by row in subsequent memory locations.
     4) Array name represents the address of the starting element.
     5) Array size should be mentioned in the declaration. Array size must be a constant expression
        and not a variable.

47. How do you print only part of a string?

Ans. /* Use printf() to print the first 11 characters of source_str. */
     printf(First 11 characters: '%11.11s'n, source_str);

48. In C, what is the difference between a static variable and global variable?

Ans. A static variable declared outside of any function is accessible only to all the functions
defined in the same file (as the static variable). However, a global variable can be accessed
by any function (including the ones from different files).

49. In C, why is the void pointer useful?

Ans. When would you use it? The void pointer is useful because it is a generic pointer that any
pointer can be cast into and back again without loss of information.

50. What is Polymorphism ?

Ans. 'Polymorphism' is an object oriented term. Polymorphism may be defined as the ability of
related objects to respond to the same message with different, but appropriate actions. In
other words, polymorphism means taking more than one form. Polymorphism leads to two
important aspects in Object Oriented terminology - Function Overloading and Function

Overriding. Overloading is the practice of supplying more than one definition for a given
function name in the same scope. The compiler is left to pick the appropriate version of the
function or operator based on the arguments with which it is called. Overriding refers to the

278 C PROGRAMS WITH SOLUTIONS

modifications made in the sub class to the inherited methods from the base class to change
their behavior.

51. What is Operator overloading ?

Ans. When an operator is overloaded, it takes on an additional meaning relative to a certain class.
But it can still retain all of its old meanings.
Examples:
     1) The operators >> and << may be used for I/O operations because in the header, they are
        overloaded.
     2) In a stack class it is possible to overload the + operator so that it appends the contents of
        one stack to the contents of another. But the + operator still retains its original meaning
        relative to other types of data.

52. What are Templates?

Ans. C++ Templates allow u to generate families of functions or classes that can operate on a
variety of different data types, freeing you from the need to create a separate function or
class for each type. Using templates, u have the convenience of writing a single generic
function or class definition, which the compiler automatically translates into a specific version
of the function or class, for each of the different data types that your program actually uses.

Many data structures and algorithms can be defined independently of the type of data they
work with. You can increase the amount of shared code by separating data-dependent
portions from data-independent portions, and templates were introduced to help you do that.

53. What is the difference between dynamic binding and static binding?

Ans. Dynamic Binding : The address of the functions are determined at runtime rather than 
@ compile time. This is also known as "Late Binding".

     Static Binding : The address of the functions are determined at compile time rather 
than @ run time. This is also known as "Early Binding".

54. What is difference between C/C++?

Ans. C does not have a class/object concept.
C++ provides data abstraction, data encapsulation, Inheritance and Polymorphism.
C++ supports all C syntax.

In C passing value to a function is "Call by Value" whereas in C++ its "Call by Reference"
File extension is .c in C while .cpp in C++.(C++ compiler compiles the files with .c extension
but C compiler can not!)

In C structures can not have contain functions declarations. In C++ structures are like
classes, so declaring functions is legal and allowed.

C++ can have inline/virtual functions for the classes.

SHORT QUESTIONS AND ANSWERS 279

c++ is C with Classes hence C++ while in c the closest u can get to an User defined data
type is struct and union.

Why doesn't the following code give the desired result?

     int x = 3000, y = 2000;
     long int z = x * y;

Here the multiplication is carried out between two ints x and y, and the result that would
overflow would be truncated before being assigned to the variable z of type long int. However,
to get the correct output, we should use an explicit cast to force long arithmetic as shown
below:

     long int z = ( long int ) x * y;
     
Note that ( long int )( x * y ) would not give the desired effect.

55. Why doesn't the following statement work?

Ans. char str[ ] = "Hello";
     strcat ( str, '!' );
     
The string function strcat() concatenates strings and not a character. The basic difference
between a string and a character is that a string is a collection of characters, represented by
an array of characters whereas a character is a single character. To make the above statement
work writes the statement as shown below:

     strcat ( str, "!" ) ;

56. How do I know how many elements an array can hold?

Ans. The amount of memory an array can consume depends on the data type of an array. In DOS
environment, the amount of memory an array can consume depends on the current memory
model (i.e. Tiny, Small, Large, Huge, etc.). In general an array cannot consume more than
64 kb. Consider following program, which shows the maximum number of elements an array
of type int, float and char can have in case of Small memory model.

main()
{
      int i[32767] ;
      float f[16383] ;
      char s[65535] ;
}

======================
Chapter  7  QUESTIONS
======================

1. What is a compiler?
2. How is a C program run?
3. How is a C program compiled usually?
4. Are upper and lower case equivalent in C?
5. What the two different kinds of error which can be in a program?
6. Write a command to print out the message "Wow big deal".
7. Write a command to print out the number 22.
8. Write two commands to print out "The 3 Wise Men" two different ways.
9. Why are there only a few reserved command words in C?
10. What is an operating system for?
11. What is a pseudo-device name?
12. If you had a C source program which you wanted to call 'accounts' what name would you save it under?
13. What would be the name of the file produced by the compiler of the program in 3?
14. How would this program be run?
15. How is a library file incorporated into a C program?
16. Name the most common library file in C.
17. Is it possible to define new functions with the same names as standard library functions?
18. What is another name for a library file?
19. What is a block?
20. Name the six basic things which make up a C program.
21. Does a C program start at the beginning? (Where is the beginning?)
22. What happens when a program comes to a } character? What does this character signify?
23. What vital piece of punctuation goes at the end of every simple C statement?
24. What happens if a comment is not ended? That is if the programmer types /* .. to start but forgets the ..*/ to close?

280

QUESTIONS   281

25. Write a function which takes two values a and b and returns the value of (a*b).
26. Is there anything wrong with a function which returns no value?
27. What happens if a function returns a value but it is not assigned to anything?
28. What happens if a function is assigned to an object but that function returns no value?
29. How can a function be made to quit early?
30. What is an identifier?
31. Say which of the following are valid C identifiers:
    1. Ralph23
    2. 80shillings
    3. mission_control
    4. A%
    5. A$
    6. _off
32. Write a statement to declare two integers called i and j.
33. What is the difference between the types float and double?
34. What is the difference between the types int and unsigned int?
35. Write a statement which assigns the value 67 to the integer variable "I".
36. What type does a C function return by default?
37. If we want to declare a function to return long float, it must be done in, at least, two places. Where are these?
38. Write a statement, using the cast operator, to print out the integer part of the number 23.1256.
39. Is it possible to have an automatic global variable?
40. Name two ways that values and results can be handed back from a function.
41. Where are parameters declared?
42. Can a function be used directly as a value parameter?
43. Does it mean anything to use a function directly as a variable parameter?
44. What do the symbols * and & mean, when they are placed in front of an identifier?
45. Do actual and formal parameters need to have the same names?
46. Define a macro called "birthday" which describes the day of the month upon which your birthday falls.
47. Write an instruction to the preprocessor to include to maths library math.h.
48. A macro is always a number. True or false?
49. A macro is always a constant. True or false?
50. What is a pointer?
51. How is a variable declared to be a pointer?

282 C PROGRAMS WITH SOLUTIONS

52. What data types can pointers "point to"?
53. Write a statement which converts a pointer to a character into a pointer to a double type.
(This is not as pointless as it seems. It is useful in dealing with unions and memory allocation functions.)
54. Why is it incorrect to declare: float *number = 2.65; ?
55. Write a program which simply prints out: 6.23e+00.
56. Investigate what happens when you type the wrong conversion specifier in a program. e.g.
try printing an integer with %f or a floating point number with %c. This is bound to go wrong
- but how will it go wrong?
57. What is wrong with the following statements?
    1. printf (x);
    2. printf ("%d");
    3. printf ();
    4. printf ("Number = %d");
    Hint: if you don't know, try them in a program!
58. What is a white space character?
59. Write a program which fetches two integers from the user and multiplies them together.
Print out the answer. Try to make the input as safe as possible.
60. Write a program which just echoes all the input to the output.
61. Write a program which strips spaces out of the input and replaces them with a single newline character.
62. scanf always takes pointer arguments. True or false?
63. What is an operand?
64. Write a statement which prints out the remainder of 5 divided by 2.
65. Write a short statement which assigns the remainder of 5 divided by 2 to a variable called "rem".
66. Write a statement which subtracts -5 from 10.
67. Write in C: if 1 is not equal to 23, print out "Thank goodness for mathematics!"
68. How many kinds of loop does C offer, and what are they?
69. When is the condition tested in each of the loops?
70. Which of the loops is always executed once?
71. Write a program which copies all input to output line by line.
72. Write a program to get 10 numbers from the user and add them together.
73. Given any array, how would you find a pointer to the start of it?
74. How do you pass an array as a parameter? When the parameter is received by a function
does C allocate space for a local variable and copy the whole array to the new location?

QUESTIONS 283

75. Write a statement which declares an array of type double which measures 4 by 5. What
numbers can be written in the indicies of the array?
76. What are the two main ways of declaring strings in a program?
77. How would you declare a static array of strings?
78. Write a program which gets a number between 0 and 9 and prints out a different message
for each number. Use a pre-initialized array to store the strings.
79. What type of data is returned from mathematical functions?
80. All calculations are performed using long variables. True or false?
81. What information is returned by strlen()?
82. What action is performed by strcat()?
83. Name five kinds of error which can occur in a mathematical function.
84. Which operators can be hidden inside other statements?
85. Give a reason why you would not want to do this in every possible case.
86. Is FILE a reserved word? If so why is it in upper case?
87. Write a statement which declares a file pointer called fp.
88. Enumerated data are given values by the compiler so that it can do arithmetic with them.
True or false?
89. Does void do anything which C cannot already do without this type?
90. What type might a timer device be declared if it were to be called by a variable name?
91. Write a statement which declares a new type "real" to be like the usual type "double".
92. Variables declared const can be of any type. True or false?
93. What distinguishes a bit pattern from an ordinary variable? Can any variable be a bit pattern?
94. What is the difference between an inclusive OR operation and an exclusive OR operation?
95. If you saw the following function call in a program, could you guess what its parameter was?
96. OpenWindow (BORDER | GADGETS | MOUSECONTROL | SIZING);
97. What is the difference between call by value and call by reference?
98.Find out what the denary (decimal) values of the following operations are:
   1. 7 & 2
   2. 1 & 1
   3. 15 & 3
   4. 15 & 7
   5. 15 & 7 & 3
   Try to explain the results. (Hint: draw out the numbers as binary patterns, using the program
   listed.)
99. Find out what the denary (decimal) values of the following operations are:
    1. 1 | 2
    2. 1 | 2 | 3

284  C PROGRAMS WITH SOLUTIONS

100. Find out the values of:
     1. 1 & (~1)
     2. 23 & (~23)
     3. 2012 & (~2012)
     (Hint: write a short program to work them out. Use short type variables for all the numbers).
101. What are the following?
     1. File name
     2. File pointer
     3. File handle
102. What is the difference between high and low level filing?
103. Write a statement which opens a high level file for reading.
104. Write a statement which opens a low level file for writing.
105. Write a program which checks for illegal characters in text files. Valid characters are ASCII
codes 10,13,and 32..126. Anything else is illegal for programs.
106. What statement performs formatted writing to text files?
107. Print out all the header files on your system so that you can see what is defined where!
108. What is the difference between a structure and a union?
109. What is a member?
110. If x is a variable, how would you find out the value of a member called mem.
111. If ptr is a pointer to a structure, how would you find out the value of a member called mem.
112. A union is a group of variables in a single package. True or false?
113. What is a structure diagram?
114. How are data linked together to make a data structure?
115. Every separate struct type in a data structure has its own variable name. True or false?
116. How are the members of structures accessed in a data structure?
117. Write a statement which creates a new structure of type "struct BinaryTree" and finds its
address. Store that address in a variable which is declared as follows:
struct BinaryTree *ptr;
118. What happens if the condition in a while loop is initially false?
119. What is a null string?
120. Write a small program which makes a linked list, three structures long and assigns all their
data to be zero. Can you automate this program with a loop? Can you make it work for any
number of structures?
121. What is the output of printf("%d")?
122. What will happen if I say delete this?
123. Differentiate between "C structure" and "C++ structure".

QUESTIONS  285

124. Diffrentiate between a "assignment operator" and a "copy constructor".
125. What is the difference between "overloading" and "overridding"?
126. Explain the need for "Virtual Destructor".
127. Can we have "Virtual Constructors"?
128. What are the different types of polymorphism?
129. What are Virtual Functions? How to implement virtual functions in "C"?
130. What are the different types of Storage classes?
131. What is Namespace?
132. What are the types of STL containers?.
133. Differentiate between "vector" and "array".
134. How to write a program such that it will delete itself after exectution?
135. Can we generate a C++ source code from the binary file?
136. What are inline functions?
137. Talk sometiming about profiling.
138. How many lines of code you have written for a single program?
139. What is "strstream" ?
140. How to write Multithreaded applications using C++?
141. Explain "passing by value", "passing by pointer" and "passing by reference".
142. Write any small program that will compile in "C" but not in "C++".
143. Have you heard of "mutable" keyword?
144. What is a "RTTI"?
145. Is there something that I can do in C and not in C++?
146. Why preincrement operator is faster than postincrement?
147. What is the difference between "calloc" and "malloc"?
148. What will happen if I allocate memory using "new" and free it using "free" or allocate sing
"calloc" and free it using "delete"?
149. What is Memory Alignment?
150. Explain working of printf.
151. Differentiate between "printf " and "sprintf".
152. What is "map" in STL?
153. When shall I use Multiple Inheritance?
154. What are the techniques you use for debugging?
155. How to reduce a final size of executable?
156. Give 2 examples of a code optimization.
157. Is it possible to use multiple else with if statement?

286 C P ROGRAMS WITH SOLUTIONS

158. Is it possible to use multiple default statements in switch () statement?
159. Why goto statement is avoided?
160. What are the limitations of switch() case statement?
161. Can we put default statement anywhere in the switch () case structure?
162. What happens if you create a loop that never ends?
163. Is it possible to create a for loop that is never executed?
164. What is a loop? Why it is necessary in the program?
165. Is it possible to nest while loop within for loops?
166. Is it possible to use multiple while statement with do statement?
167. What are the values of NULL and !NULL?
168. What is the difference between (!0) and (!0)?
169. Write the definition of a function.
170. How do functions help to reduce the program size?
171. Differentiate between library and the user defined functions.
172. How does a function work?
173. Explain How arguments are passes and results are returned?
174. List any five library functions and illustrate them with suitable examples.
175. What are actual and formal argumnets?
176. What are the uses of return statements?
177. What does it mean if there is no return statement in the function?
178. What are void functions?
179. What is global pointer?
180. What is recursion? Explain its advantages.
181. Explain types of recursions.
182. Is it possible to call library functions recursively?


///::~

/*
file name: hello.cpp
*/

/* C++ Programming Examples */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();  // clear the screen
	cout<<"Hello Compiler, I am C++";
	getch();  // holds output screen until user press a key
}
Output:
Hello Compiler, I am C++"

//::~

/*
file name: Hello.c
gcc -o Hello Hello.c -lTurboC -lncurses
xterm +sb -e Hello
Hello, world!  Consider the following Turbo C program:
*/

#include <conio.h>
#include <time.h>
void
main (void)
{
  time_t t, newt;
  int i = 0, x, y;
  time (&t);
  clrscr ();
  cprintf ("Hit any key to continue: ");
  x = wherex ();
  y = wherey ();
  // Wait for a keypress, flashing the message
  // "I'm waiting!" on and off once per second.
  // After any key is hit, display "Hello, world!"
  while (!kbhit ())
    {
      time (&newt);
      if (t != newt)
        {
          t = newt;
          i++;
          if (0 == (i & 1))
            cprintf ("I\'m waiting!");
          clreol ();
          gotoxy (x, y);
        }
    }
  getch ();
  cprintf ("\r\nHello, world!\r\n");
}
//::~

/*
File name: foo.c
$gcc -o main *.c
$main
Hello, World!
*/
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    return 0;
}


+==================================================+
| [ Turbo C Programming Using Turbo C++ Compiler ] |
+==================================================+
http://www.softwareandfinance.com/Turbo_C/Index.html

Turbo C - Data Types
====================
Turbo C - Struct
Turbo C - Struct and Union
Turbo C - Enumertions
Turbo C - Working With Arrays
Turbo C - double array initialization and counting the number of elements
Turbo C - string array initialization
Turbo C - Pointer Declaration and Usage
Turbo C - Pointer to an Array
Turbo C - Retriving string array from a function
Turbo C - const and non const string variable
Turbo C - Switch Case statement
Turbo C - Static Global Variables
Turbo C - Static Variables
Turbo C - Static Functions
Turbo C - #define macro

Turbo C - Loops and logical conditions
======================================
Turbo C - Finding Armstrong Numbers
Turbo C - Fibonacci Series
Turbo C - Simple IF statement
Turbo C - Simple IF ELSE statement
Turbo C - Nested IF statement
Turbo C - ELSE IF Ladder
Turbo C - Loops - Display Numbers using for, while and do while loop
Turbo C - Loops - Creating Pyramid
Turbo C - Loops - Read Numbers and check ODD or EVEN
Turbo C - Loops - Difference Between for, while and do while loop
Turbo C - Loops - Reverse String
Turbo C - Loops - Build Pattern of * and numbers

Turbo C Program for Number to Text Conversion
=============================================
Turbo C - String To Number Conversion
Turbo C - Diamond Star pattern using For Loops
Turbo C - Build Outline Diamond Pattern of *
Turbo C - Left and Right Aligned pattern using For Loops
Turbo C - Guess the Number in 5 attempts
Turbo C - Guess the Secret Word
Turbo C - Use of break and continue statement
Turbo C - Switch Case Example for Simple Arithmetic Operations
Turbo C - Scroll Text Using gotoxy and printf

Turbo C - Programs for Basic Calculations
=========================================
Turbo C - Simple Student Mark List Preparation
Turbo C - Kaprekar Transformation 3 Digit Number ends with 495
Turbo C - Pascal Triangle
Turbo C - converting to lower and upper case
Turbo C - Printing Characters on the Screen using getch and putch
Turbo C - Static Variable to Count the function calls
Turbo C - Palindrome of a Number
Turbo C - Reverse a Number
Turbo C - Counting the Number of Digits of a Number
Turbo C - Program to Count no. of Characters, Words and Lines
Turbo C - Fahrenheit Celsius Conversion
Turbo C - Printing ASCII Characters
Turbo C - Display the numbers containing the digit '5' in between 100 to 200
Turbo C - Reading Function Keys (F1, F2, F3, ...) with bioskey
Turbo C - Reading Arrow Keys (Left, Right, Up and Down) with bioskey
Turbo C - Find the smallest of N Numbers
Turbo C - Find the biggest of N Numbers

Turbo C - Algebra and Geometry
==============================
Turbo C - Sum of 0 - N numbers = n * (n + 1) / 2
Turbo C - Sum of All Numbers given the range
Turbo C - Sum of Even Numbers given the range
Turbo C - Sum of Odd Numbers given the range
Turbo C - Distance between the two points
Turbo C - Equation of a line
Turbo C - Slope of a line
Turbo C - Check the point lies on the line (projected either direction)
Turbo C - Check the point lies on the line segment
Turbo C - Intersecting point of two lines given endpoints
Turbo C - Intersecting point of two lines given line equation
Turbo C - Intersection of Two Line Segments
Turbo C - Check whether a point is inside or outside the Circle
Turbo C - Check whether a point is inside or outside the Triangle
Turbo C - Find Area and Perimeter of a Triangle Given 3 points
Turbo C - Find Acute, Obtuse or Right Angle Triangle Given 3 points
Turbo C - Check the number is a Perfect Square
Turbo C - Check and Print Prime Numbers
Turbo C - Prime Factor of a given number
Turbo C - Calculate Mean
Turbo C - Calculate Median
Turbo C - Calculate Mode
Turbo C - Calculate Range
Turbo C - Calculate Variance
Turbo C - Calculate Standard Deviation
Turbo C - Greatest Common Divisor (GCD) and Least Common Multiple (LCM)
Turbo C - Using Sine Series to find SIN Value
Turbo C - Using Cosine Series to find COS Value
Turbo C - Using Sine / Cosine Series to find TAN Value
Turbo C - Quadratic Equation Solver - ax2+bx+c=0
Turbo C - Using Exponent Series and Eulers Number 2.71828 to find EXP Value

Turbo C - Data Structures and Algorithms
========================================
Turbo C - Permutation Algorithm
Turbo C - Tower Of Hanoi Algorithm
Turbo C - Queue with Regular Sorting
Turbo C - Sample Stack Implementation
Turbo C - InFix to PostFix Conversion
Turbo C - Employee Master File Creation with FILE*
Turbo C - Displaying Yearly Calendar Given Year and First Day of Year
Turbo C - Displaying Monthly Calendar Given any Date from year 1900
Turbo C - Convert Numbers to Text
Turbo C - Bubble Sort
Turbo C - Insertion Sort
Turbo C - Decimal to Binary Conversion
Turbo C - Binary to Decimal Conversion
Turbo C - Factorial of a number using Recursion
Turbo C - Factorial of a number with out using Recursion
Turbo C - Program to find Square Root - Approximation Method
Turbo C - Program to find Square Root - Algorithm Method
Turbo C - Checking Leap Year
Turbo C - Time Span Counting the number of days between two days
Turbo C - Simple Student Grading Logic
Turbo C - srand, rand and randomize functions for generating random numbers
Turbo C - kbhit, getch and putch functions

Turbo C Graphics and TSR Programming
====================================
Turbo C Graphics - Starting with Graphics
Turbo C Graphics - BGI Error: Graphics not initialized (use 'initgraph')
Turbo C Graphics - Linker Error: Undefined symbol _initgraph in module
Turbo C Graphics - Using Circle and setcolor, setbkcolor functions
Turbo C Graphics - Using bar and setfillstyle functions
Turbo C Graphics - Using line and setlinestyle functions
Turbo C Graphics - Crystal Drawing and Rotating Animation
Turbo C Graphics - Blink Characters and Words
Turbo C Graphics - Drawing Circles with Pixels
Turbo C Graphics - Move Object using getimage and putimage
Turbo C Graphics - Plot Sin Cos and Tan Series
Turbo C Graphics - Menu Design using Graphics
Turbo C - Terminate Stay Resident (TSR) Clock Display Timer
Turbo C - Terminate Stay Resident (TSR) - Scrolling Text
Turbo C Graphics - Move Objects using cursor keys - Left,Right,Up,Down Arrow Keys
Turbo C Graphics - Tic Tac Toe Square Game


TSR Programming Examples and Tutorials	Submit Article
======================================================
Program to Print English Alphabets from Printer using Interrupts
Program to interchange the Small and Capital Letters and Unload the TSR on occurance of '@' charact...
Program to interchange the Small and Captial Letters on the screen after every 5th second and Unloa...
Program to keep the Caps Lock On
Program to repeat every Key Press event three times
Program to make Ctrl and Alt Key Pressed on a Key Press from Keyboard
Program to Activate and Deactivate a TSR that interchange the Small and Capital Letters after every...
Program to interchange the Small and Capital Letters and Unload the TSR on '@' Key Press from Keybo...
Program to interchange the Small and Capital Letters and Unload the TSR after 10 seconds using Time...
Program to interchange the Small and Captial Letters on the screen after every 5th second
///::~


List of the latest update c programs
https://www.includehelp.com/latest-c-programs.aspx
https://www.includehelp.com/c-programming-examples-solved-c-programs.aspx
=========================================================================
C program to generate random numbers within a range. - September 16, 2019
C program to compare strings using strcmp() function. - April 11, 2019
Interchange the two adjacent nodes in a given circular linked list | C program. - January 31, 2019
Find the largest element in a doubly linked list | C program. - January 31, 2019
Convert a given singly linked list to a circular list | C program. - January 30, 2019
Implement Circular Doubly Linked List | C program. - January 30, 2019
Print the Alternate Nodes in a Linked List without using Recursion. - January 29, 2019
Print the Alternate Nodes in a Linked List using Recursion. - January 29, 2019
Find the length of a linked list without using recursion. - January 24, 2019
Find the length of a linked list using recursion. - January 24, 2019
Count the number of occurrences of an element in a linked list without using recursion. - January 11, 2019
Count the number of occurrences of an element in a linked list using recursion. - January 11, 2019
C program to convert a Binary Tree into a Singly Linked List by Traversing Level by Level. - January 07, 2019
C program to Check if nth Bit in a 32-bit Integer is set or not. - January 06, 2019
C program to swap two Integers using Bitwise Operators. - January 06, 2019
C program to replace bit in an integer at a specified position from another integer. - December 30, 2018
C program to find odd or even number using bitmasking. - December 30, 2018
C program to check whether a given number is palindrome or not using Bitwise Operator. - December 26, 2018
C program to count number of bits set to 1 in an Integer. - December 25, 2018
C program to check if all the bits of a given integer is one (1). - December 25, 2018
C program to find the Highest Bit Set for any given Integer. - December 21, 2018
C program to Count the Number of Trailing Zeroes in an Integer. - December 21, 2018
C Program to find the Biggest Number in an Array of Numbers using Recursion. - December 13, 2018
C program to accept Sorted Array and do Search using Binary Search. - December 12, 2018
C Program to Cyclically Permute the Elements of an Array. - December 12, 2018
C program to find two smallest elements in a one dimensional array. - December 10, 2018
Write your own memset() function in C. - December 07, 2018
memset() function in C with Example. - December 07, 2018
Write your own memcpy() function in C. - December 06, 2018
memcpy() function in C with Example. - December 06, 2018
C program to find second smallest element in a one dimensional array. - December 05, 2018
C program to find two largest elements in a one dimensional array. - December 05, 2018
C program to find second largest elements in a one dimensional array. - December 04, 2018
C program to create a new array from a given array with the elements divisible by a specific number. - December 04, 2018
C program to count total number of elements divisible by a specific number in an array. - December 04, 2018
Define a Macro to round a float value to nearest integer in C. - November 26, 2018
Modify value stored in other variable using pointer in C. - November 14, 2018
Making a valid pointer as NULL pointer in C. - November 14, 2018
An Example of Null pointer in C. - November 14, 2018
Creating string buffer (character pointer), allocating memory at run time in C. - September 26, 2018
C program to solve Polynomial and Differential Equations. - July 31, 2018
C program to demonstrate zombie process. - July 26, 2018
C program to demonstrate orphan process. - July 26, 2018
Check EVEN or ODD using Macro in C language. - May 22, 2018
C program to read enter key, How to identify ENTER KEY is pressed in c programming language? - May 05, 2018
‘unsigned char’ - Declaration, Assign and Usage in C programming. - May 05, 2018
va_start() and va_end() functions of stdarg.h in C. - April 20, 2018
longjmp() function of setjmp.h in C. - April 20, 2018
localeconv() function of locale.h in C. - April 20, 2018
C program to create dynamic memory for integer, character and float. - April 14, 2018
C program to swap first element with last, second to second last and so on (reversing elements). - April 14, 2018
C program to find nearest lesser and greater element in an array. - April 14, 2018
C program to merge two arrays in third array which is creating dynamically. - April 14, 2018
C program to calculate median of an array. - April 13, 2018
C program to read time in string format and extract hours, minutes and second also check time validity. - April 10, 2018
C program to swap adjacent characters of a string. - April 05, 2018
C program to eliminate all vowels from a string. - April 05, 2018
C program to remove alphabets from an alphanumeric string. - April 05, 2018
C program to convert a string to sentence case. - April 05, 2018
C program to remove all spaces from a given string. - April 05, 2018
C program to check given number is divisible by A and B. - March 27, 2018
In this C program, we will read name and marital status of a girl and print her name Miss or Mrs based on given marital status. - March 27, 2018
C program to swap two string using user define function. - March 26, 2018
C program to pass an array of structures to a user define function. - March 22, 2018
C program to pass a structure to a user define function. - March 22, 2018
C program to pass two dimensional array (Two-D array) to a function. - March 22, 2018
C program to pass function as an argument to a function. - March 22, 2018
C program to pass multiple type of arguments to a function. - March 22, 2018
C program to pass an array of strings to a function. - March 20, 2018
C program to pass a string to a function. - March 20, 2018
C program to swap elements of two integer arrays using user define function. - March 20, 2018
C program to find sum of the array elements (pass an integer array to a function and return the sum). - March 20, 2018
C program to pass a one dimensional (1D) array to a function. - March 20, 2018
C program for sin(x) series. - March 19, 2018
C program to find the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!. - March 18, 2018
C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2). - March 18, 2018
C program to find the sum of series x + x/2! + x/4! + ... + x/n!. - March 18, 2018
C program to copy one string to another and count copied characters. - March 14, 2018
C program to create array with reverse elements of one dimensional array. - March 10, 2018
C program to delete prime numbers from an array. - March 09, 2018
C program to check prime numbers in an array. - March 09, 2018
Solution of Warning implicit declaration of function 'getpid' in C. - March 08, 2018
C program to print program’s name. - March 07, 2018
How to save C program's Output in a file in Linux? - March 07, 2018
Compiling C program with pthread.h library in Linux. - March 06, 2018
C program to read the yearly salary of an employee and find tax based on the given conditions. - March 06, 2018
C program to calculate the sum of the series 1^3 -2^3 + 3^3 - 4^3 + ... N^3. - March 06, 2018
How to initialize array elements with hexadecimal values in C? - March 05, 2018
C program to calculate the sum of series 1 +1/x^1 + 1/x^2 + 1/x^3 ... + 1/x^n terms. - March 04, 2018
C program to calculate sum of the series 1+11+111+1111+... N terms. - March 04, 2018
C program to print diamond pattern. - March 02, 2018
C program to find multiplication of two matrices. - February 28, 2018
C programs to display Pattern according to number of rows (3). - February 27, 2018
C programs to display Pattern according to number of rows (2). - February 27, 2018
C Example to subtract two integers without using Minus (-) operator. - February 25, 2018
C Example to use 'kbhit' function. - February 25, 2018
C Example for different floating point values prediction. - February 25, 2018
C Example for nested 'printf'. - February 25, 2018
C programs to display Pattern according to number of rows. - February 18, 2018
C program to print 'Rhombus' pattern. - February 16, 2018
C program for printing 'Square' pattern. - February 16, 2018
C program for 'Reverse Full Pyramid' Pattern. - February 16, 2018
C program for 'Reverse Half Pyramid' Pattern. - February 16, 2018
C program for 'Hollow Square' Pattern. - February 16, 2018
C program for printing 'Rectangle' Pattern. - February 16, 2018
C program for ‘Hollow Rectangle’ Pattern - February 14, 2018
C program for 'Full Pyramid' Pattern. - February 14, 2018
C program for ‘Half Pyramid’ Pattern. - February 14, 2018
C program to merge two sorted arrays. - January 18, 2018
C program for radix sort. - January 18, 2018
C program for heap sort. - January 18, 2018
Program for insertion and deletion in heap. - January 03, 2018
Insertion in AVL Tree using C program. - January 01, 2018
Insertion, Deletion and Traversal in Binary Search Tree. - December 24, 2017
C program to implement priority queue. - December 21, 2017
C program to implement double stack. - December 21, 2017
C program to implement circular queue using array. - December 21, 2017
Reverse a string using stack. - December 19, 2017
Implementation of Deque using Array. - December 19, 2017
Sparse matrix for 3-tuple method using Array. - December 19, 2017
C program to print ASCII values of all digits using goto statement. - November 19, 2017
C program to print ASCII values of all lowercase alphabets using goto statement. - November 19, 2017
C program to print ASCII values of all uppercase alphabets using goto statement. - November 19, 2017
C program to print 1, 11, 31, 61, ... 10 times using goto statement. - November 09, 2017
C program to print square and cube of all numbers from 1 to N using goto statement. - November 09, 2017
C program to read a name and print its 10 times using goto statement. - November 07, 2017
C program to print table of a given number using goto statement. - November 07, 2017
C program to print table of 2 using goto statement. - November 07, 2017
C program to print all numbers from N to 1 using goto statement. - November 07, 2017
C program to print all numbers from 1 to N using goto statement. - November 07, 2017
C program to print ASCII value of a character. - November 07, 2017
C program to find subtraction of two integer number. - November 07, 2017
C program to read n strings and print each string's length. - October 24, 2017
Convert String to Integer in C programming language. - May 27, 2016

Home » C programs
Advance C programs - Solved C language programming examples
https://www.includehelp.com/c-programs/advacnce-c-examples.aspx
===============================================================
This section contains solved advance C language programming examples with output and explanation. Before learning these programs please visit basic c categories programs on related topic. These programs contain tricks and advance logics, hope these programs will help you to increase capabilities of solving problems.

List of Advance C programs - Solved C Language Programming Examples
-------------------------------------------------------------------
 40. C program to solve Polynomial and Differential Equations.
     In this program, we will learn how to solve polynomial and differential equations using C programming language?
 39. C program to demonstrate zombie process.
     C program for zombie process: In this post, we are going to implement program for zombie process.
 38. C program to demonstrate orphan process.
     C program for orphan process: In this post, we are going to implement program for orphan process.
 37. C program to declare memory for an integer variable dynamically.
     Dynamic Memory Allocation Example: In this C program, we are will declare an integer pointer and allocate memory for an integer variable at run time using malloc().
 36. C program to read and print name, where memory for variable should be declared at run time.
     Dynamic Memory Allocation Example: In this C program, we will declare memory character array (to read name) at run time, will read name and print the string.
 35. C program to find sum of array elements using Dynamic Memory Allocation.
     Dynamic Memory Allocation Example: In this C program, we will declare memory for array elements (limit will be at run time) using malloc(), read element and print the sum of all elements along with the entered elements.
 34. C Program to find the sum of digits of a number until a single digit is occurred.
     C Program to find the sum of digits of a number until a single digit is occurred (without using recursion or iterative(loop) statements).
 33. C program to find class of an IP Address.
     This program will print the class of a given (user input) IP address.
 32. Stringizing Operator in C - Program to print variable name in C.
     This program will print the variable name using stringizing operator.
 31. Function Pointer example program in C programming.
     This program demonstrate an example of function pointer in c programming language.
 30. C program to get current System Date and Time in Linux.
 29. C program to implement gotoxy(),clrscr(),getch(),getche() for GCC, Linux.
 28. C program to find the size of a file in Linux.
 27. C program to get Process Id and Parent Process Id in Linux.
 26. fork() function explanation and examples in Linux C.
 25. C program to Get Computer System IP Address in Linux.
 24. C program to Set Computer System IP Address in Linux.
 23. C program to design flying characters Screen Saver.
 22. C program to design a TIC TAC TOE game.
 21. Age Calculator (C program to calculate age).
 20. C program to design love calculator.
 19. C program to guess a random number.
 18. C program to check given string is a valid IPv4 address or not.
 17. C program to convert String into Hexadecimal.
 16. C program to demonstrate example of Variable Arguments.
 15. C program to store time in an integer variable.
 14. C program to store date in an integer variable.
 13. C program to remove consecutive repeated characters from string.
 12. C program to create your own header file.
 11. EMI Calculator (C program to calculate EMI).
 10. C program to validate date (Check date is valid or not).
  9. C program to format/extract ip address octets.
  8. C program to implement substring function.
  7. C program to design a digital clock.
  6. C program to convert hexadecimal Byte to integer.
  5. C program to extract bytes from an integer (Hexadecimal) value.
  4. C program to print character without using format specifiers.
  3. C program to find Binary Addition and Binary Subtraction.
  2. C program to print weekday of given date.
  1. C program to calculate compound interest.
///::~

/*
File name: main.cpp
Compile: $ g++ -o main *.cpp
Run: $ main
Output: Hello World
*/

#include <iostream>

using namespace std;

int main()
{
   cout << "Hello World" << endl; 
   
   return 0;
}
/*
Output:
    Hello World
*/

int main() {
  cout << "Hello World";
  return 0;
}

C++ Programming Examples
========================
https://codescracker.com/cpp/program/cpp-program-print-hello-world.htm

C++ Programming Examples
------------------------
C++ Print Hello World
C++ Get Input from User
C++ Print Integer
C++ Add two Numbers
C++ Check Even or Odd
C++ Check Prime or Not
C++ Check Alphabet or Not
C++ Check Vowel or Not
C++ Check Leap Year or Not
C++ Check Reverse equal Original
C++ Add Subtract Multiply & Divide
C++ Make Calculator
C++ Add Digits of Number
C++ Calculate Average & Percentage
C++ Calculate Arithmetic Mean
C++ Calculate Student Grade
C++ Print Table of Number
C++ Print Prime Numbers
C++ Add n Numbers
C++ Interchange Numbers
C++ Reverse Numbers
C++ Swap two Numbers
C++ Count Positive Negative & Zero
C++ Find Largest of two Numbers
C++ Find Largest of three Numbers
C++ Find Factorial of Number
C++ Find HCF & LCM
C++ Calculate Area & Perimeter
C++ Calculate Area & Circumference
C++ Convert Fahrenheit to Centigrade
C++ Convert Centigrade to Fahrenheit
C++ Print ASCII Values
C++ Print Fibonacci Series
C++ Check Palindrome or Not
C++ Check Armstrong or Not
C++ Generate Armstrong Numbers
C++ Find ncR nPr
C++ Convert Decimal to Binary
C++ Convert Decimal to Octal
C++ Convert Decimal to Hexadecimal
C++ Convert Binary to Decimal
C++ Convert Binary to Octal
C++ Convert Binary to Hexadecimal
C++ Convert Octal to Decimal
C++ Convert Octal to Binary
C++ Convert Octal to Hexadecimal
C++ Convert Hexadecimal to Decimal
C++ Convert Hexadecimal to Binary
C++ Convert Hexadecimal to Octal
C++ Pattern Programs
C++ Print Diamond Pattern
C++ Print Floyd Triangle
C++ Print Pascal Triangle
C++ Print Smiling Face
C++ One Dimensional Array Program
C++ Linear Search
C++ Binary Search
C++ Add Two Numbers using Pointer
C++ Find Largest Element in Array
C++ Find Smallest Element in Array
C++ Reverse Array
C++ Insert Element in Array
C++ Delete Element from Array
C++ Merge two Array
C++ Bubble Sort
C++ Selection Sort
C++ Insertion Sort
C++ Two Dimensional Array Program
C++ Add two Matrices
C++ Subtract Matrices
C++ Transpose Matrix
C++ Multiply two Matrices
C++ Three Dimension Array Program
C++ Print String
C++ Find Length of String
C++ Compare two String
C++ Copy String
C++ Concatenate String
C++ Reverse String
C++ Delete Vowels from String
C++ Delete Words from Sentence
C++ Count Character in String
C++ Count Word in Sentence
C++ Remove Spaces from String
C++ Sort a String
C++ Convert Uppercase to Lowercase
C++ Convert Lowercase to Uppercase
C++ Swap two Strings
C++ Check Anagram or Not
C++ Generate Random Numbers
C++ Read File
C++ Write to File
C++ Read & Display File
C++ Copy File
C++ Merge two File
C++ List Files in Directory
C++ Delete File
C++ Encrypt & Decrypt Files
C++ Print Date
C++ Get IP Address
C++ Shutdown & Restart Computer
C++ Programming Tutorial
C++ Tutorial
C++ Programming Test
C++ Programming Test
Give Online Test
///::~


C Tutorial – Learn C Programming with examples
BY CHAITANYA SINGH | FILED UNDER: C-PROGRAMMING
https://beginnersbook.com/2014/01/c-tutorial-for-beginners-with-examples/
==========================================================================
Learning C programming is easy if you follow the tutorials in the given order and practice C programs along the way. This C tutorial is designed for beginners so you won’t face any difficulty even if you have no prior knowledge in C language.

C Tutorial
==========
Learn and practice these tutorials in the given order.

Learn C Basics First
====================
Turbo C++ installation: compile and run first C program – Installation guide for turbo C++. Also, refer this for getting to know the compilation and execution steps of a C program.
First C Program – What all basic components work together to make a complete program. Learn little basics of C building blocks.
Keywords in C – List of reserved words and their purpose for C language.

Decision Control Statements in C
================================
If statement – Basic usage, flow and examples of if statements.
If-else statement – Use of If-else in a program. Flow diagram and examples.
Switch-case – How to use switch-case statements in C and what’s the role of break while using this control structure.

Loops in C
==========
For loop – Examples, flow diagrams and use of for loop in C.
while loop – A guide on While loop usage with flow diagrams and examples.
dowhile loop – All about do-while loop along with differences between while and dowhile.

C – Loop control statements
===========================
Break statement – How and where to use break statement in a C program.
Continue statement – Its syntax, usage along with few C example programs.
Goto statement – How to use goto in a program and why it should be avoided while developing an application in C.

Array Tutorials in C
====================
Arrays – Array basics.
2D array – How to implement and use a 2D array in program.
Pointer to Array
Passing array to function – Learn passing of an array to a function as an argument.

C – Strings
===========
Strings and String functions – All about string and string functions. A complete guide.

Functions in C
==============
C functions – What’s the use of functions and how to implement them in a program.
Function Call by value method – In the call by value method the actual arguments are copied to the formal arguments, hence any operation performed by function on arguments doesn’t affect actual parameters.
Function Call by Reference method – Unlike call by value, in this method, address of actual arguments (or parameters) is passed to the formal parameters, which means any operation performed on formal parameters affects the value of actual parameters.

Structure
=========
Structures in C – Complete guide for structures in C

Pointer in C Programming
========================
C Pointers – What are pointers and how to use them.
Pointer to pointer – Tutorial on pointer to pointer (Double pointer).
Function Pointers – All about function pointers
Passing pointer to functions – Learn how to pass a pointer to a function.

File I/O
========
File I/O – Learn how to perform Input/Output operations on files in C. Also, get to know the handling of text/binary files in a program.

Operator Precedence table
=========================
Operator Precedence –  Includes various types of operators in C.

C Examples
==========
C examples

C Tutorials on Library functions
================================
strcat() | strncat() | strchr() | strcmp() | strncmp() | strcoll() | strcpy() | strncpy() | strrchr() | strspn() | strstr() | strcspn() | strlen()

=C Programming
==============
     View All
     Homework Help
     Data File Structure
     Projects
     Beginners
     BIOS Programming
     TSR Programming
     Interrupt Programming
     Mouse Programming
     Keyboard Programming
     Parallel Port Programm...
     Parallel Processing Pr...
     Computer Graphics
     Mathematics Program
     Numerical Methods
     Interview FAQ
///::~


C++ Tutorial – Learn C++ Programming with examples
BY CHAITANYA SINGH | FILED UNDER: LEARN C++
https://beginnersbook.com/2017/08/c-plus-plus-tutorial-for-beginners/
=====================================================================
C++ language is a direct descendant of C programming language with additional features such as type checking, object oriented programming, exception handling etc. You can call it a “better C”. It was developed by Bjarne Stroustrup.
C++ is a general purpose language language, when I say general purpose it simply means that it is designed to be used for developing applications in a wide variety of domains.

C++ Tutorial
============
To learn C++ programming, refer these tutorials in the given order. These tutorials are written for beginners so even if you have no prior knowledge in C++, you won’t face any difficulty understanding these tutorials.

Basics
======
1. First C++ Program – Hello World!
2. Variables and their types
3. Data types
4. Operators in C++

Control Statements
==================
5. If, if..else-if statement
6. Switch Case in C++
7. For loop
8. while loop
9. do while loop
10. Continue statement
11. Break statement
12. goto statement

Functions
=========
13. Functions in C++
14. Default arguments in Functions
15. C++ Recursion

Arrays
======
16. Arrays
17. Multidimensional arrays
18. Passing Array to function
19. C++ Strings

Pointers
========
20. Pointers in C++
21. this Pointer

OOPs
====
22. OOPs Concepts
23. Constructor
24. Destructor
25. Structure
26. How to pass and return struct from function
27. Enumeration
28. Inheritance
29. Polymorphism
30. Function Overloading
31. Function Overriding
32. Virtual Function: Run time Polymorphism
33. Encapsulation
34. Abstraction
35. Interfaces – Abstract class
36. Pass and return object from function
37. Friend class and friend Function

Features of C++
===============
1) Better memory management – you can dynamically allocate memory during runtime using new and delete operator in C++ to have better memory management.

2) Object oriented – C++ supports object oriented programming features, which means we can use the popular OOPs concepts such as Abstraction, Inheritance, Encapsulation and Inheritance in C++ programs, these features make writing code in C++ a lot easier. We will cover them in detail in this tutorial series.

3) Portable – Most of C++ compilers supports ANSI standards that makes C++ portable because the code you write on one operating system can be run on other Operating system without making any change. We cannot say C++ a fully platform independent language as certain things in C++ are not portable, such as drawing graphics on a screen, since standard C++ has no graphics or GUI API.

4) Structured programming language – We have functions in C++, which makes easier to break a problem into small blocks of code and structure the program in such a way so that it improves readability and reusability.

5) Exception handling: Just like Java we can do exception handling in C++ which makes it easier to identify and handle the exceptions.

6) Simple – Last but not least, just like C, it is easier to write a program in C++. Once you get familiar with the syntax of C++ programming language, it becomes a lot easier to code in C++.
///::~

/*
File name: HelloWorld.java
Complile:  $ javac HelloWorld.java
Interpret: $ java  -Xmx128M  -Xms16M HelloWorld
Execute:   $ ./HelloWorld<Press Enter>
*/
public class HelloWorld{

     public static void main(String []args){
        System.out.println("Hello World");
     }
}
/*
Output:
    Hello World
*/
///::~


Other Tutorials
===============
  Java Tutorial
  Java Collections
  Java I/O Tutorial
  C Tutorial
  C++ Tutorial
  Kotlin Tutorial
  MongoDB Tutorial
  Python Tutorial
  Perl Tutorial
  XML Tutorial
  DBMS Tutorial
  JSON Tutorial
  Servlet Tutorial
  JSP Tutorial
  JSTL Tutorial

Recently Added..
================
  JSON Tutorial
  Java Regular Expressions Tutorial
  Java Enum Tutorial
  Java Annotations Tutorial


Java tutorial: Learn Java Programming with examples
---------------------------------------------------
This tutorial would help you learn Java like a pro. I have shared 500+ tutorials on various topics of Java including tutorials on core java and advanced Java concepts and Java programming examples. This core Java Tutorial contains the links of all the tutorials in a systematic order starting from beginner’s level to the advanced topics. Whether you are a college student looking for learn Java programming or a company employee learning advanced Java topics for building an application in Java, this Java tutorial would definitely be useful for you. Let’s start learning.

Java Tutorial
-------------
To learn Java programming, refer these tutorials in the given order. These tutorials are written for beginners so even if you have no prior knowledge in Java, you won’t face any difficulty understanding these tutorials(this page includes core Java tutorial and advanced Java tutorial).

Tutorials on Java basics
------------------------
Start from here. An introduction to java and java basics with examples.
1. Introduction to Java
2. Java Virtual Machine(JVM) Basics
3. First Java Program
4. Variables in Java
5. Java Data Types
6. Java Operators
7. If-else in Java
8. Switch-Case in Java
9. Java For loop
10. Java While loop
11. do-while loop in Java
12. Java Continue statement
13. Java Break statement

Java OOPs tutorial
------------------
14. Constructor in Java
15. Static keyword in Java
16. Java Inheritance with example
17. Types of inheritance in Java
18. Aggregation in Java
19. Association in Java
20. Super Keyword in Java
21. Method overloading in Java
22. Method overriding in Java
23. Java – Method Overloading vs Method Overriding
24. Polymorphism in Java
25. Types of polymorphism in Java
26. Static and dynamic binding
27. Abstract class in Java
28. Java Abstract method with example
29. Interface in Java
30. Java – Abstract class vs interface
31. Java Encapsulation with example
32. Java Packages with examples
33. Access modifiers in Java
33. Garbage Collection in Java
34. final keyword

Java Exception Handling Tutorial
--------------------------------
35. Java Exception handling
36. Java try-catch block
37. Java finally block
38. How to throw exception in Java
39. Custom Exception in Java
40. Exception Examples

Java Collections Tutorial
-------------------------
41. Java ArrayList
42. Java LinkedList
43. Vector in Java
44. HashMap in Java
45. Java TreeMap
46. Java LinkedHashMap
47. Java HashSet
48. TreeSet in Java
49. LinkedHashSet
50. Hashtable in Java
51. Queue
52. PriorityQueue
53. Deque & ArrayDeque
54. Comparable Interface
55. Comparator Interface

Java Tutorial on Annotation, Enum and Regex
-------------------------------------------
56. Java Enum
57. Java Annotations
58. Java Regex

Miscellaneous Core Java tutorial
--------------------------------
59. String in Java
60. Java Multithreading
61. Java Serialization
62. Java AWT Tutorial
63. Java Swing Tutorial
64. Java autoboxing and unboxing
65. Wrapper Class in Java

Java 8 Tutorial
---------------
There are several new features introduced in Java 8. I have covered all the Java 8 Features in the separate tutorials, here are the links:
66. Java Lambda Expressions
67. Java Method References
68. Java Functional Interfaces
69. Java Stream Tutorial
70. Java Stream Filter Tutorial
71. Java Interface changes – introduction of default and static methods
72. Java forEach
73. Java Stream Collectors class
74. Java StringJoiner class
75. Java Optional class
76. Java Arrays Parallel Sort

Java 9 Features
---------------
Here are the tutorials on Java 9 features –
77. Java 9 – REPL (JShell)
78. Factory methods to create immutable List, Set and Map
79. Introduction of Private methods in interfaces
80. Try with resources enhancements
81. Anonymous inner class and diamond operator
82. @SafeVarargs Annotation (with examples)
83. Java 9 – Stream API Enhancements (With Examples)
83. Java 9 Modules

Java Input/Output Tutorials
---------------------------
84. Create a file in java
85. Read a file in java
86. Write a file
87. Append to a file in java
88. How to delete file in Java
89. How to compress a File in GZip format
90. How to Copy a File to another File in Java
91. How to get the last modified date of a file in java
92. How to make a File Read Only in Java
93. How to check if a File is hidden

For more Java I/O tutorials, refer this: Java I/O
-------------------------------------------------

Java Programs
-------------
I have shared 50+ programs of Java programming language, links for some of the programs are shared below. These programs are especially shared for beginners.

To get the complete list of java programs, refer: Java Examples.
----------------------------------------------------------------
94. Java program to Display Fibonacci Series
95. Java program to Find Factorial
96. Java program to swap two numbers using bitwise operator
97. Java program to find largest of three numbers using ternary operator
98. Java program to check leap year
99. Java Program to Reverse an input number
100. Java Program to Calculate area of circle
101. Java Program to Calculate area of triangle
102. Java Program to Find sum of array elements
103. Program to Check for prime number
104. Program to Check whether number is even or odd in Java
105. Java Linear Search Program
106. Java Binary Search Program
107. Program to Generate random number in Java
108. Java program for Binary to decimal conversion
109. Java Program Get input from user
///::~

Java Programs – Java Programming Examples with Output
BY CHAITANYA SINGH | FILED UNDER: JAVA EXAMPLES
https://beginnersbook.com/2017/09/java-examples/
=======================================================
To understand a programming language you must practice the programs, this way you can learn the language faster. This page includes java programs on various java topics such as control statements, loops, classes & objects, functions, arrays etc. All the programs are tested and provided with the output. If you new to java and want to learn java before trying out these program, then read my Core Java Tutorials.

[ Java Programs ]

JAVA BASIC PROGRAMS
===================
Java Program to Add two Numbers
Java Program to Check Even or Odd Number
Java Program to add two binary numbers
Java Program to add two complex numbers
Java Program to Multiply two Numbers
Java Program to check Leap Year
Java Program to check whether input character is vowel or consonant
Java Program to calculate compound interest
Java Program to calculate simple interest
Java Program to find quotient and remainder
Java Program to calculate power of a number

JAVA STRINGS PROGRAMS
=====================
Java Program to Convert char to String and String to Char
Java Program to find duplicate characters in a String
Java Program to check Palindrome String using Stack, Queue, For and While loop
Java Program to sort strings in alphabetical order
Java Program to reverse words in a String
Java Program to perform bubble sort on Strings
Java program to find occurrence of a character in a String
Java program to count vowels and consonants in a String

JAVA ARRAYS PROGRAMS
====================
Java Program to Calculate average of numbers using Array
Java Program to Add the elements of an Array
Java Program to reverse an array
Java Program to sort an array in ascending order
Java Program to convert char Array to String
Java Program to Add Two Matrix Using Multi-dimensional Arrays

JAVA RECURSION PROGRAMS
=======================
Java Program to Reverse a number using for, while loop and recursion
Java Program to check Palindrome string using Recursion
Java Program to Reverse a String using Recursion
Java Program to find Factorial of a number using Recursion

JAVA PROGRAMS ON NUMBERS
========================
Java Program to display first 100 prime numbers
Java Program to display prime numbers between 1 and 100 or 1 and n
Java program to break integer into digits
Java Program to check Prime Number
Java Program to check if a given number is perfect square
Java Program to find square root of a number without sqrt method
Java Program to print Armstrong numbers between a given range
Java Program to Find Sum of Natural Numbers
Java Program to check if a number is Positive or Negative
Java Program to generate Random Number
Java Program to check Armstrong number
Java Program to find GCD of two numbers
Java Program to find Largest of three numbers
Java Program to swap two numbers using bitwise operator
Java Program to find smallest of three numbers using ternary operator
Java Program to find largest of three numbers using ternary operator
Java Program to display alternate prime numbers
Java Program to display even numbers from 1 to n or 1 to 100
Java Program to display odd numbers from 1 to n or 1 to 100

JAVA INPUT/OUTPUT PROGRAMS
==========================
Java Program to read number from Standard Input
Java Program to Get IP Address
Java Program to get Input From User

JAVA PROGRAMS ON GEOMETRICAL CALCULATIONS
=========================================
Java Program to Calculate Area of Rectangle
Java Program to Calculate Area of Square
Java Program to Calculate the area of Triangle
Java Program to Calculate Area and Circumference of Circle

JAVA SORTING/SEARCHING PROGRAMS
===============================
Java Program for bubble Sort Ascending or Descending Order
Java Program for Linear Search
Java Program for Binary Search
Java Program for Selection Sorting

JAVA CONVERSION PROGRAMS
========================
Java Octal to Decimal conversion
Java Program to Convert Decimal to Octal
Java hexadecimal to decimal conversion
Java Program to convert decimal to hexadecimal
Java binary to octal conversion
Java String to boolean
Java program to convert boolean to String
Java int to char conversion
Java char to int conversion
Java char to string conversion
Java long to int conversion
Java int to long conversion
Java Program to Convert Decimal to Binary
Java Program to convert binary to Decimal
Java Program to find ASCII value of a character
Java program for String to int conversion
Java program to convert int to String
Java program for string to double conversion
Java program to convert double to String
Java program to convert String to long
Java program to convert long to String

OTHER JAVA PROGRAMS
===================
Java Program to print Floyd’s triangle
Java program to print Pascal triangle
Java Program to display Fibonacci series using loops
Java Program to find Factorial using loops
Java Program to make a calculator using switch case
Java Program to Calculate grades of Student
Java Program to perform Arithmetic Operation using Method Overloading
Java Program to find Area of Geometric figures using method overloading
///::~  


Home » C programs » Advance C programs
--------------------------------------
https://www.includehelp.com/c-programs/gotoxy-clrscr-getch-getche-for-gcc-linux.aspx
====================================================================================
gotoxy(), clrscr(), getch() and getche() functions for GCC Linux.
=================================================================

gotoxy(), clrscr(), getche() and getch() in GCC Linux:
------------------------------------------------------
In this section you will learn how gotoxy(), getche(), getch() and clrscr() function can be used in GCC Linux. In TurboC compiler you can use that functions by including conio.h header file, but in Linux library these function are not available, so we are providing the function definitions for GCC linux just use them into your program and call where they needed.

gotoxy() for GCC Linux:
-----------------------
gotoxy() move the cursor at specified location in the output screen.

//gotoxy() function definition
void gotoxy(int x,int y)	
{
	printf("%c[%d;%df",0x1B,y,x);
}
            
Consider the example:
---------------------
#include<stdio.h>

//gotoxy() function definition
void gotoxy(int x,int y)	
{
	printf("%c[%d;%df",0x1B,y,x);
}

int main ()
{
	int x=10, y=20;
	gotoxy(x,y); //move cursor position
	printf("Hello World!!!"); //print message
	return 0;
}

    Compile:
    sh-4.3$ gcc -o main *.c

    Run:
    sh-4.3$ ./main


            Hello World!!!
            
clrscr() for GCC Linux:
-----------------------
We can implement clrscr() by using clear command of the linux terminal, It is used to Clear Output Screen.

//clrscr() function definition
void clrscr(void)
{
	system("clear");
}

Consider the example:
---------------------
#include<stdio.h>

//clrscr() function definition
void clrscr(void)
{
	system("clear");
}

int main ()
{
	clrscr();	//clear output screen
	printf("Hello World!!!"); //print message
	return 0;
}
    Compile:
    sh-4.3$ gcc -o main *.c

    Run:
    sh-4.3$ ./main
    Hello World!!! [on cleared screen]
    
getch() and getche() for GCC Linux:
-----------------------------------
getch() function is used to get (read) single character from standard input device (keyboard) without echoing i.e. it does not display the input character & it does not require [return] key after input. getch() is declared in conio.h header file.

getche() function is used to get (read) single character from standard input device (keyboard) with echoing i.e. it displays the input character & it does not require [return] key after input. getche() is declared in conio.h header file.

Consider the example:
---------------------
#include <termios.h>
#include <stdio.h>

static struct termios old, new;

/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); //grab old terminal i/o settings
  new = old; //make new settings same as old settings
  new.c_lflag &= ~ICANON; //disable buffered i/o
  new.c_lflag &= echo ? ECHO : ~ECHO; //set echo mode
  tcsetattr(0, TCSANOW, &new); //apply terminal io settings
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* 
Read 1 character without echo 
getch() function definition.
*/
char getch(void) 
{
  return getch_(0);
}

/* 
Read 1 character with echo 
getche() function definition.
*/
char getche(void) 
{
  return getch_(1);
}

int main(void) {
  char c;
  printf("(getche example) Please enter a character: ");
  c = getche();
  printf("\nYou entered: %c\n", c);
  printf("(getch example) Please enter a character: ");
  c = getch();
  printf("\nYou entered: %c\n", c);
  return 0;
}
Compile:
sh-4.3$ gcc -o main *.c

Run:
sh-4.3$ ./main
(getche example) Please enter a character: X
You entered: X
(getch example) Please enter a character:
You entered: Y
///::~


Data Structure Tutorial, Articles
List of Data Structure programs...
https://www.includehelp.com/c-programming-data-structure-examples.aspx
======================================================================

Data Structure programs using C and C++ (Solved data structure programs)
Data Structure Examples / Programs using C and C++ - This section contains solved programs using C and C++ on Data Structure concepts like Sorting (Bubble Sort, Insertion Sort, Selection Sort), Searching (Linear/sequential Search, Binary Search), Stack Implementation using Array, Linked list, Link List Implementation (Singly, Doubly Linked List), Queue and De-Queue Implementation.

Stack programs
--------------
C program to implement a STACK using array
STACK implementation using with Linked List using C++ program
STACK implementation using Array with PUSH, POP, and TRAVERSE operations using C++ program
STACK implementation using C++ structure with more than one item
STACK implementation using C++ class with PUSH, POP and TRAVERSE operations
C program to reverse a string using stack
Check for balanced parentheses by using Stacks (C++ program)
Implement Stack using Linked List in C++

Linked List programs
--------------------
Linked List implementation using C++ program
C program to display a Linked List in Reverse
C program to Reverse only First N Elements of a Linked List
Merge sort for single linked lists
Delete the middle node of a Linked List in C++
Delete keys in a Linked list using C++ program
Reverse a Linked List in groups of given size using C++ program
Pair wise swap elements in a linked list using C++ program
C++ program to find Union of two single Linked Lists
Find intersection of two linked lists using C++ program
Append Last N Nodes to First in the Linked List
Eliminate duplicates from Linked List using C++ program
Find a Node in Linked List using C++ program
C program to convert a Binary Tree into a Singly Linked List by Traversing Level by Level
Count the number of occurrences of an element in a linked list using recursion
Count the number of occurrences of an element in a linked list without using recursion
Find the length of a linked list using recursion
Find the length of a linked list without using recursion
Print the Alternate Nodes in a Linked List using Recursion
Print the Alternate Nodes in a Linked List without using Recursion
Implement Circular Doubly Linked List | C program
Convert a given singly linked list to a circular list | C program
Find the largest element in a doubly linked list | C program
Interchange the two adjacent nodes in a given circular linked list | C program
Convert a given binary Tree to Doubly Linked List (DLL)
Modify contents of Linked List using C++ program
Delete N nodes after M nodes of a linked list using C++ program
Clone a linked list with next and random pointer using C++ program

Sorting & others
----------------
Bubble Sort | C program to arrange elements in Ascending, Descending Order
Insertion Sort | C program to arrange elements in Ascending, Descending Order
Selection Sort | C program to arrange elements in Ascending, Descending Order
Quick Sort in C++ with Algorithm, Example.
Merge Sort in C++ with Example.
Merge sort for single linked lists
C++ program to find Union of two single Linked Lists using merge sort
C++ program to find intersection of two linked lists using merger sort
Counting Sort with C++ Example.
Implement shell sort using C++ program.
Dijkstra’s Algorithm: Explanation and Implementation with C++ program.
C++ print Postorder traversal from Preorder and Inorder traversal of a tree.
Infix To Postfix Conversion Using Stack [with C program].
Evaluation of Postfix Expressions Using Stack [with C program].
Maximum Sum Helix path (using C++ program).
Tower of Hanoi using recursion (C++ program).
Find in-order Successor and Predecessor in a BST using C++ program.
Implement in-order traversal using C++ program.
Implement post-order traversal using C++ program.
Implement pre-order traversal using C++ program.
C program to implement Insertion Sort Algorithm
C program to implement Recursive Insertion Sort
C program to implement Bubble Sort
C program to implement Optimized Bubble Sort
C program to implement Selection Sort Algorithm
C program to implement Gnome Sorting Algorithm
C program to implement Merge Sort Algorithm
C program to implement Quick Sort Algorithm
C program to implement Heap Sort Algorithm

DS Graph programs
-----------------
Topological sort implementation using C++ program

DS Tree programs
----------------
C++ program to find number of BSTs with N nodes (Catalan numbers)
C++ program to check whether a given Binary Search Tree is balanced or not?
C program to convert a Binary Tree into a Singly Linked List by Traversing Level by Level

Searching
---------
C program to implement Linear/Sequential Searching in Array
C program to implement Binary Searching in Array
C program to implement Interpolation Search Algorithm

Others
------
QUEUE Data Structure Example in C
[program to implement QUEUE using ARRAY].

TOP Interview Coding Problems/Challenges
========================================
Run-length encoding (find/print frequency of letters in a string)
Sort an array of 0's, 1's and 2's in linear time complexity 
Checking Anagrams (check whether two string is anagrams or not)
Relative sorting algorithm
Finding subarray with given sum
Find the level in a binary tree with given sum K
Check whether a Binary Tree is BST (Binary Search Tree) or not
1[0]1 Pattern Count
Capitalize first and last letter of each word in a line
Print vertical sum of a binary tree
Print Boundary Sum of a Binary Tree
Reverse a single linked list
Greedy Strategy to solve major algorithm problems
Job sequencing problem
Root to leaf Path Sum
Exit Point in a Matrix
Find length of loop in a linked list
Toppers of Class
Print All Nodes that don't have Sibling
Transform to Sum Tree
Shortest Source to Destination Path
///::~

// Blinking text in DOS, compiled with Turbo C
// blnkng.c
// tcc blnkng.c

#include <conio.h>

int main()
{
   int color;

   textattr(128 + 10);

   cprintf("This is blinking text\n");

   return 0;
}

========================================================================================
C on Unix Code Examples
https://c.happycodings.com/c-on-unix/
========================================================================================

A message queue program that shows a client server implementation
A Program to utilize message queue for implementing the merge sort(Socket Programming)
Creating menu driven environment in C in Unix
Cryptography in c on linux
Display menu until press 0 by using child process
implementation of LN command using system calls
Implementing cat command using system calls
implementing who am i using system calls
Output of one program is input of another program Using Pipes
Program that shows how fork system call works
Program to catch Ctrl+C.
Program to get the GroupID ( GID ) information
program to implement who command
Program to print its Process ID, Parent Process ID and Group ID
Program to work on Child Processes
Program to work on Semapores
Program with a function display(int) to print the integers
String manipulation using message Queue
This is the sender program using Message Queues
vowels counting using vfork
Write a function called display(char ) that displays a message
Write a program to print stuff to a file reading the number of time

========================================================================================


C++ Programming Examples
https://codescracker.com/cpp/program/cpp-programming-examples.htm
------------------------------------------------------------------
[ C++ Programming ]

C++ Print Hello World
C++ Get Input from User
C++ Print Integer
C++ Add two Numbers
C++ Check Even or Odd
C++ Check Prime or Not
C++ Check Alphabet or Not
C++ Check Vowel or Not
C++ Check Leap Year or Not
C++ Check Reverse equal Original
C++ Add Subtract Multiply & Divide
C++ Make Calculator
C++ Add Digits of Number
C++ Calculate Average & Percentage
C++ Calculate Arithmetic Mean
C++ Calculate Student Grade
C++ Print Table of Number
C++ Print Prime Numbers
C++ Add n Numbers
C++ Interchange Numbers
C++ Reverse Numbers
C++ Swap two Numbers
C++ Count Positive Negative & Zero
C++ Find Largest of two Numbers
C++ Find Largest of three Numbers
C++ Find Factorial of Number
C++ Find HCF & LCM
C++ Calculate Area & Perimeter
C++ Calculate Area & Circumference
C++ Convert Fahrenheit to Centigrade
C++ Convert Centigrade to Fahrenheit
C++ Print ASCII Values
C++ Print Fibonacci Series
C++ Check Palindrome or Not
C++ Check Armstrong or Not
C++ Generate Armstrong Numbers
C++ Find ncR nPr
C++ Convert Decimal to Binary
C++ Convert Decimal to Octal
C++ Convert Decimal to Hexadecimal
C++ Convert Binary to Decimal
C++ Convert Binary to Octal
C++ Convert Binary to Hexadecimal
C++ Convert Octal to Decimal
C++ Convert Octal to Binary
C++ Convert Octal to Hexadecimal
C++ Convert Hexadecimal to Decimal
C++ Convert Hexadecimal to Binary
C++ Convert Hexadecimal to Octal
C++ Pattern Programs
C++ Print Diamond Pattern
C++ Print Floyd Triangle
C++ Print Pascal Triangle
C++ Print Smiling Face
C++ One Dimensional Array Program
C++ Linear Search
C++ Binary Search
C++ Add Two Numbers using Pointer
C++ Find Largest Element in Array
C++ Find Smallest Element in Array
C++ Reverse Array
C++ Insert Element in Array
C++ Delete Element from Array
C++ Merge two Array
C++ Bubble Sort
C++ Selection Sort
C++ Insertion Sort
C++ Two Dimensional Array Program
C++ Add two Matrices
C++ Subtract Matrices
C++ Transpose Matrix
C++ Multiply two Matrices
C++ Three Dimension Array Program
C++ Print String
C++ Find Length of String
C++ Compare two String
C++ Copy String
C++ Concatenate String
C++ Reverse String
C++ Delete Vowels from String
C++ Delete Words from Sentence
C++ Count Character in String
C++ Count Word in Sentence
C++ Remove Spaces from String
C++ Sort a String
C++ Convert Uppercase to Lowercase
C++ Convert Lowercase to Uppercase
C++ Swap two Strings
C++ Check Anagram or Not
C++ Generate Random Numbers
C++ Read File
C++ Write to File
C++ Read & Display File
C++ Copy File
C++ Merge two File
C++ List Files in Directory
C++ Delete File
C++ Encrypt & Decrypt Files
C++ Print Date
C++ Get IP Address
C++ Shutdown & Restart Computer
C++ Programming Tutorial
C++ Tutorial
C++ Programming Test
C++ Programming Test

C/C++ CODES
===========
http://www.firmcodes.com/cc-codes/

 1. How to swap two numbers without using a temporary variable?
 2. Count number of 1s in given binary number
 3. Functions that are executed before and after main() in C
 4. Swap two nibbles in a byte
 5. How to turn off a particular bit in a number?
 6. Check if a number is multiple of 9 using bitwise operators
 7. How to write a running C code without main()?
 8. How to pass a 2D array as a parameter in C?
 9. Print a long int in C using putchar() only
10. How to dynamically allocate a 2D array in C ?
11. Find position of the only set bit
12. Write your own strcmp
13. Binary representation of a given number
14. Add two numbers without using arithmetic operators
15. Smallest of three integers without comparison operators
16. Simulation of Ethernet in C++
17. Program to create Inverted triangle shape in c++ code
18. Write a C++ program to Make a Calculator
19. TIC-TAC-TOE C++
20. Drawing house line by line in C++ Programming using Graphics.h
21. Computer program to draw Luddo Board in C++ Programming using Graphics.h
22. What is the best way in C to convert a number to a string?
23. Print “Even” or “Odd” without using conditional statement
24. Interesting Facts about Macros and Preprocessors in C/C++
25. C/C++ program to shutdown or turn off computer
26. C program to determine which mouse button is clicked
27. Using assert in c ( Exception handling in c )
28. Why people don’t like Programming
29. Memory Layout of C Program
30. Function Pointers in C/C++
31. Find middle number out of three numbers
32. Write a C program to reverse the string without using strrev() ?
33. Write a C program to reverse the words in a sentence in place
34. Write a C program to calculate power(x,n)
35. Write a c program to find fibonacci series
36. Write a C program which does wildcard pattern matching algorithm
37. Write a c Program to convert Decimal to Hexadecimal number
38. Write C code to dynamically allocate one, two and three dimensional arrays (using malloc())
39. Difference between typedef and #define
40. Difference between macro and inline in c
41. Write your own trim() or squeeze() function to remove the spaces from a string
42. Write your own C program to implement the atoi() function
43. Write your own printf() function in c
44. Convert decimal number into hexadecimal octal binary – single universal logic
45. Write a Macro’s Set,clear and toggle n’th bit using bit wise operators?
46. Write a C program to convert Little endian to Big endian integer
47. Write a program to implement XOR functionality with out using XOR(^) operator
48. How can I write a function that takes a variable number of arguments? What are the limitations with this? What is vprintf()?
49. How can I convert numbers to strings (itoa() function)?
50. How to do AES-128 bit CBC mode encryption in c programming code with OpenSSL
51. How to do Triple-DES CBC mode encryption example in c programming with OpenSSL
52. What’s the use of fopen(), fclose(), fprintf(), fscanf(), feof(), fseek(), rewind(), fread(), fwrite(), fgets(), fputs() ?
53. Sorting Algorithms in C
54. What are practical uses of function pointers in c ?
55. Write a C program to increment number without using + sign
56. Write down the program to tell whether the stack is growing in which direction in memory
57. Write a program to reverse a string using stack in c++
58. Write a program to reverse a linked list using stack in c++
59. Write a program to check for balanced parentheses in an expression in c++
60. C program for binary search
61. Write a c program to implement a queue using array and linked list
62. Write a c program to implement a stack using an array and linked list
63. C Program to Print all the Repeated Numbers with Frequency in Array
64. C program to find the middle node of a linked list
65. Write C code to implement the strstr() function to search for a substring
66. Delete node in linked list without head pointer and traversing
67. C program to sorting a singly linked list
68. Difference between const char *p, char const *p and char *const p
69. Volatile keyword in c language and embedded system
70. C Program to convert Binary number to Decimal
71. C Program to Display its own Source Code as its Output
72. structure padding and packing in c example
73. C Program to find whether a number is even or add without using arithmetic operators
74. Floating Point Representation in Memory.
75. Features of Modern C++



~:: Complete Programming Examples ::~

01. Area of a Circle
02. Lowercase to Uppercase CharacterConversion
03. Lowercase to Uppercase Text Conversion
04. Reading and Writing a Line of Text
05. Averageing Student Exam Scores
06. Compound Interest Calculations
07. Syntactic Errors
08. Execution Errors
09. Debugging a Program
10. Debugging with an Interactive Debugger
11. Generating Consecutive Integer Quantities
12. Averaging a list of Numbers
13. Repeated Averaging of a List of Numbers
14. Converting Several Lines of Text to Uppercase
15. Encoding a String of Characters
16. Repeated Compound Interest Calculations with Error Trapping
17. Solution of an Algebraic Equation
18. Calculating Depreciation
19. Searching for Palindromes
20. Largest of Three Integer Quantities
21. Calculating Factorials
22. Simulation of a Game of Chance(Sooting Craps)
23. Printing Backwords
24. The Tower of Hanoi
25. Average Length of Several Lines of Text
26. Search for a Maximum
27. Generating Fibonacci Numbers
28. Deviations About an Average
29. Reordering a List of Numbers
30. A Piglatin Generator
31. Adding Two Tables of Numbers
32. Reordering a List of Strings
33. Analyzing a Line of Text
34. Displaying the Day of the Year
35. Future Value of Monthly Deposites(Compund Interest Calculations)
36. Updating Customer Records
37. Locating Customer Recors
38. Processing a Linked List
39. Raising a Number to a Power
40. Creating a Data File(Lowercase to Uppercase Text Conversion)
41. Reading a Data File
42. Creating a File Containing Customer Records
43. Updating a File Containing Customer Records
44. Creating an Unformatted Data File Containing Customer Records
45. Updating an Uniformatted Data File Containing Customer Records
46. Displaying Bit Patterns
47. Data Compression(Storing Names and Birthdates)





Program 3.1   Writing Your First C Program
Program 3.4   Displaying Variables
Program 3.5   Displaying Multiple Values
Program 3.6   Using Comments in a Program
Program 4.1   Using the Basic Data Types
Program 4.2   Using the Arithmetic Operators
Program 4.3   More Examples with Arithmetic Operators
Program 4.4   Illustrating the Modulus Operator
Program 4.5   Converting Between Integers and Floats
Program 5.1   Calculating the Eighth Triangular Number
Program 5.2   Calculating the 200th Triangular Number
Program 5.3   Generating a Table of Triangular Numbers
Program 5.4   Asking the User for Input
Program 5.5   Using Nested for Loops
Program 5.6   Introducing the while Statement
Program 5.7   Finding the Greatest Common Divisor
Program 5.8   Reversing the Digits of a Number
Program 5.9   Implementing a Revised Program to Reverse the Digits of a Number
Program 6.1   Calculating the Absolute Value of an Integer
Program 6.2   Calculating the Average of a Set of Grades and Counting the Number of Failing Test Grades
Program 6.3   Determining if a Number Is Even or Odd
Program 6.4   Revising the Program to Determine if a Number Is Even or Odd
Program 6.5   Determining if a Year Is a Leap Year
Program 6.6   Implementing the Sign Function
Program 6.8   Evaluating Simple Expressions
Program 6.8A  Revising the Program to Evaluate Simple Expressions
Program 6.9   Revising the Program to Evaluate Simple Expressions,Version 2
Program 6.10  Generating a Table of Prime Numbers
Program 6.10(A) Revising the Program to Generate a Table of Prime Numbers
Program 7.1   Working with an Array
Program 7.2   Demonstrating an Array of Counters
Program 7.3   Generating Fibonacci Numbers
Program 7.4   Revising the Program to Generate Prime Numbers,Version 2
Program 7.5   Initializing Arrays
Program 7.6   Introducing Character Arrays
Program 7.7   Converting a Positive Integer to Another Base
Program 7.8   Generating Fibonacci Numbers Using Variable-Length Arrays
Program 8.1   Writing a Function in C
Program 8.2   Calling Functions
Program 8.3   More on Calling Functions
Program 8.4   Calculating the nth Triangular Number
Program 8.5   Revising the Program to Find the Greatest Common Divisor
Program 8.6   Finding the Greatest Common Divisor and Returning the Results
Program 8.7   Calculating the Absolute Value
Program 8.8   Calculating the Square Root of a Number
Program 8.9   Finding the Minimum Value in an Array
Program 8.10  Revising the Function to Find the Minimum Value in an Array
Program 8.11  Changing Array Elements in Functions
Program 8.12  Sorting an Array of Integers into Ascending Order
Program 8.13  Using Multidimensional Arrays and Functions
Program 8.13(A) Multidimensional Variable-Length Arrays
Program 8.14  Converting a Positive Integer to Another Base
Program 8.15  Illustrating Static and Automatic Variables
Program 8.16  Calculating Factorials Recursively
Program 9.1   Illustrating a Structure
Program 9.2   Determining Tomorrow’s Date
Program 9.3   Revising the Program to Determine Tomorrow’s Date
Program 9.4   Revising the Program to Determine Tomorrow’s Date,Version 2
Program 9.5   Updating the Time by One Second
Program 9.6   Illustrating Arrays of Structures
Program 9.7   Illustrating Structures and Arrays
Program 10.1  Concatenating Character Arrays
Program 10.2  Counting the Characters in a String
Program 10.3  Concatenating Character Strings
Program 10.4  Testing Strings for Equality
Program 10.5  Reading Strings with scanf
Program 10.6  Reading Lines of Data
Program 10.7  Counting Words
Program 10.8  Counting Words in a Piece of Text
Program 10.9  Using the Dictionary Lookup Program
Program 10.10 Modifying the Dictionary Lookup Using Binary Search
Program 10.11 Converting a String to its Integer Equivalent
Program 11.1  Illustrating Pointers
Program 11.2  More Pointer Basics
Program 11.3  Using Pointers in Expressions
Program 11.4  Using Pointers to Structures
Program 11.5  Using Structures Containing Pointers
Program 11.6  Using Linked Lists
Program 11.7  Traversing a Linked List
Program 11.8  Using Pointers and Functions
Program 11.9  Using Pointers to Exchange Values
Program 11.10 Returning a Pointer from a Function
Program 11.11 Working with Pointers to Arrays
Program 11.12 Summing the Elements of an Array
Program 11.13 Pointer Version of copyString
Program 11.14 Revised Version of the copyString Function
Program 11.15 Using Pointers to Find the Length of a String
Program 12.1  The Bitwise AND Operator
Program 12.2  Illustrate Bitwise Operators
Program 12.3  Implementing a Shift Function
Program 12.4  Implementing a Rotate Function
Program 13.1  Introducing the #define Statement
Program 13.2  More on Working with Defines
Program 13.3  Using the #include Statement
Program 14.1  Using Enumerated Data Types
Program 16.1  Illustrating the printf Formats
Program 16.2  Copying Characters from Standard Input to Standard Output
Program 16.3  Copying Files
Program 17.1  File Copy Program Using Command-Line Arguments
Program 18.1  Adding Debug Statements with the Preprocessor
Program 18.2  Compiling in Debug Code
Program 18.3  Defining a DEBUG Macro
Program 18.4  A Simple Program for Use with gdb
Program 18.5  Working with gdb
Program 18.5  gdb Session
Program 19.1  Working with Fractions in C
Program 19.2  Working with Fractions in Objective-C
Program 19.3  Working with Fractions in C++
Program 19.4  Working with Fractions in C#




Hello world 
Print Integer 
Addition 
Odd or Even 
Add, subtract, multiply and divide 
Check vowel 
Leap year 
Add digits 
Factorial 
HCF and LCM 
Decimal to binary conversion 
ncR and nPr 
Add n numbers 
Swapping 
Reverse number 
Palindrome number 
Print Pattern 
Diamond 
Prime numbers 
Find armstrong number 
Generate armstrong number 
Fibonacci series 
Print floyd's triangle 
Print pascal triangle 
Addition using pointers 
Maximum element in array 
Minimum element in array 
Linear search 
Binary search 
Reverse array 
Insert element in array 
Delete element from array 
Merge arrays 
Bubble sort 
Insertion sort 
Selection sort 
Add matrices 
Subtract matrices 
Transpose matrix 
Multiply two matrices 
Print string 
String length 
Compare strings 
Copy string 
Concatenate strings 
Reverse string 
Find palindrome 
Delete vowels 
C substring 
Sort a string 
Remove spaces 
Change case 
Swap strings 
Character's frequency 
Anagrams 
Read file 
Copy files 
Merge two files 
List files in a directory 
Delete file 
Random numbers 
Add complex numbers 
Print date 
Get IP address 
Shutdown computer 
* 2d example insertion sort
* A bubblesort routine
* A simple example showing some comparison operators
* Add numbers using command line arguments (CLA)
* Add Pointers
* Add two matrices and store the result
* Addition of Two Matrices
* Addition of two numbers in C++
* Area and Perimeter of Rectangle
* Area and Perimeter of Square
* Area of Circle
* Arrange the elements in array in descending order
* ATM programing
* Basic example showing constants usage in C
* below and average students
* Binary search
* Bubble sort - linked list
* bubble sort -2
* Bubble sort in string array
* C Program find Positive Negative with Switch Case Without Conditional Operator
* C Program to calcuate interest and total amount at the end of each year
* Calculate Average of Four Numbers in C++
* Calculate bill with discount in C++
* Calculate Electric Energy Bill
* Calculate Electricity Bill with if-else condition
* calculate the power in watts
* Calculate the Sum
* Check Leap Year in C++
* Check Odd or Even Number in C++
* Concatenate Two Strings
* Construct Pyramid of Numbers
* Convert Decimal to Hexadecimal Number
* Convert Roman Numeral to Decimal
* Copy One File to Another
* Count no. of students above
* count occurrences of values in an array.
* Count the array elements
* Decimal to Binary Conversion
* Deleting Element In An Array
* Determine Palindrome String
* dynamic pointer array
* Example of Using Strings in C
* Facebook Page
* Factorial Function In C
* Factorial of Number Using While Loop
* Factorial off a number using "do while" loop
* Factorials with Recursive Non Recursive
* Fibonacci Series using Recursive Function
* find a given number is positive or negative number in C without if statement
* Find address of char
* Find Area of Rectangle in C++
* Find Greater between two numbers in C++
* Find Inverse of a Given Matrix
* Find Maximum Value in Array
* FInd the sum of digit three numbers
* Generate Pascal's Triangle
* Greatest Common Divisor (GCD) - Recursive Non Recursive
* Greatest of two Numbers - Conditional Operator
* Hanoi Problem Recursive and Non Recursive Functions
* heap sort
* History Of C
* how to find a given number is positive or negative number in C without using relational and conditional operator
* Hsort
* Inorder
* Inserting Elements In An Array
* insertion sort
* Insertion sort in linked list
* integer
* Integer Operands Result
* Isort
* Largest and smallest number Integers
* Length of string and show it in upper
* Linked List implementation
* lower and reverse order
* Mark list Analysis using Structures
* Matrix Multiplication
* Menu Driven Calculator
* Merge sort - linked list
* Merging The Elements In An Array
* Msort Merge sort
* Multiplication of Two Matrices
* Multiply and Division of two numbers
* Multiply and swap 2 nmbers using bitwise operators
* Ohms law example In C
* Print a double pyramid
* Print all permutations of a given string
* Print Armstrong No.S Less Than 1000
* Print Second Largest Among Given Three No.S
* Progam that gives length of side of a Triangle
* Program for conversion of Decimal to Roman Number
* Program for demonstration of Tree Operations - INSERTION
* Program for finding the transpose of a martix in sparse form
* Program for rotating circles using maths Function
* Program to arrange the elements in array in assending order
* program to calculate sum all of the elments in an array
* Program to compute difference between two dates
* Program to construct a pyramid of any input numbers
* program to find greatest of 2 numbers without using relational and conditional operators
* Program to find whether a number is odd or even
* Program to Open a file
* Pyramid using nested for loops
* Qcksort
* Qsearch
* quick sort
* Quick Sort : array of pointers to structures
* read a file and write to a file
* relational and conditional operator
* Reverse First Letter characters
* Reverse Floyds Triangle
* Reverse words in a String C Program
* reversing a linked list
* Search an array
* Search An Element in Linked List
* Searching of the elements of binary number
* Searching the Element in an Array
* selection sort in array
* Selection sort linked list
* shell sort array
* Shsort
* Sorting Strings in Ascending Order
* Square Root of a number by using simple calculations
* Ssort
* Standard Deviation using Function
* string
* String array Qsort
* Sub String Given Main String Position
* Substring Replacement
* Subtract
* Subtraction of Two Matrices
* the Swapping of two Values using Functions
* This program calculates an average of the numbers entered
* To delete n Characters from a given position in a given string
* Total Number of Consonants in a String
* Treesort - string array
* Use of Strlen() Function
* Volume of Box in C++
* WAP to add 1 and subtract 1 from value of a and b (Incremental / Decremental Operators)
* WAP to add entered three digits
* WAP to add two variables
* WAP to concatenate two strings
* WAP to Convert CELCIUS to fahrenheit
* WAP to count number of vowels
* WAP to create double dimension array of 2x3 matrix and display its Elements
* WAP to enter character by using getch () function
* WAP to enter records and also repeat the step if user wants to continue
* WAP to find amount of given quantity of any company with 10% discount using switch case
* WAP to find if number=10 then Good else Bad
* WAP to find out Bigger and Equal number from three numbers (Ternary Operators)
* wap to find out bigger number (if-else)
* WAP to find out Bigger number from two numbers (Ternary Operators)
* WAP to find out Even or Odd number (IF-ELSE)
* WAP to find out Positive or Negative (IF-ELSE)
* WAP to find out power of any number
* WAP to find out Quardratic Equation (d=b2-4ac)
* WAP to find out Square root of any number
* WAP to find out Total Bill with discount according to conditions (Ternary Operators)
* WAP to find out total marks and Percentage of three subjects
* WAP to find out total marks of three subjects
* WAP to find out TOTAL SALARY with (IF-ELSE)
* WAP to find out Year is leap or not (IF-ELSE)
* WAP to find size of any variable
* WAP to find string within a string
* WAP to find that number is palandrom or not (121=121)
* WAP to find that number is prime or not
* WAP to find the factorial of the number (1x2x3x4)
* WAP To find the GCD (greatest common divisor) of two given integers
* WAP to find the length of any string
* WAP TO PRINT ANY MESSAGE ON SCREEN
* WAP to print any name on screen 10 times
* WAP to print ASCII code from 0 to 255
* WAP to print Even and Odd numbers from 20 to 1
* WAP to print fabbonic series from 1 to 55
* WAP to print name and display on screen
* WAP to print numbers from 1-50 which are divided by 7
* WAP to print Odd numbers from 1 to 20
* WAP to print series from 1 to 10 and break on 5
* WAP to print series from 1 to 10 and find its square and cube
* WAP to print series from 1 to 10 and skip 5 and 7
* WAP to print series from 20 to 1
* WAP to print series from start to end using do-while loop
* WAP to print Stars on screen
* WAP to print table of 5
* WAP to print the detail of the programmer
* WAP to print value of multiple data types
* WAP to Reverse of any number using while loop
* Wap to reverse words
* WAP to Sum
* WAP to sum of five elements of an array
* WAP to SWAP the three digit number
* Whether the given no. is armstrong or not
* Whether the given no. Is palindrome or not
* Write a C program to find both the largest and smallest number in a list of integers
* write a c program to find prime numbers
* Write a C program to find the sum of individual digits of a positive integer
* Write a C program to generate all the prime numbers between 1 and n
* Write a C program to print all permutations of a given string
* Write a C program to reverse the words in a sentence in place.
* write a program to find the factorial of a number
* write c program to find the roots of a quadratic equation
* Write C program to implement Simpson method
* Write C Program to Print a Triangle
* XOR list example
[**] Write above programs using pointer.
[*] WAP Write a program




APPENDIX C: ALGORITHM INDEX BY CHAPTER

	CHAPTER 1--INTRODUCTION

		Exchange sorting--SORT 1.3
		Binary search--BINSRCH 1.3
		FIBONACCI 1.4
		Filling a magic square--MAGIC 1.4

	CHAPTER 2--ARRAYS

		Polynomial addition--PADD 2.2
		Fibonacci polynomials--MAIN 2.2
		Sparse matrix transpose--TRANSPOSE 2.3
		Sparse matrix transpose--FAST-TRANSPOSE 2.3
		Sparse matrix multiplication--MMULT 2.3

	CHAPTER 3--STACKS AND QUEUES

		Sequential stacks--ADD, DELETE 3.1
		Sequential queues--ADDQ, DELETEQ 3.1
		Circular sequential queues--ADDQ, DELETEQ 3.1
		Path through a maze--PATH 3.2
		Evaluation of a postfix expression--EVAL 3.3
		Translating infix to postfix--POSTFIX 3.3
		M-stacks sequential--ADD, DELETE 3.4

	CHAPTER 4--LINKED LISTS

		Create a list with 2 nodes--CREATE 2 4.1
		Insert a node in a list--INSERT 4.1
		Delete a node from a list--DELETE 4.1
		Linked stacks--ADDS, DELETES 4.2
		Linked queues--ADDQ, DELETEQ 4.2
		Finding a new node--GETNODE 4.3
		Initializing available space--INIT 4.3
		Returning a node to available space--RET 4.3
		Linked polynomial addition--PADD 4.4
		Erasing a linked list--ERASE 4.4
		Erasing a circular list--CERASE 4.4
		Circular linked polynomial addition--CPADD 4.4
		Inverting a linked list--INVERT 4.5
		Concatenating two lists--CONCATENATE 4.5
		Circular list insertion--INSERT-FRONT 4.5
		Length of a circular list--LENGTH 4.5
		Finding equivalence classes--EQUIVALENCE 4.6
		Reading in a sparse matrix--MREAD 4.7
		Erasing a linked sparse matrix--MERASE 4.7
		Doubly linked list--DDELETE, DINSERT 4.8
		First fit allocation--FF, ALLOCATE 4.8
		Returning freed blocks--FREE
		General lists--COPY, EQUAL, DEPTH 4.9
		Erasing a list with reference counts--ERASE 4.9
		Garbage collection--DRIVER, MARK 1, MARK 2 4.10
		Compacting storage--COMPACT 4.10
		Strings--SINSERT 4.11
		Finding a pattern--FIND, NFIND, PMATCH, FAIL 4.11
		Initializing available space in FORTRAN-INIT 4.12
		Initializing available space in PASCAL-INIT 4.12
		FORTRAN node routines--COEP, SCOEF, EXP, SEXP, LINK, SLINK 4.12

	CHAPTER 5--TREES

		Inorder traversal--INORDER,INORDER1,2,3 5.4
		Preorder traversal--PREORDER 5.4
		Postorder traversal--POSTORDER 5.4
		Copy a binary tree--COPY 5.5
		Equivalence of binary trees--EQUAL 5.5
		Evaluating propositional expressions--POSTORDER-EVAL 5.5
		The inorder successor--INSUC 5.6
		Traversing a threaded binary tree--TINORDER 5.6
		Insertion in a threaded tree--INSERT-RIGHT 5.6
		Disjoint set union--U, F, UNION, FIND 5.8
		Decision trees--EIGHTCOINS 5.8
		Game playing--VE,AB(alpha-beta) 5.8

	CHAPTER 6--GRAPHS

		Depth first search--DFS 6.2
		Breadth first search--BFS 6.2
		Connected components--COMP 6.2
		Minimum spanning tree--KRUSKAL 6.2
		Shortest path, single source--SHORTEST-PATH 6.3
		Shortest paths, ALL__COSTS 6.3
		TOPOLOGICAL-ORDER 6.4
		The first m shortest paths--M-SHORTEST 6.5

	CHAPTER 7--INTERNAL SORTING

		Sequential search--SEQSRCH 7.1
		Binary search--BINSRCH 7.1
		Fibonacci search--FIBSRCH 7.1
		Determining equality of two lists--VERIFY1, VERIFY2 7.1
		Insertion sorting--INSERT, INSORT 7.2
		Quicksort--QSORT 7.3
		Two-way merge sort--MERGE, MPASS, MSORT, RMSORT 7.5
		Heapsort--ADJUST, HSORT 7.6
		Radix sorting--LRSORT 7.7
		Rearranging sorted records--LIST1, LIST2, TABLE 7.8

	CHAPTER 8--EXTERNAL SORTING

		K-way merging 8.2
		K-way sorting--BUFFERING 8.2
		Run generation--RUNS 8.2
		Tape k-way merge--Ml, M2, M3 8.3

	CHAPTER 9--SYMBOL TABLES

		Binary search trees--SEARCH 9.1
		Minimum external path length--HUFFMAN 9.1
		Optimal binary search tree--OBST 9.1
		Binary search tree insertion--BST, AVL-INSERT 9.2
		Hashing--LINSRCH, CHNSRCH 9.3

	CHAPTER 10--FILES

		Searching an m-way tree--MSEARCH 10.2
		Inserting into a B-tree--INSERTB 10.2
		Deletion from a B-tree--DELETEB 10.2
		Tree searching--TRIE 10.2





Lab manual for data structure using C Lab




 1. Write a program to search an element in the array using Linear Search.
 2. Write a program to search an element in the 2-dimensional array using Linear Search.
 3. Write a program to merge two sorted array into one sorted array.
 4. Write a program to perform the following operation in Matrix 1. Addition 2. Subtraction 3. Multiplication 4. Transpose
 5. Write a program to perform the swapping of two numbers using call by value and call by reference.
 6. Write a program to perform following operation on strings using string functions 1. Addition 2. Copying 3. Reverse 4. Length of String.
 7. Write a program to search an element in the array using Iterative Binary Search.
 8. Write a program to search an element in the array using Recursive Binary Search.
 9. Write a program to implement Bubble Sort.
10. Write a program to implement Selection Sort.
11. Write a program to implement Insertion Sort.
12. Write a program to implement Quick Sort.
13. Write a program to implement Merge Sort.
14. Write a program to implement Stack using array.
15. Write a program to implement Queue using array.
16. Write a program to implement Linked List.





C Program Examples
https://codingpointer.com/c-tutorial/c-pointers
===============================================
C program to cmpute matrix addition using two dimensional array
C program to cmpute matrix subtraction using two dimensional array
C program to cmpute matrix multiplication using two dimensional array
C program to compute different order of matrix multiplication
C program to generate identity matrix for required rows and columns
C program to validate whether matrix is identity matrix or not
C program to validate whether matrix is sparse matrix or not
C program to validate whether matrix is dense matrix or not
C program to generate string as matrix diagonal characters using two dimesional array
C Program to find number of weeks, months and years from days
C Program To Implement Linked List and Operations
C Program To Implement Sorted Linked List and Operations
C Program to Reverse the Linked List
C Program to Stack and Operations using Linked List
C Program to Queue and Operations using Linked List
C Program to calculate multiplication of two numbers using pointers
C Program To Calculate Median
C Program To Calculate Standard Deviation
C Program For Fahrenheit To Celsius Conversion
C Program To Calculate Average
C Program For Quadratic Equations
C Program To Check Character Type
C Program To Find Largest Of Three Values
C Program To Find Max Value In Array
C Program to Find Min Value In Array
C Program to Print Multiplication Table
C Program for Frequency Counting
C Program to read a line of text
C Program To Find ASCII Value For Any Character
C Program To Find A Character Is Number, Alphabet, Operator, or Special Character
C Program To Find Reverse Case For Any Alphhabet using ctype functions
C Program To Find Number Of Vowels In Input String
C Program Pointers Example Code
C Program To Find Leap Year Or Not
C Program To Swap Two Integers Using Call By Reference
C Program To Swap Two Integers Without Using Third Variable
C Program To List Prime Numbers Upto Limit
C Program To List Composite Numbers Upto Limit
C Program To Calculate Compound Interest
C Program To Calculate Depreciation Amount After of Before Few Years
C Program To Calculate Profit Percentage
C Program To Calculate Loss Percentage
C Program To Find String Is Polindrome Or Not
C Program To Find Factorial of a Number
C Program To Check Number is a Polindrome or Not
C Program To Generate Random Integers
C Program To Generate Random Float Numbers
C Program to find Square Root of a Number
C Program to find Area of a Rectangle
C Program to find Perimeter of a Rectangle
C Program to find Area of a Square
C Program to find Area of a Triangle
C Program to find Area of a Parallelogram
C Program to find Area of a Rhombus
C Program to find Area of a Trapezium
C Program to find Area of a Circle and Semi-circle
C Program to find Circumference of a Circle and Semi-circle
C Program to find length of an arc
C Program to find Area of a Sector
C Program to find string length for list of strings
C Program to find the character at index in a string
C Program to compare characters
C Program to find eligible to vote or not
C Program to get system current date and time on linux
C Program to get positive number
C Program to implement calculator
C Program to implement banking system
C Program to find sum of number
C Program for array traversal using pointers
C Program for array traversal in reverse order using pointers
C Program to find particular element occurrences count in array
C Program to find even elements occurrences count in array
C Program to find odd elements occurrences count in array
C program to find week day in word from week day in number using two dimentsional array
C program to find month in word from month in number using pointers
C program to compute PMT for a loan
C program to compute EMI and round up using floor
C program to compute EMI and round up using ceil
C program to compute the EMI table with Interest, Principal and Balance
C program to get multiple line of string
C program to find nth element in array using pointers
C program to compute the volume of a cube
C program to compute the volume of a box
C program to compute the volume of a sphere
C program to compute the volume of a triangular prism
C program to compute the volume of a cylinder
C Program to Compute Perimeter of Square
C Program to compute the perimeter of triangle
C Program to compute the discount rate
C Program to compute the sales tax
C program to add, delete, search a record or show all using binary file
C program to add, delete, search a record or show all using text file

Gursharan Singh Tatla
www.eazynotes.com
"c-programs.zip"
File Location(PATH) "/media/it/新加卷/A/cprogrammingquestion/"

  1. Program to add two matrices.
  2. Program to calculate the net salary.
  3. Program to check whether a character is vowel or not by using switch statement.
  4. Program to check whether the given number is an armstrong number.
  5. Program to compare two strings using strcmp.
  6. Program to compare two strings without using strcmp.
  7. Program to concatenate two strings using strcat.
  8. Program to concatenate two strings without using strcat.
  9. Program to convert temperature from degree centigrade to fahrenheit.
 10. Program to convert time in seconds to hours minutes and seconds.
 11. Program to copy contents of one file to another.
 12. Program to copy one string to another without using strcpy.
 13. Program to copy string using strcpy.
 14. Program to count number of words and number of characters in a string.
 15. Program to find area of a triangle using hero formula.
 16. Program to find area of square and circumference of a circle.
 17. Program to find factorial of a number using recursion.
 18. Program to find factorial of a number without using recursion.
 19. Program to find hcf of two numbers using recursion.
 20. Program to find hcf of two numbers without recursion. 
 21. Program to find largest of three numbers.
 22. Program to find length of a string using strlen.
 23. Program to find length of a string without using strlen.
 24. Program to find simple interest and compound interest.
 25. Program to find smallest among n numbers.
 26. Program to find sphere surface area and volume of a sphere.
 27. Program to find sum and average of three real numbers.
 28. Program to find the sum of digits of a positive integer.
 29. Program to find the sum of even and odd numbers from first 100 positive integers.
 30. Program to find the sum of first 100 positive integers. 
 31. Program to find value of sinx using expansion series.
 32. Program to find vowels in a string.
 33. Program to find whether a number is palindrome or not.
 34. Program to find whether a string is palindrome or not without using string functions.
 35. Program to find whether a string is palindrome or not.
 36. Program to find whether the given number is a prime number.
 37. Program to illustrate the concept of passing 1d array to function.
 38. Program to illustrate the concept of passing 2d array to function.
 39. Program to illustrate the concept of pointers.
 40. Program to implement break statement. 
 41. Program to implement continue statement.
 42. Program to implement structure with array.
 43. Program to implement structure with function.
 44. Program to implement structure with pointers.
 45. Program to implement structure.
 46. Program to input output strings using character functions.
 47. Program to input output strings using gets and puts.
 48. Program to input output strings using printf and scanf.
 49. Program to multiply two matrices.
 50. Program to print a file and count number of characters. 
 51. Program to print a table of any number.
 52. Program to print fibonacci series using recursion.
 53. Program to print fibonacci series without recursion.
 54. Program to print first n prime numbers.
 55. Program to print the numbers which are divisible by 3 and 5 from first 100 natural numbers.
 56. Program to print the pattern1.
 57. Program to print transpose of a matrix.
 58. Program to read data from file using fscanf.
 59. Program to reverse a given number. 
 60. Program to reverse a string using strrev.
 61. Program to reverse a string without using strrev.
 62. Program to search an array using binary search.
 63. Program to search an array using linear search.
 64. Program to show call by reference.
 65. Program to show call by value.
 66. Program to sort an array using bubble sort.
 67. Program to sort an array using selection sort.
 68. Program to swap values of two variables using third variable.
 69. Program to swap values of two variables without using third variable.
 70. Program to write and read a character from a file.
 71. Program to write and read a string from a file.
 72. Program to write and read an integer from a file.
 73. Program to write data into a file using fprintf.

 
 
Programming in ANSI C 
E. Balaguruswamy


Programming in ANSI C
8th Edition
935316513X · 9789353165130
By E Balagurusamy
? 2019 | Published: March 15, 2019
MRP ?475.00

DESCRIPTION

OVERVIEW

The book ‘Programming in ANSI C’ has been developed specifically to meet the needs of a first-time learner who is keen to be a programmer.
Distinguished as one of the bestsellers in the market, the book is taking forward another step in pursuit of perfection with this new edition. It
follows a hierarchical approach by explaining the concepts from elementary to advanced level. The exhaustive coverage of critical concepts,
such as Arrays, Strings, Functions, Pointers, Self-referential Structures, Dynamic Memory Allocation, etc. makes this title a complete reference
guide for the beginners as well as life-long learners. Rich pedagogy, challenging programming problems, and concretely curated appendices
enhance the utility of the book and make it a lasting resource for students and instructors.

HIGHLIGHTS

1. A comprehensive book covering the fundamentals as well as latest features of C programming
2. Each chapter follows an outcome-based learning approach.
3. Strong pedagogical features, that include:
   ? Worked Out Problems
   ? Tips and Important Notes
   ? 24 detailed Case studies
   ? Multiple Choice Questions
   ? Programming and Debugging Questions
   ? Interview Questions
4. Two new and exciting projects on:
   ? Electricity Board Management System
   ? Making Web Services in C
5. An exciting appendix on ‘Graphic Programming Using C’

KEY FEATURES

1. Updated content as per the latest AICTE curriculum
2. One new chapter on ‘Introduction to Computing’
3. Strong pedagogical features
4. Two fresh and innovative projects on ‘Electricity Board Management System’ and ‘Making Web Services in C’
5. An exciting appendix on ‘Graphic Programming Using C’

[TABLE OF CONTENTS]
8th Edition

Chapter  1: Introduction to Computing
Chapter  2: Overview of C
Chapter  3: Constants, Variables, and Data Types
Chapter  4: Operators and Expressions
Chapter  5: Managing Input and Output Operations
Chapter  6: Decision Making and Branching
Chapter  7: Decision Making and Looping
Chapter  8: Array
Chapter  9: Character Arrays and Strings
Chapter 10: User Defined Functions
Chapter 11: Structures and Unions
Chapter 12: Pointers
Chapter 13: File Management in C
Chapter 14: Dynamic Memory Allocation and Linked Lists
Chapter 15: The Preprocessor
Chapter 16: Developing a C Program: Some Guidelines

Appendix   I: Bit-Level Programming
Appendix  II: ANSCII Values of Characters
Appendix III: ANSI C Library Functions
Appendix  IV: Projects
Appendix   V: C99/C11 Features
Appendix  VI: Graphics Programming Using C

Bibliography
Index



TABLE OF CONTENTS(6th, 7th Edition)
=================

 1. Overview of C
 2. Constants, Variables, and Data Types
 3. Operators and Expressions
 4. Managing Input and Output Operations
 5. Decision Making and Branching
 6. Decision Making and Looping
 7. Arrays
 8. Character Arrays and Strings
 9. User-Defined Functions
10. Structures and Unions
11. Pointers
12. File Management in C
13. Dynamic Memory Allocation and Linked Lists
14. The Preprocessor
15. Developing a C Program: Some Guidelines



List of Programs
================

Declaration of Variables
Investment Problem
Program accessing addresses of variables
Program accessing variables using pointers
Program addition
Program appending items to an existing file
Program area under a curve
Program arrays of structures
Program arrays within a structure
Program average of n values
Program book shop inventory
Program command line arguments
Program comparison of structure variables
Program concatenation of strings
Program conditional operator
Program copying one string into another
Program counting characters words and lines in a text
Program counting with if
Program creating a linear linked list
Program creation of sorted list from a given list of numbers
Program defining and assigning values to structure members
Program errors handling in file operations
Program evaluation of expressions
Program example of  exit with goto statement
Program example of while statement
Program examples of assignments
Program experiment with if..else statement
Program fahrenheit - celsius conversion tables
Program for frequency counting
Program function delete
Program function insert
Program functions with arguments and return values
Program functions with arguments but no return values
Program functions with arrays
Program function with the arguments no, return values
Program handling of files with mixed data types
Program handling of integer data files
Program illustration of conversion specification [..] for strings
Program illustration of fseek & ftell functions
Program illustration of if statement
Program illustration of nested loops
Program illustration of operators
Program illustration of pointer expressions
Program illustration of pointers to functions
Program illustration of properties of global variables
Program illustration of static variable
Program illustration of working of auto variables
Program illustrations of strings-handling functions
Program inserting a number in a sorted list
Program integer numbers on 16-bit machine
Program interactive computing using scanf function
Program interactive investment program
Program inventory report
Program pay-bill calculations
Program plotting of two functions
Program pointers and character atrings
Program pointers and two-dimensional arrays
Program pointers in one-dimensional array
Program pointers to structure variables
Program power function Program with prototypes
Program power functions
Program printing alphabet set in decimal and character form
Program printing of characters and strings
Program printing of integer numbers
Program printing of multiplication table
Program printing of real numbers
Program printing sequences of characters
Program problem of minimum cost
Program processing of customer list
Program production and sales analysis
Program range of numbers
Program reading a character from terminal
Program reading a series of words using scanf function
Program reading integer numbers
Program reading of real numbers
Program reading strings
Program reliability graph
Program selecting the largest of three values
Program showing one-dimentional array
Program showing round-off errors
Program showing the use of a cast
Program showing two-dimensional arrays
Program sorting of array elements
Program sorting strings in alphabetical order
Program structures as function parametersa
Program structures as function parameters
Program testing character type
Program testing for correctness of input data
Program to calculate a salesmans salary
Program to calculate standerd deviation
Program to convert days to months and days
Program to draw histogram
Program to evaluate a multiple-choice test
Program to print multiplication table
Program to read a line of text from terminal
Program to show use of shorthand operators
Program to sort a list and find its median
Program to tabulate survey data
Program use of break in a program
Program use of continue statement
Program use of else if ladder
Program use of for loop
Program use of goto statement
Program use of malloc function
Program use of realloc and free function
Program using cosine function
Program using function
Program writing a character to the terminal
Program writing strings using %s format
Program writing to and reading from a file
Program pointers as function parameters
Solution of quadratic equation



Total 112 ANSI C Programs


Program
	
main()                                                                     
{
	/*＃＃＃＃printing begins＃＃＃＃＃＃*/  

	printf(※I see, I remember§);

	/*＃＃＃＃＃＃printing ends＃＃＃＃＃＃＃*/
}
		
Fig 1.2  A program to print one line of text




Addition of Two Numbers
Program

/* Programm ADDITION */	    /*  line-1  */
/* Written by EBG    */     /*  line-2  */
main()	                    /*	line-3  */
{	                        /*	line-4  */
	int   number;	        /*	line-5  */
	float amount;	        /*	line-6  */
	                        /*	line-7  */
	number = 100;	        /*	line-8  */
	                        /*	line-9  */
	amount = 30.75 + 75.35;	/*	line-10 */
	printf(※%d\n§,number);	/*	line-11 */
	printf(※%5.2f§,amount);	/*	line-12 */
}		                    /*	line-13 */


Fig.1.4  Program to add two numbers


Program 
/*--------------------- INVESTMENT PROBLEM --------------------*/
#define PERIOD	10
#define PRINCIPAL	5000.00
/*-------------------- MAIN PROGRAM BEGINS --------------------*/
main()
{ /*------------------- DECLARATION STATEMENTS ----------------*/
	int year;
	float amount, value, inrate;
	/*------------------- ASSIGNMENT STATEMENTS -------------------*/
	amount 	= 	PRINCIPAL;
	inrate 	=	0.11;
	year	=	0;
	/*------------------ COMPUTATION STATEMENTS -------------------*/
	/*--------------- COMPUTATION USING While LOOP ----------------*/
	while(year <= PERIOD)
	{	printf(※%2d		%8.2f\n§,year, amount);
		value	=	amount + inrate * amount;
		year		=	year + 1;
		amount		=	value;
	}
	/*----------------------- while LOOP ENDS ---------------------*/
}
/*------------------------ PROGRAM ENDS -----------------------*/

Fig. 1.5 Program for investment problem


Program 

/*------------------- PROGRAM USING FUNCTION ------------------*/

int mul (int a, int b);      /*------- DECLARATION ------------*/         

/*-------------------- MAIN PROGRAM BEGINS --------------------*/
main ()
{ 
	int a, b, c;

	a = 5;
	b = 10;
	c = mul (a,b);

	printf (※multiplication of %d and %d is %d§,a,b,c);
}

/* ----------------	MAIN PROGRAM ENDS MUL() FUNCTION STARTS -----------------*/

int mul (int x, int y)
int p;

p = x*y;
{
	return(p);
}
/* -------------------- MUL() FUNCTION ENDS ------------------*/


Fig.1.7 A Program using a user-defined function


Program

/*--------------- PROGRAM USING COSINE FUNCTION -------------- */
#include <math.h>
#define   PI      3.1416
#define   MAX     180

main()
{

	int angle;
	float x,y;
	
	angle = 0; 
	printf(※Angle Cos(angle)\n\n§);

	while(angle  <= MAX)
	{
		x = (PI/MAX)*angle;
		y = cos(x);
		printf(※%15d %13.4f\n§, angle, y);
		angle = angle + 10;
	}
}

Chapter:2

Example 2.1
Representation of integer constants on a 16-bit computer.													
The program in Fig.2.9 illustrates the use of integer constants on a 16-bit machine. The output in figure 2.3 shows that the integer values larger than 32767 are not properly stored on a 16-bit machine.  However, when they are qualified as long integer (by appending L), the values are correctly stored.

INTEGER NUMBERS ON 16-BIT MACHINE

Program

main()                                                     
{                                                          
    printf("Integer values\n\n");                          
    printf("%d %d %d\n", 32767,32767+1,32767+10);          
    printf("\n");                                          
    printf("Long integer values\n\n");                     
    printf("%ld %ld %ld\n", 32767L,32767L+1L,32767L+10L);  
 } 
                                                         
Output                                                     

    Integer values                                             
                                                               
    32767 -32768 -32759                                        
                                                               
    Long integer values                                        
                                                               
    32767 32768 32777                                          


Fig. 2.3  Representation of integer constants



Example 2.2								
Program in Figure 2.8 shows typical declarations, assignments and values stored in various types of variables.												  
		  
The variables x and p have been declared as floating-point variables.  Note that the way the value of 1.234567890000 that we assigned to x is displayed under different output formats.  The value of x is displayed as 1.234567880630 under %.12lf format, while the actual value assigned is 1.234567890000.  This is because the variable x has been declared as a float that can store values only upto six decimal places.

The variable m that has been declared as int is not able to store the value 54321 correctly.  Instead, it contains some garbage.  Since this program was run on a 16-bit machine, the maximum value that an int variable can store is only 32767.  However, the variable k (declared as unsigned) has stored the value 54321 correctly.  Similarly, the long int variable n has stored the value 1234567890 correctly.

The value 9.87654321 assigned to y declared as double has been stored correctly but the value is printed as 9.876543 under %lf format.  Note that unless specified otherwise, the printf function will always display a float or double value to six decimal places.  We will discuss later the output formats for displaying numbers.






EXAMPLES OF ASSIGNMENTS
 
Program 

   main()                                                    
    {                                                         
    /*..........DECLARATIONS............................*/    
                                                              
        float      x, p ;                                     
        double     y, q ;                                     
        unsigned   k ;                                        
                                                              
    /*..........DECLARATIONS AND ASSIGNMENTS............*/    
                                                              
        int        m = 54321 ;                                
        long int   n = 1234567890 ;                           
                                                              
    /*..........ASSIGNMENTS.............................*/    
                                                              
        x = 1.234567890000 ;                                  
        y = 9.87654321 ;                                      
        k = 54321 ;                                           
        p = q = 1.0 ;                                         
                                                              
    /*..........PRINTING................................*/    
                                                              
        printf("m = %d\n", m) ;                               
        printf("n = %ld\n", n) ;                              
        printf("x = %.12lf\n", x) ;                           
        printf("x = %f\n", x) ;                               
        printf("y = %.12lf\n",y) ;                            
        printf("y = %lf\n", y) ;                              
        printf("k = %u  p = %f  q = %.12lf\n", k, p, q) ;     
    }    
                                                     
                                                              
Output                                                    
                                                              
    m = -11215                                                
    n = 1234567890                                            
    x = 1.234567880630                                        
    x = 1.234568                                              
    y = 9.876543210000                                        
    y = 9.876543                                              
    k = 54321  p = 1.000000  q = 1.000000000000   
          
                                                              
Fig. 2.8  Examples of assignments





Example 2.3									
The program in Fig.2.9 illustrates the use of scanf funtion.						
The first executable statement in the program is a printf, requesting the user to enter an integer number.  This is known as "prompt message" and appears on the screen like

              Enter an integer number 

As soon as the user types in an integer number, the computer proceeds to compare the value with 100.  If the value typed in is less than 100, then a message

               Your number is smaller than 100 

is printed on the screen.  Otherwise, the message
 
               Your number contains more than two digits 

is printed.  Outputs of the program run for two different inputs are also shown in Fig.2.9.
 


INTERACTIVE COMPUTING USING scanf FUNCTION
Program 

main()                                                       
{                                                            
	int  number;                                             
	
	printf("Enter an integer number\n");                     
	scanf ("%d", &number);                                   
	
	if ( number < 100 )                                      
	printf("Your number is smaller than 100\n\n");        
	else                                                     
	printf("Your number contains more than two digits\n");
}   
                                                         

Output                                                       
                                                                
   Enter an integer number                                      
   54                                                           
   Your number is smaller than 100                              
   Enter an integer number                                      
   108                                                          
   Your number contains more than two digits                    


Fig.2.9 Use of scanf function




Example 2.4										
Sample Program 3 discussed in Chapter 1 can be converted into a more flexible  interactive program using scanf as shown in Fig.2.10.					

In this case, computer requests the user to input the values of the amount to be invested, interest rate and period of investment by printing a prompt message

               Input amount, interest rate, and period 

and then waits for input values.  As soon as we finish entering 
INTERACTIVE INVESTMENT PROGRAM    

Program                    
  
main()                                                       
{                                                            
	int    year, period;                                    
	float  amount, inrate, value;                           
	
	printf("Input amount, interest rate, and period\n\n");  
	scanf ("%f %f %d", &amount, &inrate, &period);          
	printf("\n");                                           
	year = 1;                                               
	
	while( year <= period )                                  
	{                                                        
		value = amount + inrate * amount;                 
		printf("%2d  Rs %8.2f\n", year, value);           
		amount = value;                                   
		year = year + 1;                                  
	}                                                        
}                                                            
                                                              
 
Output                                                       
                                                              
  Input amount, interest rate, and period                      
                                                               
  10000  0.14  5                                               
                                                               
   1  Rs 11400.00                                              
   2  Rs 12996.00                                              
   3  Rs 14815.44                                              
   4  Rs 16889.60                                              
   5  Rs 19254.15                                              
                                                               
  Input amount, interest rate, and period                      
                                                               
  20000  0.12  7                                               
                                                               
   1  Rs 22400.00                                              
   2  Rs 25088.00                                              
   3  Rs 28098.56                                              
   4  Rs 31470.39                                              
   5  Rs 35246.84                                              
   6  Rs 39476.46                                              
   7  Rs 44213.63                                              


Fig.2.10  Interactive investment program


CHAPTER 3:


Example 3.1
The program in Fig.3.1 shows the use of integer arithmetic to convert a given number of days into months and days.


PROGRAM TO CONVERT DAYS TO MONTHS AND DAYS


Program
       

main ()                                                      
{                                                           
	int   months, days;                                    
	
	printf("Enter days\n");                                
	scanf("%d", &days);                                    
	
	months = days / 30;                                    
	days   = days % 30;                                    
	
	printf("Months = %d   Days = %d", months, days);       
}                                                           
                                                               
                                                              
Output                                                      
                                                               
   Enter days                                                  
   265                                                         
   Months = 8   Days = 25                                      
                                                               
   Enter days                                                  
   364                                                         
   Months = 12   Days = 4                                      
                                                               
   Enter days                                                  
   45                                                          
   Months = 1   Days = 15                                      
_______________________________________________________________

Fig. 3.1  Illustration of integer arithmetic




Example 3.2
Program of Fig.3.2 prints a sequence of squares of numbers. Note the use of the shorthand operator *= .

The program attempts to print a sequence of squares of numbers starting from 2.  The statement
              a *= a;
which is identical to
              a = a*a;
replaces the current value of a by its square.  When the value of a becomes equal or greater than N (=100) the while is terminated.  Note that the output contains only three values 2, 4 and 16.

USE OF SHORTHAND OPERATORS
Program  

   #define    N   100                                          
   #define    A   2                                            
                                                               
   main()                                                      
   {                                                           
       int  a;                                                 
                                                               
       a  =  A;                                                
       while( a < N )                                          
       {                                                       
            printf("%d\n", a);                                 
            a *= a;                                            
       }                                                       
   }                                                           
                                                            
Output                                                      
                                                               
   2                                                           
   4                                                           
   16                                                          

Fig. 3.2  Use of shorthand operator *=




Example 3.3
In Fig.3.3, the program employs different kinds of operators. The results of their evaluation are also shown for comparison.

Notice the way the increment operator ++ works when used in an expression. In the statement
              c = ++a - b;
new value of a (= 16) is used thus giving the value 6 to c.  That is, a is incremented by 1 before it is used in the expression.  However, in the statement
              d = b++ + a;      
the old value of b (=10) is used in the expression.  Here, b is incremented by 1 after it is used in the expression.

We can print the character % by placing it immediately after another % character in the control string.  This is illustrated by the statement

              printf("a%%b = %d\n", a%b);

The program also illustrates that the expression

              c > d ? 1 : 0

assumes the value 0 when c is less than d and 1 when c is greater than d.


ILLUSTRATION OF OPERATORS

Program

main()                                                      
{                                                           
	int a, b, c, d;                                         
	
	a = 15;                                                 
	b = 10;                                                 
	c = ++a - b;                                            
	
	printf("a = %d  b = %d  c = %d\n",a, b, c);             
	
	d = b++ +a;                                             
	
	printf("a = %d  b = %d  d = %d\n",a, b, d);  
	printf("a/b = %d\n", a/b);                              
	printf("a%%b = %d\n", a%b);                             
	printf("a *= b = %d\n", a*=b);                          
	printf("%d\n", (c>d) ? 1 : 0);
	printf("%d\n", (c<d) ? 1 : 0);                          
}                                                           
                                                               
                                                               
Output                                                      
                                                               
   a = 16  b = 10  c = 6                                       
   a = 16  b = 11  d = 26                                      
   a/b = 1                                                     
   a%b = 5                                                     
   a *= b = 176                                                
   0                                                           
   1                                                           
                                                               

Fig. 3.3  Further illustration of arithmetic operators



Example 3.4
The program in Fig.3.4 illustrates the use of variables in expressions and their evaluation.

Output of the program also illustrates the effect of presence of parentheses in expressions.  This is discussed in the next section. 


EVALUATION OF EXPRESSIONS

Program
             
main()                                                      
{
	float  a, b, c, x, y, z;                                
	
	a = 9;                                                  
	b = 12;                                                 
	c = 3;                                                  
	
	x = a - b / 3 + c * 2 - 1;                              
	y = a - b / (3 + c) * (2 - 1);                          
	z = a -(b / (3 + c) * 2) - 1;                           
	
	printf("x = %f\n", x);                                  
	printf("y = %f\n", y);                                  
	printf("z = %f\n", z);                                  
}
                                                           
                                                               
Output                                                      
                                                               
   x = 10.000000                                               
   y = 7.000000                                                
   z = 4.000000    
                                            

Fig.3.4  Illustrations of evaluation of expressions




Example 3.5
Output of the program in Fig.3.6 shows round-off errors that can occur in computation of floating point numbers.

PROGRAM SHOWING ROUND-OFF ERRORS

Program
/*------------------- Sum of n terms of 1/n -------------------*/                
   main()                                                      
   {                                                           
       float  sum, n, term ;                                   
       int    count = 1 ;                                      
                                                               
       sum = 0 ;                                               
       printf("Enter value of n\n") ;                          
        scanf("%f", &n) ;                                      
       term = 1.0/n ;                                          
       while( count <= n )                                     
       {
            sum = sum + term ;                                 
            count++ ;                                          
       }                                                       
       printf("Sum = %f\n", sum) ;                             
   }

Output                                                      
   Enter value of n                                            
   99                                                          
   Sum = 1.000001                                              
   Enter value of n                                            
   143                                                         
   Sum = 0.999999  
Fig.3.6 Round-off errors in floating point computations
We know that the sum of n terms of 1/n is 1.  However, due to errors in floating point representation, the result is not always 1.



Example 3.6
      Figure 3.8 shows a program using a cast to evaluate the equation
                        n
            sum =  ?  (1/i)
                       i=1



PROGRAM SHOWING THE USE OF A CAST

Program  

main()                                                      
{                                                           
	float  sum ;                                            
	int    n ;                                              
	
	sum = 0 ;                                               
	
	for( n = 1 ; n <= 10 ; ++n )                            
	{                                                       
		sum = sum + 1/(float)n ;                             
		printf("%2d  %6.4f\n", n, sum) ;                     
	}                                                       
}                                                           
                                                               
Output                                                      
                                                               
    1  1.0000                                                  
    2  1.5000                                                  
    3  1.8333                                                  
    4  2.0833                                                  
    5  2.2833                                                  
    6  2.4500                                                  
    7  2.5929                                                  
    8  2.7179                                                  
    9  2.8290                                                  
   10  2.9290                                                  

Fig. 3.8  Use of a cast

CHAPTER 4:


Example 4.1
The program in Fig.4.1 shows the use of getchar function in an interactive environment.


The program displays a question of YES/NO type to the user and reads the user's response in a single character (Y or N).  If the response is Y, it outputs the message

              My name is BUSY BEE

otherwise, outputs.


               You are good for nothing

Note there is one line space between the input text and output message.






READING A CHARACTER FROM KEYBOARD
Program                                           

#include <stdio.h>                                        

main()                                                      
{
	char answer;                                            
	
	printf("Would you like to know my name?\n");            
	printf("Type Y for YES and N for NO:  ");               
	
	answer = getchar();  /* .... Reading a character...*/   
	
	if(answer == 'Y' || answer == 'y')                      
	printf("\n\nMy name is BUSY BEE\n");              
	else                                                    
	printf("\n\nYou are good for nothing\n");             
} 
                                                          
                                                             
Output                                                 
                                                               
    Would you like to know my name?                             
    Type Y for YES and N for NO:  Y                             
                                                               
    My name is BUSY BEE                     
                                                              
    Would you like to know my name?    
    Type Y for YES and N for NO:  n      
                                                              
    You are good for nothing                   


Fig.4.1 Use of getchar function



Example 4.2
The program of Fig.4.2 requests the user to enter a character and displays a message on the screen telling the user whether the character is an alphabet or digit, or any other special character.

This program receives a character from the keyboard and tests whether it is a letter or digit and prints out a message accordingly.  These tests are done with the help of the following functions:
              isalpha(character)
              isdigit(character)
For example, isalpha assumes a value non-zero (TRUE) if the argument character contains an alphabet; otherwise it assumes 0 (FALSE).  Similar is the case with the function isdigit.  
TESTING CHARACTER TYPE
Program:     
   
#include  <stdio.h>                                         
#include  <ctype.h>                                         
main()                                                      
{                                                           
	char character;                                         
	printf("Press any key\n");                              
	character = getchar();                                  
	if (isalpha(character) > 0)                             
	printf("The character is a letter.");                
	else                                                    
	if (isdigit (character) > 0)                         
	printf("The character is a digit.");              
	else                                                 
	printf("The character is not alphanumeric.");     
}  
                                                         
Output                                                      
                                                               
   Press any key                                               
   h                                                           
   The character is a letter.                                  
                                                               
   Press any key                                               
   5                                                           
   The character is a digit.                                   
                                                               
   Press any key                                               
   *                                                           
   The character is not alphanumeric.                          
________________________________________________________________________
Fig.4.2   Program to test the character type



Example 4.3
A program that reads a character from keyboard and then prints it in reverse case is given in Fig.4.3.  That is, if the input is upper case, the output will be lower case and vice versa.

The program uses three new functions: islower, toupper, and tolower.  The function islower is a conditional function and takes the value TRUE if the argument is a lower case alphabet; otherwise takes the value FALSE.  The function toupper converts the lower case argument into an upper case alphabet while the function tolower does the reverse.

WRITING A CHARACTER TO THE SCREEN

Program   

#include <stdio.h>                                          
#include <ctype.h>                                          

main()                                                      
{                                                           
	char alphabet;                                          
	printf("Enter an alphabet");                            
	putchar('\n');   /* move to next line */                                       
	alphabet = getchar();                                   
	if (islower(alphabet))                                  
	putchar(toupper(alphabet));                          
	else                                                    
	putchar(tolower(alphabet));                          
}

                                                   
  
Output                                                      
   Enter an alphabet                                           
   a                                                           
   A                                                           
   Enter an alphabet                                           
   Q                                                           
   q                                                           
   Enter an alphabet                                           
   z                                                           
   Z   
                                                                                                                   
Fig.4.3 Reading and writing of alphabets in reverse case



Example 4.4
Various input formatting options for reading integers are experimented in the program shown in Fig. 4.4.

The first scanf requests input data for three integer values a, b, and c, and accordingly three values 1, 2, and 3 are keyed in.  Because of the specification %*d the value 2 has been skipped and 3 is assigned to the variable b.  Notice that since no data is available for c, it contains garbage.

The second scanf specifies the format %2d and %4d for the variables x and y respectively.  Whenever we specify field width for reading integer numbers, the input numbers should not contain more digits that the specified size.  Otherwise, the extra digits on the right-hand side will be truncated and assigned to the next variable in the list.  Thus, the second scanf has truncated the four digit number 6789 and assigned 67 to x  and 89 to y.  The value 4321 has been assigned to the first variable in the immediately following scanf statement.
READING INTEGER NUMBERS
Program:                                                                 
	main()                                                      
	{                                                           
		int a,b,c,x,y,z;                                        
		int p,q,r;                                              
		
		printf("Enter three integer numbers\n");                
		scanf("%d %*d %d",&a,&b,&c);                            
		printf("%d %d %d \n\n",a,b,c);                          
		
		printf("Enter two 4-digit numbers\n");                  
		scanf("%2d %4d",&x,&y);                                 
		printf("%d %d\n\n", x,y);                               
		
		printf("Enter two integers\n");                         
		scanf("%d %d", &a,&x);                                  
		printf("%d %d \n\n",a,x);                               
		
		printf("Enter a nine digit number\n");                  
		scanf("%3d %4d %3d",&p,&q,&r);                          
		printf("%d %d %d \n\n",p,q,r);                          
		
		printf("Enter two three digit numbers\n");              
		scanf("%d %d",&x,&y);                                   
		printf("%d %d",x,y);                                    
	}  
                                                                                                                      
Output                                                      
   Enter three integer numbers                                 
   1 2 3                                                       
   1 3 -3577                                                   
   Enter two 4-digit numbers                                   
   6789  4321                                                  
   67 89                                                       
   Enter two integers                                          
   44  66                                                      
   4321 44                                                     
   Enter a nine-digit number                                   
   123456789                                                   
   66 1234 567                                                 
   Enter two three-digit numbers                               
   123  456                                                    
   89 123         
                                             

Fig.4.4  Reading integers using scanf



Example  4.5
Reading of real numbers (in both decimal point and exponential notation) is illustrated in Fig.4.5.

READING OF REAL NUMBERS
Program:                                                                
main()                                                      
{                                                  
	float x,y;                                              
	double p,q;                                             
	printf("Values of x and y:");                           
	scanf("%f %e", &x, &y);                                 
	printf("\n");                                           
	printf("x = %f\ny = %f\n\n", x, y);                     
	printf("Values of p and q:");                           
	scanf("%lf %lf", &p, &q);                               
	printf("\np = %lf\nq = %e",p,q);                        
	printf("\n\np = %.12lf\np = %.12e", p,q);               
}                                                           

Output                                                      
                                                               
   Values of x and y:12.3456  17.5e-2                          
   x = 12.345600                                               
   y = 0.175000                                                
   Values of p and q:4.142857142857  18.5678901234567890       
   p = 4.142857142857                                          
   q = 1.856789012346e+001                                     

Fig.4.5   Reading of real numbers





Example 4.6
Reading of strings using %wc and %ws is illustrated in Fig.4.6.

The program in Fig.4.6 illustrates the use of various field specifications for reading strings.  When we use %wc for reading a string, the system will wait until the wth character is keyed in.
 Note that the specification %s terminates reading at the encounter of a blank space.  Therefore, name2 has read only the first part of "New York" and the second part is automatically assigned to name3.  However, during the second run, the string "New-York" is correctly assigned to name2. 








READING STRINGS
Program    
   main()                                                      
   {                                                           
       int no;                                                 
       char name1[15], name2[15], name3[15];                   
       printf("Enter serial number and name one\n");           
       scanf("%d %15c", &no, name1);                           
       printf("%d %15s\n\n", no, name1);                       
       printf("Enter serial number and name two\n");           
       scanf("%d %s", &no, name2);                             
       printf("%d %15s\n\n", no, name2);                       
       printf("Enter serial number and name three\n");         
       scanf("%d %15s", &no, name3);                           
       printf("%d %15s\n\n", no, name3);                       
   }
                                                           
Output                                                      
   Enter serial number and name one                            
   1 123456789012345                                           
   1 123456789012345r                                          
   Enter serial number and name two                            
   2 New York                                                  
   2             New                                           
   Enter serial number and name three                          
   2            York                                           
   Enter serial number and name one                            
   1 123456789012                                              
   1 123456789012   r                                          
   Enter serial number and name two                            
   2 New-York                                                  
   2 New-York                                           
   Enter serial number and name three                          
   3 London                                                    
   3 London  
                                         

Fig. 4.6  Reading of strings



Example 4.7
The program in Fig. 4.7 illustrates the function of %[ ] specification.


ILLUSTRATION OF %[ ] SPECIFICATION
Program-A  

   main()                                                      
   {                                                           
       char address[80];                                       
       printf("Enter address\n");                              
       scanf("%[a-z＊]", address);                          
       printf("%-80s\n\n", address);                           
   }                                                           
Output 
                                                     
   Enter address                                               
   new delhi 110002                                            
   new delhi                                                          
           

ILLUSTRATION OF %[^ ] SPECIFICATION
Program-B    
   main()                                                      
   {                                                           
       char address[80];                                       
                                                               
       printf("Enter address\n");                              
       scanf("%[^\n]", address);                             
       printf("%-80s", address);                               
   }
                                                      
Output 
   Enter address                                               
   New Delhi 110 002                                                     
   New Delhi 110 002                                                         

Fig.4.7  Illustration of conversion specification%[] for strings



Example 4.8
The program presented in Fig.4.8 illustrates the testing for correctness of reading of data by scanf function.
The function scanf is expected to read three items of data and therefore, when the values for all the three variables are read correctly, the program prints out their values.  During the third run, the second item does not match with the type of variable and therefore the reading is terminated and the error message is printed.  Same is the case with the fourth run.    
In the last run, although data items do not match the variables, no error message has been printed.  When we attempt to read a real number for an int variable, the integer part is assigned to the variable, and the truncated decimal part is assigned to the next variable.
Note that the character `2' is assigned to the character variable c.

TESTING FOR CORRECTNESS OF INPUT DATA

Program  

main()                                                      
{                                                           
	int a;                                                  
	float b;                                                
	char c;                                               
	printf("Enter values of a, b and c\n");                 
	if (scanf("%d %f %c", &a, &b, &c) == 3)                 
	printf("a = %d  b = %f   c = %c\n" , a, b, c);       
	else                                                    
	printf("Error in input.\n");                         
}                                                           

Output  	
   
   Enter values of a, b and c                                  
   12  3.45  A                                                 
   a = 12  b = 3.450000   c = A                                
   Enter values of a, b and c                                  
   23  78  9                                                   
   a = 23  b = 78.000000   c = 9                               
   Enter values of a, b and c                                  
   8  A  5.25                                                  
   Error in input.                                             
   Enter values of a, b and c                                  
   Y  12  67                                                   
   Error in input.                                             
   Enter values of a, b and c                                  
   15.75  23  X                                                
   a = 15  b = 0.750000   c = 2                                                                                    

Fig.4.8  Detection of errors in scanf input



Example 4.9
The program in Fig.4.9 illustrates the output of integer numbers under various formats.



PRINTING OF INTEGER NUMBERS
Program:                                                               
main()                                                      
{                                                           
	int m = 12345;                                          
	long n = 987654;                                        
	
	printf("%d\n",m);                                       
	printf("%10d\n",m);                                     
	printf("%010d\n",m);                                    
	printf("%-10d\n",m);                                    
	printf("%10ld\n",n);                                    
	printf("%10ld\n",-n);                                   
} 

Output                                                      
                                                               
   12345                                                       
        12345                                                  
   0000012345                                                  
   12345                                                       
       987654                                                  
      -987654                                                  

Fig.4.9 Formatted output of integers



Example 4.10
All the options of printing a real number are illustrated in Fig.4.10.

			PRINTING OF REAL NUMBERS              
Program:   
main()                                                      
{                                                           
	float y = 98.7654;                                      
	printf("%7.4f\n", y);                                   
	printf("%f\n", y);                                      
	printf("%7.2f\n", y);                                   
	printf("%-7.2f\n", y);                                  
	printf("%07.2f\n", y);                                  
	printf("%*.*f", 7, 2, y);                               
	printf("\n");                                           
	printf("%10.2e\n", y);                                  
	printf("%12.4e\n", -y);                                 
	printf("%-10.2e\n", y);                                 
	printf("%e\n", y);                                      
}                                                           
Output  	98.7654                                                     
   		98.765404                                                   
     		98.77                                                     
   		98.77                                                       
   		0098.77                                                     
   		98.77                                                     
   		9.88e+001                                                  
   		-9.8765e+001                                                
   		9.88e+001                                                 
   		9.876540e+001                                                                                             
   
Fig.4.10  Formatted output of real numbers



Example 4.11
Printing of characters and strings is illustrated in Fig.4.11.




PRINTING OF CHARACTERS AND STRINGS        
Program           
                                                               
main()                                                      
{                                                           
	char x = 'A';                                           
	static char  name[20] = "ANIL KUMAR GUPTA";             
	
	printf("OUTPUT OF CHARACTERS\n\n");                     
	printf("%c\n%3c\n%5c\n", x,x,x);                        
	printf("%3c\n%c\n", x,x);                               
	printf("\n");                                           
	
	printf("OUTPUT OF STRINGS\n\n");                        
	printf("%s\n", name);                                   
	printf("%20s\n", name);                                 
	printf("%20.10s\n", name);                              
	printf("%.5s\n", name);                                 
	printf("%-20.10s\n", name);                             
	printf("%5s\n", name);                                  
}                                                           
                                                               
Output                                                      
                                                               
   OUTPUT OF CHARACTERS                                        
                                                               
    A                                                           
      A                                                         
        A                                                       
      A                                                         
    A                                                           
                                                               
   OUTPUT OF STRINGS                                           
                                                               
   ANIL KUMAR GUPTA                                            
       ANIL KUMAR GUPTA                                        
             ANIL KUMAR                                        
   ANIL                                                        
   ANIL KUMAR                                                  
   ANIL KUMAR GUPTA                                            
                                                             

Fig.4.11 Printing of characters and strings


CHAPTER 5:


Example 5.1
The program in Fig.5.3 reads four values a, b, c, and d from the terminal and evaluates the ratio of (a+b) to (c-d) and prints the result, if c-d is not equal to zero.

The program given in Fig.5.3 has been run for two sets of data to see that the paths function properly.  The result of the first run is printed as 

            Ratio =  -3.181818 

ILLUSTRATION OF if STATEMENT

Program             

main()                                                      
{                                                           
	int a, b, c, d;                                         
	float ratio;                                            
	
	printf("Enter four integer values\n");                  
	scanf("%d %d %d %d", &a, &b, &c, &d);                   
	
	if (c-d  != 0)  /* Execute statement block */                                        
	{                                                     
		ratio = (float)(a+b)/(float)(c-d);                  
		printf("Ratio = %f\n", ratio);                      
	}                                                     
}                                                           
                 
                                              
Output                                                      
                                                               
   Enter four integer values                                   
   12  23  34  45                                              
   Ratio = -3.181818                                           
                                                               
   Enter four integer values                                   
   12  23  34  34                                              
                                                               

Fig. 5.3  Illustration of simple if statement




Example 5.2
The program in Fig.5.4 counts the number of boys whose weight is less than 50 kgs and height is greater than 170 cm.

The program has to test two conditions, one for weight and another for height.  This is done using the compound relation

            if (weight < 50 && height > 170)

This would have been equivalently done using two if statements as follows:

            if  (weight < 50)
                if  (height > 170)
                    count = count +1;

If the value of weight is less than 50, then the following statement is executed, which in turn is another if statement.  This if statement tests height and if the height is greater than 170, then the count is incremented by 1.

COUNTING WITH if
Program
   
main()                                                      
{                                                           
	int count, i;                                           
	float weight, height;                                   
	count = 0;                                              
	printf("Enter weight and height for 10 boys\n");        
	
	for (i =1; i <= 10; i++)                                
	{                                                       
		scanf("%f %f", &weight, &height);                    
		if (weight < 50 && height > 170)                     
		count = count + 1;                                
	}                                                       
	printf("Number of boys with weight < 50 kgs\n");        
	printf("and height > 170 cm = %d\n", count);            
}                                                        
                                                    
                                                               
   
Output                                                      
                                                               
   Enter weight and height for 10 boys                         
   45  176.5                                                   
   55  174.2                                                   
   47  168.0                                                   
   49  170.7                                                   
   54  169.0                                                   
   53  170.5                                                   
   49  167.0                                                   
   48  175.0                                                   
   47  167                                                     
   51  170                                                     
   Number of boys with weight < 50 kgs                         
   and height > 170 cm = 3                                     


Fig. 5.4  Use of  if  for counting




Example 5.3
A program to evaluate the power series
                                  x2      x3             xn
           ex  =  1 + x + ---  +  --- + ..... + ---- , 0 < x < 1
                                   2!      3!              n!	
is given in Fig. 5.6.  It uses if......else to test the accuracy.
The power series contains the recurrence relationship of the type

                                 
           Tn   =  Tn-1  (---)   for n > 1
                                

           T1   =  x             for n = 1

           T0   =  1

If Tn-1 (usually known as previous term) is known, then Tn (known as present term) can be easily found by multiplying the previous term by x/n.  Then 

            ex   =  T0 +  T1  +  T2 + ...... +  Tn  =  sum


EXPERIMENT WITH if...else STATEMENT
Program             
                                                            
   #define ACCURACY 0.0001                                     
                                                               
   main()                                                     
   {                                                           
       int n, count;                                           
       float x, term, sum;                                     
                                                               
       printf("Enter value of x:");                            
       scanf("%f", &x);                                        
                                                               
       n = term = sum = count = 1;                             
                                                               
       while (n <= 100)                                        
       {                                                       
          term = term * x/n;                                   
          sum = sum + term;                                    
          count = count + 1;                                   
          if (term < ACCURACY)                                 
             n = 999;                                          
          else                                                 
             n = n + 1;                                        
       }                                                       
                                                               
       printf("Terms = %d Sum = %f\n", count, sum);            
                                                               
   }                                                           
                                                               
   
    
                                                        
Output                                                     
                                                               
   Enter value of x:0                                          
   Terms = 2 Sum = 1.000000                                    
                              
   Enter value of x:0.1                                        
   Terms = 5 Sum = 1.105171                                    
                                                               
   Enter value of x:0.5                                        
   Terms = 7 Sum = 1.648720                                    
                                                               
   Enter value of x:0.75                                       
   Terms = 8 Sum = 2.116997                                    
                                                               
   Enter value of x:0.99                                       
   Terms = 9 Sum = 2.691232                                    
                                                               
   Enter value of x:1                                          
   Terms = 9 Sum = 2.718279     

                              
Fig 5.6  Illustration of if...else statement



Example 5.4
The program in Fig. 5.8 selects and prints the largest of the three numbers using nested if....else statements.


SELECTING THE LARGEST OF THREE VALUES

Program  

main()                                                      
{
	float A, B, C;                                              
	
	printf("Enter three values\n");                             
	scanf("%f %f %f", &A, &B, &C);                               
	
	printf("\nLargest value is  ");                                 
	
	if (A>B)                                                   
	{
		if (A>C)                                               
		printf("%f\n", A);                                  
		else                                                   
		printf("%f\n", C);                                 
	}                                                       
	else                                                      
	{                                                        
		if (C>B)                                               
		printf("%f\n", C);                                 
		else                                                   
		printf("%f\n", B);                                 
	}                                                       
}                                                          
                                                              
Output                                                     
                                                              
   Enter three values                                          
   23445  67379  88843                                         
                                                               
   Largest value is  88843.000000                              


Fig 5.8  Selecting the largest of three numbers



Example 5.5
An electric power distribution company charges its domestic consumers as follows:
          Consumption Units               Rate of Charge
              0 - 200                        Rs. 0.50 per unit
            201 - 400                        Rs. 100 plus Rs.0.65 per unit  excess of 200
            401 - 600                        Rs. 230 plus Rs.0.80 per unit excess of 400
            601 and above                    Rs. 390 plus Rs.1.00 per unit excess of 600
The program in Fig.5.10 reads the customer number and power consumed and prints the amount to be paid by the customer.


USE OF else if LADDER

Program 

main()                                                      
{                                                           
	int  units, custnum;                                    
	float charges;                                          
	
	printf("Enter CUSTOMER NO. and UNITS consumed\n");      
	scanf("%d %d", &custnum, &units);                       
	
	if (units <= 200)                                       
		charges = 0.5 * units;                               
	else 
		if (units <= 400)                                  
			charges = 100 + 0.65 * (units - 200);                   
		else 
			if (units <= 600)                             
				charges = 230 + 0.8 * (units - 400);       
			else                                          
				charges = 390 + (units - 600);             
	
	printf("\n\nCustomer No: %d: Charges = %.2f\n", custnum, charges);                               
}

Output                                                      
                                                               
   Enter CUSTOMER NO. and UNITS consumed 101  150              
   Customer No:101 Charges = 75.00                             
                                                               
   Enter CUSTOMER NO. and UNITS consumed 202  225              
   Customer No:202 Charges = 116.25                            
                                                               
   Enter CUSTOMER NO. and UNITS consumed 303  375              
   Customer No:303 Charges = 213.75                            
                                                               
   Enter CUSTOMER NO. and UNITS consumed 404  520              
   Customer No:404 Charges = 326.00                            
                                                              
   Enter CUSTOMER NO. and UNITS consumed 505  625              
   Customer No:505 Charges = 415.00      
                      

Fig. 5.10  Illustration of else..if ladder




Example 5.6
An employee can apply for a loan at the beginning of every six months, but he will be sanctioned the amount according to the following company rules:  
Rule 1 :  An employee cannot enjoy more than two loans at any point of time.
Rule 2 :  Maximum permissible total loan is limited and depends upon the category of  the employee.
A program to process loan applications and to sanction loans is given in Fig. 5.12.

CONDITIONAL OPERATOR
Program               

#define   MAXLOAN  50000                                    

main()                                                      
{                                                           
	long int loan1, loan2, loan3, sancloan, sum23;          
	
	printf("Enter the values of previous two loans:\n");    
	scanf(" %ld %ld", &loan1, &loan2);                      
	printf("\nEnter the value of new loan:\n");             
	scanf(" %ld", &loan3);                                  
	sum23 = loan2 + loan3;                                  
	sancloan = (loan1>0)? 0 : ((sum23>MAXLOAN)? MAXLOAN - loan2 : loan3);                  
	printf("\n\n");                                                        
	printf("Previous loans pending:\n%ld %ld\n",loan1,loan2);                             
	printf("Loan requested  = %ld\n", loan3);                             
	printf("Loan sanctioned = %ld\n", sancloan);                          
	
}                                                                          
   
   
Output                                                                           
                                                               
   Enter the values of previous two loans:                     
   0    20000                                                  
   Enter the value of new loan:                                
   45000                                                       
   Previous loans pending:                                     
   0   20000                                                   
   Loan requested  = 45000                                     
   Loan sanctioned = 30000                                     
   Enter the values of previous two loans:                     
   1000   15000                                                
   Enter the value of new loan:                                
   25000                                                       
   Previous loans pending:                                     
   1000   15000                                                
   Loan requested  = 25000                                     
   Loan sanctioned = 0                                         


Fig 5.12  Illustration of the conditional operator





Example 5.7
Program presented in Fig.5.13 illustrates the use of the goto statement.
The program evaluates the square root for five numbers.  The variable count keeps the count of numbers read.  When count is less than or equal to 5, goto read; directs the control to the label read; otherwise, the program prints a message and stops.


USE OF goto STATEMENT
Program 

#include <math.h>                                          

main()                                                      
{                                                           
	double x, y;                                           
	int count;                                             
	
	count = 1;                                             
	
	printf("Enter FIVE real values in a LINE \n");         
	
	read:                                                       
	scanf("%lf", &x);                                      
	printf("\n");                                          
	
	if (x < 0)                                             
		printf("Value - %d is negative\n",count);           
	else                                                   
	{                                                      
		y = sqrt(x);                                        
		printf("%lf\t %lf\n", x, y);                        
	}
	
	count = count + 1;                                     
	
	if (count <= 5)                                        
	goto read;                                                  
	printf("\nEnd of computation");                        
}                                                           
                                                               


Output                                                      

   Enter FIVE real values in a LINE                            
   50.70  40  -36  75  11.25                                   
   50.750000        7.123903                                   
   40.000000        6.324555                                   
   Value -3 is negative                                        
   75.000000        8.660254                                   
   11.250000        3.354102                                   
   End of computation   
                                       
Fig.5.13 Use of the goto statement

CHAPTER 6:


Example 6.1
A program to evaluate the equation
                   y = xn
when n is a non-negative integer, is given in Fig.6.2


The variable y is initialized to 1 and then multiplied by x, n times using the while loop.  The loop control variable, count is initialized outside the loop and incremented inside the loop.  When the value of count becomes greater than n, the control exists the loop. 

EXAMPLE OF while STATEMENT
Program   

main()                                                      
{                                                           
	int count, n;                                           
	float x, y;                                             
	
	printf("Enter the values of x and n : ");               
	scanf("%f %d", &x, &n);                                 
	
	y = 1.0;                                                
	count = 1;       		/* Initialisation */                                            
	
	/* LOOP BEGINs */                                       
	
	while ( count <= n)      /* Testing */                                  
	{                                                       
		y = y*x;                                           
		count++;           /* Incrementing */                                    
	}                                                       
	/* END OF LOOP */                                       
	printf("\nx = %f; n = %d; x to power n = %f\n",x,n,y);  
} 
                                           
  
Output                                                      
                                                               
   Enter the values of x and n : 2.5  4                        
   x = 2.500000; n = 4; x to power n = 39.062500               
                                                             
   Enter the values of x and n : 0.5  4                        
   x = 0.500000; n = 4; x to power n = 0.062500

Fig.6.2 Program to compute x to the power n using while loop







Example 6.2
A program to print the multiplication table from 1 x 1 to  12 x 10 as shown below is given in Fig. 6.3.

               1		2		3		4     	.........  10
               2		4		6		8    	.........  20
               3 		6		9		12	    .........  30
               4							    .........  40
               -                                    					-
               -                                   					-
               -                                    					-
              12    	.		.		.	    .........  120

This program contains two do.... while loops in nested form.  The outer loop is controlled by the variable row and executed 12 times.  The inner loop is controlled by the variable column and is executed 10 times, each time the outer loop is executed.  That is, the inner loop is executed a total of 120 times, each time printing a value in the table.
PRINTING OF MULTIPLICATION TABLE
Program:           
   #define COLMAX 10                                              
   #define ROWMAX 12                                              
                                                               
main()                                                         
{                                                              
	int row,column, y;                                         
	
	row = 1;                                                
	printf("          MULTIPLICATION TABLE           \n");  
	printf("-----------------------------------------\n");  
	do    /*......OUTER LOOP BEGINS........*/                                                                       
	{                                                          
		column = 1;                                        
		
		do   /*.......INNER LOOP BEGINS.......*/                                                           
		{                                                     
			y = row * column;                                
			printf("%4d", y);                                
			column = column + 1;                             
		}                                                     
		while (column <= COLMAX); /*... INNER LOOP ENDS ...*/                        
		
		printf("\n");                                         
		row = row + 1;                                        
	}                                                          
	while (row <= ROWMAX);/*.....   OUTER LOOP ENDS   .....*/                     
	
	printf("-----------------------------------------\n");     
}                                                              

Output                                             
             		MULTIPLICATION TABLE                              
   -------------------------------------------------------                   
   	1   	2   	3   	4   	5   	6   	7   	8   	9  	10          
   	2   	4   	6   	8  	10  	12  	14  	16  	18  	20                    
   	3   	6   	9  	12  	15  	18  	21  	24  	27  	30                    
   	4   	8  	12  	16  	20  	24  	28  	32  	36  	40                    
   	5  	10  	15  	20  	25  	30  	35  	40  	45  	50                    
   	6  	12  	18  	24  	30  	36  	42  	48  	54  	60                    
   	7  	14  	21  	28  	35  	42  	49  	56  	63  	70                    
   	8  	16  	24  	32  	40  	48  	56  	64  	72  	80                    
   	9  	18  	27  	36  	45  	54  	63  	72  	81  	90                    
  	10  	20  	30  	40  	50  	60  	70  	80  	90 	100                    
  	11  	22  	33  	44  	55  	66  	77  	88  	99 	110                    
  	12  	24  	36  	48  	60  	72  	84  	96 	108 	120   
-------------------------------------------------------  
      
Fig.6.3   Printing of a multiplication table using do...while loop



Example 6.3
The program in Fig.6.4 uses a for loop to print the "Powers of 2" table for the power 0 to 20, both positive and negative.

The program evaluates the value 
         p = 2 n
successively by multiplying 2 by itself n times.
                          1
         q = 2-n = ----
                          p	

Note that we have declared p as a long int and q as a double.  


Additional Features of for Loop

The for loop in C has several capabilities that are not found in other loop constructs.  For example, more than one variable can be initialized at a time in the for statement.  The statements
              p = 1;
      for (n=0; n<17; ++n)

can be rewritten as 

              for (p=1, n=0; n<17; ++n)



USE OF for LOOP
Program:                    

main()                                                      
{                                                               
	long int p;                                             
	int      n;                                                    
	double   q;                                             
	
	printf("------------------------------------------\n");   
	printf(" 2 to power n       n       2 to power -n\n");   
	printf("------------------------------------------\n");   
	
	p = 1;                                                      
	
	for (n = 0; n < 21 ; ++n)    /* LOOP BEGINS */              
	{                                                           
		if (n == 0)                                             
			p = 1;                                               
		else                                                    
			p = p * 2;                                           
			q = 1.0/(double)p ;                                 
			printf("%10ld %10d %20.12lf\n", p, n, q);                 
	}                           /* LOOP ENDS   */               
	
	printf("------------------------------------------\n");     
} 

Output     -----------------------------------------------                 
    			2 to power n   n       2 to power -n                   
   		-----------------------------------------------                 
            1          0       1.000000000000                  
            2          1       0.500000000000                  
            4          2       0.250000000000                  
            8          3       0.125000000000                  
           16          4       0.062500000000                                    
           32          5       0.031250000000                  
           64          6       0.015625000000                  
          128          7       0.007812500000                  
          256          8       0.003906250000                  
          512          9       0.001953125000                  
         1024         10       0.000976562500                  
         2048         11       0.000488281250                  
         4096         12       0.000244140625                  
         8192         13       0.000122070313                  
        16384         14       0.000061035156                  
        32768         15       0.000030517578                  
        65536         16       0.000015258789                  
       131072         17       0.000007629395                  
       262144         18       0.000003814697                  
       524288         19       0.000001907349                  
      1048576         20       0.000000953674       
	-----------------------------------------------             

Fig.6.4   Program to print 'Power of 2' table using for loop

Example 6.4
A class of n students take an annual examination in m subjects.  A program to read the marks obtained by each student in various subjects and to compute and print the total marks obtained by each of them is given in Fig.6.5.


The program uses two for loops, one for controlling the number of students and the other for controlling the number of subjects.  Since both the number of students and the number of subjects are requested by the program, the program may be used for a class of any size and any number of subjects.

The outer loop includes three parts: 
    (1) reading of roll-numbers of students, one after another, 
    (2)	inner loop, where the marks are read and totaled for each student, and 
    (3)	printing of total marks and declaration of grades.
ILLUSTRATION OF NESTED LOOPS
Program               

#define FIRST   360                                            
#define SECOND  240                                         
main()                                                        
{                                                             
	int n, m, i, j, roll_number, marks, total;                            
	
	printf("Enter number of students and subjects\n");        
	scanf("%d %d", &n, &m);                                   
	printf("\n");                                             
	
	for (i = 1; i <= n ; ++i)                                 
	{                                                         
		printf("Enter roll_number : ");                     
		scanf("%d", &roll_number);                            
		total = 0 ;                                         
		printf("\nEnter marks of %d subjects for ROLL NO %d\n", m, roll_number);                         
		
		for (j = 1; j <= m; j++)                              
		{                                                     
			scanf("%d", &marks);                              
			total = total + marks;                          
		}                                   
		
		printf("TOTAL MARKS = %d ", total);                    
		
		if (total >= FIRST)                                   
			printf("( First Division )\n\n");                   
		else 
			if (total >= SECOND)                             
				printf("( Second Division )\n\n");               
			else                                             
				printf("( ***  F A I L  *** )\n\n");               
	}                                                         
}   
                                                   
        
Output 	Enter number of students and subjects                       
		 3	6   
   Enter roll_number : 8701                                    
   Enter marks of 6 subjects for ROLL NO 8701                  
   81  75  83  45  61  59                                      
   TOTAL MARKS = 404 ( First Division )                        
                                                               
   Enter roll_number : 8702                                    
   Enter marks of 6 subjects for ROLL NO 8702                  
   51  49  55  47  65  41                                      
   TOTAL MARKS = 308 ( Second Division )                       
                                                               
   Enter roll_number : 8704                                    
   Enter marks of 6 subjects for ROLL NO 8704                  
   40  19  31  47  39  25                                      
   TOTAL MARKS = 201 ( ***  F A I L  *** )                                                             
               
Fig.6.5 Illustration of nested for loops


Example 6.5
The program in Fig.6.8 illustrates the use of the break statement in a C program.

The program reads a list of positive values and calculates their average.  The for loop is written to read 1000 values.  However, if we want the program to calculate the average of any set of values less than 1000, then we must enter a 'negative' number after the last value in the list, to mark the end of input.

USE OF break IN A PROGRAM
Program

main()                                                          
{                                                               
	int m;                                                      
	float x, sum, average;                                      
	
	printf("This program computes the average of a          
					set of numbers\n");                        
	printf("Enter values one after another\n");                 
	printf("Enter a NEGATIVE number at the end.\n\n");             
	sum = 0;                                                
	for (m = 1 ; m < = 1000 ; ++m)                               
	{                                                           
		scanf("%f", &x);                                        
		if (x < 0)                                              
		break;                                               
		sum += x ;                                          
	}   
	
	average = sum/(float)(m-1);                             
	printf("\n");                                           
	printf("Number of values = %d\n", m-1);                     
	printf("Sum              = %f\n", sum);                 
	printf("Average          = %f\n", average);             
}                                                               
                                                               
Output                                                      
                                                               
   This program computes the average of a set of numbers       
   Enter values one after another                              
   Enter a NEGATIVE number at the end.                         
                                                               
   21  23  24  22  26  22  -1                                  
                                                               
   Number of values = 6                                        
   Sum              = 138.000000                               
   Average          = 23.000000                                
    

Fig.6.8  Use of break in a program



Example 6.6
A program to evaluate the series
              1
            ------ =  1 + x + x2 + x3 + ..... + xn
              1-x
for -1 < x < 1 with  0.01 per cent accuracy is given in Fig.6.9.  The goto statement is used to exit the loop on achieving the desired accuracy.

We have used the for statement to perform the repeated addition of each of the terms in the series.  Since it is an infinite series, the evaluation of the function is terminated when the term xn reaches the desired accuracy.  The value of n that decides the number of loop operations is not known and therefore we have decided arbitrarily a value of 100, which may or may not result in the desired level of accuracy.








EXAMPLE OF exit WITH goto STATEMENT
Program 
   
#define   LOOP       100                                        
#define   ACCURACY   0.0001                                     
main()                                                          
{                                                               
	int n;                                                      
	float x, term, sum;                                         
	
	printf("Input value of x : ");                               
	scanf("%f", &x);                                        
	sum = 0 ;                                               
	
	for (term = 1, n = 1 ; n < = LOOP ; ++n)                     
	{                                                           
		sum += term ;                                       
		if (term < = ACCURACY)                               
		goto output; /* EXIT FROM THE LOOP */                
		term *= x ;                                         
	}                                                       
	
	printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");             
	printf("TO ACHIEVE DESIRED ACCURACY\n");                    
	goto end;                                                   
	output:                                                     
	printf("\nEXIT FROM LOOP\n");                                 
	printf("Sum = %f;  No.of terms = %d\n", sum, n);             
	end:                                                        
	;       /* Null Statement */                                                    
}                                                               
      
                                                               
 Output                                                      
   Input value of x : .21                                      
   EXIT FROM LOOP                                              
   Sum = 1.265800;  No.of terms = 7                            
   Input value of x : .75                                      
   EXIT FROM LOOP                                              
   Sum = 3.999774;  No.of terms = 34                           
   Input value of x : .99                                      
   FINAL VALUE OF N IS NOT SUFFICIENT                          
   TO ACHIEVE DESIRED ACCURACY 
                                
Fig.6.9 Use of goto to exit from a loop



Example 6.7
The program in Fig.6.11 illustrates the use of continue statement.

The program evaluates the square root of a series of numbers and prints the results.  The process stops when the number 9999 is typed in.  
In case, the series contains any negative numbers, the process of evaluation of square root should be bypassed for such numbers because the square root of a negative number is not defined.  The continue statement is used to achieve this.  The program also prints a message saying that the number is negative and keeps an account of negative numbers.

The final output includes the number of positive values evaluated and the number of negative items encountered.


USE OF continue STATEMENT
Program:             
   #include <math.h>                                           
                                                               
   main()                                                      
   {                                                           
       int count, negative;                                    
       double number, sqroot;                                      
                                                                   
       printf("Enter 9999 to STOP\n");                             
       count = 0 ;                                             
       negative = 0 ;                                          
                                                                   
       while (count < = 100)                                        
       {                                                           
           printf("Enter a number : ");                        
           scanf("%lf", &number);                              
           if (number == 9999)                                 
              break;     /* EXIT FROM THE LOOP */              
           if (number < 0)                                         
           {                                                       
              printf("Number is negative\n\n");                      
              negative++ ;                                     
              continue;  /* SKIP REST OF THE LOOP */               
           }                                                       
           sqroot = sqrt(number);                                  
           printf("Number      = %lf\n Square root = %lf\n\n", number, sqroot);                  
           count++ ;                                           
       }                                                       
       printf("Number of items done = %d\n", count);
	   printf("\n\nNegative items       = %d\n", negative);                  
       printf("END OF DATA\n");                                    
   }    
                                                           
                                                                     
   




Output                                                      
                                                               
   Enter 9999 to STOP                                          
   Enter a number : 25.0                                       
   Number      = 25.000000                                     
   Square root = 5.000000                                      
                                                               
   Enter a number : 40.5                                       
   Number      = 40.500000                                     
   Square root = 6.363961                                      
                                                               
   Enter a number : -9                                         
   Number is negative                                          
                                                               
   Enter a number : 16                                         
   Number      = 16.000000                                     
   Square root = 4.000000                                      
                                                               
   Enter a number : -14.75                                     
   Number is negative                                          
                                                               
   Enter a number : 80                                         
   Number      = 80.000000                                     
   Square root = 8.944272                                      
                                                               
   Enter a number : 9999                                       
   Number of items done = 4                                    
   Negative items       = 2                                    
   END OF DATA                                                 
_______________________________________________________________ 

Fig.6.11  Use of continue statement



CHAPTER 7:



Example 7.1
Write a program using a single-subscripted variable to evaluate the following expressions:
                            10
           Total =      ?  x i2
                              i=1
The values of x1,x2,....are read from the terminal.

Program in Fig.7.1 uses a one-dimensional array x to read the values and compute the sum of their squares.



PROGRAM SHOWING ONE-DIMENSIONAL ARRAY
Program :    
main()                                                      
   {                                                           
       int    i ;                                              
       float  x[10], value, total ;                            
                                                               
 /* . . . . . .READING VALUES INTO ARRAY . . . . . . */   
                                                              
       printf("ENTER 10 REAL NUMBERS\n") ;                     
                                                               
       for( i = 0 ; i < 10 ; i++ )                             
       {                                                       
          scanf("%f", &value) ;                                
          x[i] = value ;                                       
       }                                                       
/* . . . . . .  .COMPUTATION OF TOTAL . . . . . . .*/   
                                                               
       total = 0.0 ;                                           
       for( i = 0 ; i < 10 ; i++ )                             
          total = total + x[i] * x[i] ;                        
                                                               
/*. . .  . PRINTING OF x[i] VALUES AND TOTAL . . . */   
                                                               
       printf("\n");                                           
       for( i = 0 ; i < 10 ; i++ )                             
          printf("x[%2d] = %5.2f\n", i+1, x[i]) ;              
                                                               
       printf("\ntotal = %.2f\n", total) ;                     
   } 
 
Output                                                      
   ENTER 10 REAL NUMBERS                                       
   1.1  2.2  3.3  4.4  5.5  6.6  7.7  8.8  9.9  10.10                   
                                                               
   x[ 1] =  1.10                                               
   x[ 2] =  2.20                                               
   x[ 3] =  3.30                                               
   x[ 4] =  4.40                                               
   x[ 5] =  5.50                                               
   x[ 6] =  6.60                                               
   x[ 7] =  7.70                                               
   x[ 8] =  8.80                                               
   x[ 9] =  9.90                                               
   x[10] = 10.10                                               
                                                               
   Total = 446.86                                             
       
Fig.7.1   Program to illustrate one-dimensional array



Example 7.2
Given below is the list of marks obtained by a class of 50 students in an annual examination.
43  65  51  27  79  11  56  61  82  09  25  36  07  49  55  63  74  81  49  37  
40  49  16  75  87  91  33  24  58  78  65  56  76  67  45  54  36  63  12  21 
73  49  51  19  39  49  68  93  85  59
Write a program to count the number of students belonging to each of following groups of marks: 0-9, 10-19, 20-29,.....,100.

The program coded in Fig.7.2 uses the array group containing 11 elements, one for each range of marks. Each element counts those values falling within the range of values it represents. 

For any value, we can determine the correct group element by dividing the value by 10. For example, consider the value 59. The integer division of 59 by 10 yields 5. This is the element into which 59 is counted.

PROGRAM FOR FREQUENCY COUNTING
Program   
   #define   MAXVAL    50                                      
   #define   COUNTER   11                                    
   main()                                                      
   {                                                           
       float        value[MAXVAL];                             
       int          i, low, high;                              
       int   group[COUNTER] = {0,0,0,0,0,0,0,0,0,0,0};  
  /* . . . . . . . .READING AND COUNTING . . . .  . .*/
       for( i = 0 ; i < MAXVAL ; i++ )                         
       {                                                                 
/*. . . . . . . .READING OF VALUES . . . . . . . . */
          scanf("%f", &value[i]) ;                             
     	/*. . . . . .COUNTING FREQUENCY OF GROUPS. . . . . */
          ++ group[ (int) ( value[i] + 0.5 ) / 10] ;           
       }                                                       
      	/* . . . .PRINTING OF FREQUENCY TABLE . . . . . . .*/
       printf("\n");                                           
       printf(" GROUP     RANGE     FREQUENCY\n\n") ;          
       for( i = 0 ; i < COUNTER ; i++ )                        
       {                                                       
          low  = i * 10 ;                                      
          if(i == 10)                                          
            high = 100 ;                                       
          else                                                 
            high = low + 9 ;                                   
          printf("  %2d    %3d to %3d       %d\n",             
                  i+1, low, high, group[i] ) ;                 
       }                                                       
   }            
                                               

Output  	
43 65 51 27 79 11 56 61 82 09 25 36 07 49 55 63 74
81 49 37 40 49 16 75 87 91 33 24 58 78 65 56 76 67 
45 54 36 63 12 21 73 49 51 19 39 49 68 93 85 59  


                       
    GROUP     	  RANGE     		FREQUENCY                             
      1      	0   to   9       	2                                  
      2     	10  to  19       	4                                  
      3     	20  to  29       	4                                  
      4     	30  to  39       	5                                  
      5     	40  to  49       	8                                  
      6     	50  to  59       	8                                  
      7     	60  to  69       	7  
      8     	70  to  79       	6                                  
      9     	80  to  89       	4                                  
10     	90  to  99       	2 
     11    	100 to 100     	0 
Fig.7.2  Program for frequency counting



Example 7.3
Write a program using a two-dimensional array to compute and print the following information from the table of data discussed above:
      (a) Total value of sales by each girl.
      (b) Total value of each item sold.
      (c) Grand total of sales of all items by all girls.


The program and its output are shown in Fig.7.4. The program uses the variable value in two-dimensions with the index i representing girls and j representing items. The following equations are used in computing the results:

                                                      2
   (a) 	Total sales by m th girl =   ?  value [m][j]
        	(girl_total[m])                  j = 0

                                                   	   3
   (b) 	Total value of nth item =    ?   value [i][n]
        	(item_total[n])                   i = 0  
 
                                  	        3           2
   (c) 	Grand total 	=    ?        ? value[i][j]
                           i = 0      j = 0
 
                      		      3
                		=    ?     girl_total[i]
                   		    i = 0

                    		     2
               		    =  ?        item_total[j]
                 		    j = 0

PROGRAM SHOWING TWO-DIMENSIONAL ARRAYS
Program:
   #define     MAXGIRLS     4                                  
   #define     MAXITEMS     3                                  
   main()                                                      
   {                                                           
       int   value[MAXGIRLS][MAXITEMS];                        
       int   girl_total[MAXGIRLS] , item_total[MAXITEMS];      
       int   i, j, grand_total;                                
                                                               
   /*.......READING OF VALUES AND COMPUTING girl_total ...*/   
                                                               
       printf("Input data\n");                                
       printf("Enter values, one at a time, row-wise\n\n");    
                                                               
       for( i = 0 ; i < MAXGIRLS ; i++ )                       
       {                                                       
          girl_total[i] = 0;                                   
          for( j = 0 ; j < MAXITEMS ; j++ )                    
          {                                                    
             scanf("%d", &value[i][j]);                        
             girl_total[i] = girl_total[i] + value[i][j];      
          }                                                    
       }                                                       
  /*.......COMPUTING item_total..........................*/   
                                                               
       for( j = 0 ; j < MAXITEMS ; j++ )                       
       {                                                       
          item_total[j] = 0;                                   
          for( i =0 ; i < MAXGIRLS ; i++ )                     
             item_total[j] = item_total[j] + value[i][j];      
       }                                                       
                                                               
 
/*.......COMPUTING grand_total.........................*/   
                                                               
       grand_total = 0;                                        
       for( i =0 ; i < MAXGIRLS ; i++ )                        
          grand_total = grand_total + girl_total[i];           
                                                               
/* .......PRINTING OF RESULTS...........................*/   
                                                               
       printf("\n GIRLS TOTALS\n\n");                          
       for( i = 0 ; i < MAXGIRLS ; i++ )                       
          printf("Salesgirl[%d] = %d\n", i+1, girl_total[i] ); 
       printf("\n ITEM  TOTALS\n\n");                          
       for( j = 0 ; j < MAXITEMS ; j++ )                       
          printf("Item[%d] = %d\n", j+1 , item_total[j] );     
       printf("\nGrand Total = %d\n", grand_total);            
   }                                                           
                                                               
Output                                                      
                                                               
   Input data                                                  
   Enter values, one at a time, row_wise                       
                                                               
   310  257  365                                               
   210  190  325                                               
   405  235  240                                               
   260  300  380                                                                                                      

   GIRLS TOTALS                                               
                                                               
   Salesgirl[1] = 950                                          
   Salesgirl[2] = 725                                          
   Salesgirl[3] = 880                                          
   Salesgirl[4] = 940                                          
                                                               
    ITEM  TOTALS                                               
                                                               
   Item[1] = 1185                                              
   Item[2] = 1000                                              
   Item[3] = 1310                                              
                                                               
   Grand Total = 3495                                          


Fig.7.4 Illustration of two-dimensional arrays.

Example 7.4
Write a program to compute and print a multiplication table for numbers 1 to 5 as shown below:

1
2
3
4
5
1
1
2
3
4
5
2
2
4
6
8
10
3
3
6
.
.
.
4
4
8
.
.
.
5
5
10
.
.
25
The program shown in Fig.7.5 uses a two-dimensional array to store the table values. Each value is calculated using the control variables of the nested for loops as follows:
              product(i,j) = row * column
where i denotes rows and j denotes columns of the product table. Since the indices i and j ranges from 0 to 4, we have introduced the following transformation:
              row = i+1
              column = j+1
			PROGRAM TO PRINT MULTIPLICATION TABLE        
Program: 
   #define    ROWS     5                                       
   #define    COLUMNS  5                                       
   main()                                                      
   {   int   row, column, product[ROWS][COLUMNS] ;             
       int   i, j ;                                            
       printf("   MULTIPLICATION TABLE\n\n") ;                 
       printf("    ") ;                                        
       for( j = 1 ; j <= COLUMNS ; j++ )                       
         printf("%4d" , j ) ;                                  
       printf("\n") ;                                          
       printf("-------------------------\n");                  
       for( i = 0 ; i < ROWS ; i++ )                           
       {   row = i + 1 ;                                       
           printf("%2d |", row) ;                              
           for( j = 1 ; j <= COLUMNS ; j++ )                   
           {  column = j ;                                     
              product[i][j] = row * column ;                   
              printf("%4d", product[i][j] ) ;                  
           }                                                   
           printf("\n") ;                                      
       }                                                       
   }                                                           
                                                               
   Output                                                      
                                                            
        MULTIPLICATION TABLE                                     
         	 1   2   3   4   5                                    
    	1    1   2   3   4   5                                    
    	2    2   4   6   8  10                                    
    	3    3   6   9  12  15                                    
    	4    4   8  12  16  20                                    
   	    5    5  10  15  20  25                                    

Fig.7.5   Program to print multiplication table using two-dimensional array




Example 7.5
A survey to know the popularity of four cars (Ambassador, Fiat, Dolphin and Maruti) was conducted in four cities (Bombay, Calcutta, Delhi and Madras). Each person surveyed was asked to give his city and the type of car he was using. The results, in coded form, are tabulated as follows:

                     M	1	C	2	B	1	D	3	M	2	B	4
                     C		1	D	3	M	4	B	2	D	1	C	3
                     D		4	D	4	M	1	M	1	B	3	B	3
                     C		1	C	1	C	2	M	4	M	4	C	2
                     D		1	C	2	B	3	M	1	B	1	C	2
                     D		3	M	4	C	1	D	2	M	3	B	4
Codes represent the following information:
               M - Madras      1 - Ambassador
               D 每 Delhi         2 - Fiat
               C 每 Calcutta     3 - Dolphin
               B 每 Bombay     4 - Maruti
Write a program to produce a table showing popularity of various cars in four cities.  

A two-dimensional array frequency is used as an accumulator to store the number of cars used, under various categories in each city. For example, the element frequency [i][j] denotes the number of cars of type j used in city i. The frequency is declared as an array of size 5x5 and all the elements are initialized to zero.  

The program shown in fig.7.6 reads the city code and the car code, one set after another, from the terminal. Tabulation ends when the letter X is read in place of a city code.


PROGRAM TO TABULATE SURVEY DATA
Program
   main()                                                      
   {  
       int  i, j, car;                                  
       int  frequency[5][5] = { {0},{0},{0},{0},{0} };  
       char city;                                       
       printf("For each person, enter the city code \n");      
       printf("followed by the car code.\n");                  
       printf("Enter the letter X to indicate end.\n");        
   /*. . . . . . TABULATION BEGINS  . . . . . */
       for( i = 1 ; i < 100 ; i++ )                            
       {                                                       
          scanf("%c", &city );                                 
          if( city == 'X' )                                    
            break;                                             
          scanf("%d", &car ); 
                                 
          switch(city)                                         
          {                                                    
               
     case 'B' :  frequency[1][car]++;               
                            break;                             
                case 'C' :  frequency[2][car]++;               
                            break;                             
                case 'D' :  frequency[3][car]++;               
                            break;                             
                case 'M' :  frequency[4][car]++;               
                            break;                             
          }                                                    
       }                                                       
/*. . . . .TABULATION COMPLETED AND PRINTING BEGINS. . . .*/
       printf("\n\n");                                         
       printf("              POPULARITY  TABLE\n\n");          
       printf("-------------------------------------------\n");
       printf("City     Ambassador  Fiat  Dolphin  Maruti \n"); 
       printf("-------------------------------------------\n");
       for( i = 1 ; i <= 4 ; i++ )                             
       {                                                       
          
     switch(i)                                            
          {                                                    
                case 1 :  printf("Bombay    ") ;               
                          break ;                              
                case 2 :  printf("Calcutta  ") ;               
                          break ;                              
                case 3 :  printf("Delhi     ") ;               
                          break ;                              
                case 4 :  printf("Madras    ") ;               
                          break ;                              
          }                                                    
          for( j = 1 ; j <= 4 ; j++ )                          
             printf("%7d", frequency[i][j] ) ;                 
          printf("\n") ;                                       
       }                                                       
       printf("-------------------------------------------\n");
    /*. . . . . . . . . PRINTING ENDS. . . . . . . . . . .*/
   }                                                           
                                                               
   Output                                                      
                                                               
   For each person, enter the city code                        
   followed by the car code.                                   
   Enter the letter X to indicate end.
                         
   M 1 C 2 B 1 D 3 M 2 B 4                                     
   C 1 D 3 M 4 B 2 D 1 C 3                                     
   D 4 D 4 M 1 M 1 B 3 B 3                                     
   C 1 C 1 C 2 M 4 M 4 C 2                                     
   D 1 C 2 B 3 M 1 B 1 C 2                                     
   D 3 M 4 C 1 D 2 M 3 B 4  X                                  
                   
POPULARITY TABLE
-------------------------------------------
   City     Ambassador  Fiat  Dolphin  Maruti                  
   -------------------------------------------                 
   Bombay          2      1      3      2                      
   Calcutta        4      5      1      0                      
   Delhi           2      1      3      2                      
   Madras          4      1      1      4                      
   -------------------------------------------  
               

Fig.7.6  Program to tabulate a survey data

CHAPTER 8:


Example 8.1
Write a program to read a series of words from a terminal using scanf function
The program shown in Fig.8.1 reads four words and displays them on the screen.  Note that the string 'Oxford Road' is treated as two words while the string 'Oxford-Road' as one word.

READING A SERIES OF WORDS USING scanf FUNCTION
Program
   main()                                                     
   {                                                           
       char word1[40], word2[40], word3[40], word4[40];        
       printf("Enter text : \n");                              
       scanf("%s %s", word1, word2);                           
       scanf("%s", word3);                                     
       scanf("%s", word4);                                     
       printf("\n");                                           
       printf("word1 = %s\nword2 = %s\n", word1, word2);       
       printf("word3 = %s\nword4 = %s\n", word3, word4);       
   }  
                                                         
Output                                                      
   Enter text :                                                
   Oxford Road, London M17ED                                   
   word1 = Oxford                                              
   word2 = Road,                                               
   word3 = London                                              
   word4 = M17ED                                               
   Enter text :                                                
   Oxford-Road, London-M17ED United Kingdom                    
   word1 = Oxford-Road                                         
   word2 = London-M17ED                                        
   word3 = United                                              
   word4 = Kingdom 

Fig.8.1 Reading a series of words using scanf


Example 8.2
Write a program to read a line of text containing a series of words from the terminal.

The program shown in Fig.8.2 can read a line of text (upto a maximum of 80 characters) into the string line using getchar function. Every time a character is read, it is assigned to its location in the string line and then tested for newline character. When the newline character is read (signalling the end of line), the reading loop is terminated and the newline character is replaced by the null character to indicate the end of character string.
When the loop is exited, the value of the index c is one number higher than the last character position in the string (since it has been incremented after assigning the new character to the string). Therefore the index value c-1 gives the position where the null character is to be stored.

PROGRAM TO READ A LINE OF TEXT FROM TERMINAL
Program  
   #include  <stdio.h>                                         
   main()                                                     
   {                                                           
       char  line[81], character;                              
       int   c;                                                
       c = 0;                                                  
       printf("Enter text. Press <Return> at end\n");          
       do                                                      
       {                                                       
           character = getchar();                              
           line[c]   = character;                              
           c++;                                                
       }                                                       
       while(character != '\n');                                
       c = c - 1;                                              
       line[c] = '\0';                                         
       printf("\n%s\n", line);                                 
   }                                                           

Output                                                      
                                                               
   Enter text. Press <Return> at end                           
   Programming in C is interesting.                            
   Programming in C is interesting.                            
   Enter text. Press <Return> at end                           
   National Centre for Expert Systems, Hyderabad.              
   National Centre for Expert Systems, Hyderabad.              
Fig.8.2 Program to read a line of text from terminal



Example 8.3
Write a program to copy one string into another and count the number of characters copied.
The program is shown in Fig.8.3. We use a for loop to copy the characters contained inside string2 into the string1. The loop is terminated when the null character is reached.  Note that we are again assigning a null character to the string1.
COPYING ONE STRING INTO ANOTHER
Program
   main()                                                     
   {                                                           
       char  string1[80], string2[80];                         
       int   i;                                                
                                                               
       printf("Enter a string \n");                            
       printf("?");                                            
                                                               
       scanf("%s", string2);                                   
                                                               
       for( i=0 ; string2[i] != '\0'; i++)                     
          string1[i] = string2[i];                             
                                                               
       string1[i] = '\0';                                      
                                                               
       printf("\n");                                           
       printf("%s\n", string1);                                
       printf("Number of characters = %d\n", i );              
   }
                                                           
Output                                                      
                                                               
   Enter a string                                              
   ?Manchester                                                 
   Manchester                                                  
   Number of characters = 10                                   
   Enter a string                                              
   ?Westminster                                                
   Westminster                                                 
   Number of characters = 11                                   

Fig.8.3 Copying one string into another



Example 8.4
Write a program to store the string "United Kingdom" in the array country and display the string under various format specifications.

The program and its output are shown in Fig.8.4. The output illustrates the following features of the %s specifications.

1. When the field width is less than the length of the string, the entire string is printed.
2. The integer value on the right side of the decimal point specifies the number of   characters to be printed.
3. When the number of characters to be printed is specified as zero, nothing is printed.
4. The minus sign in the specification causes the string to be printed left-justified.
5. The specification % .ns prints the first n characters of the string

WRITING STRINGS USING %s FORMAT
Program               
                                               
   main()                                                      
   {                                                           
       char  country[15] = "United Kingdom";            

       printf("\n\n");                                         
       printf("*123456789012345*\n");                          
       printf(" --------------- \n");                          
                                                               
       printf("%15s\n", country);                            
       printf("%5s\n", country);                             
       printf("%15.6s\n", country);                          
       printf("%-15.6s\n", country);                         
       printf("%15.0s\n", country);                          
       printf("%.3s\n", country);                            
       printf("%s\n", country);                              
       printf("---------------- \n");                          
   }                                                           


Output                                                      
                                                               
   *123456789012345*                                           
	------------------
     United Kingdom                                           
    United Kingdom                                           
             United                                           
    United                                                    
                                                             
    Uni
	United Kingdom
	------------------


Fig.8.4  Writing strings using %s format

















Example 8.5
Write a program using for loop to print the following output.
                          C  
                          CP  
                          CPr  
                          CPro  
                          ..... 
                          ..... 
                          CProgramming          
                          CProgramming 
                          ..... 
                          ..... 
                          CPro  
                          CPr    
                          CP    
                          C                     	


The outputs of the program in Fig.8.5, for variable specifications %12.*s, %.*s, and %*.1s are shown in Fig.8.6, which further illustrates the variable field width and the precision specifications.
PRINTING SEQUENCES OF CHARACTERS
Program
   main()                                                      
   {                                                           
       int  c, d;                                              
       char  string[] = "CProgramming";                 
       printf("\n\n");                                         
       printf("--------------\n");                             
       for( c = 0 ; c <= 11 ; c++ )                            
       {                                                       
          d = c + 1;                                           
          printf("|%-12.*s|\n", d, string);                    
       }                                                       
       printf("|------------|\n");                           
       for( c = 11 ; c >= 0 ; c-- )                            
       {                                                       
          d = c + 1;                                           
          printf("|%-12.*s|\n", d, string);                    
       }                                                       
       printf("--------------\n");                             
   }                                                           
                                                              





Output                                                      
                                            
   
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     



Fig.8.5 Illustration of variable field specifications



Example 8.6
Write a program which would print the alphabet set a to z and A to Z in decimal and character form.

The program is shown in Fig.8.7. In ASCII character set, the decimal numbers 65 to 90 represent uppercase alphabets and 97 to 122 represent lowercase alphabets. The values from 91 to 96 are excluded using an if statement in the for loop.

PRINTING ALPHABET SET IN DECIMAL AND CHARACTER FORM
Program                                                                  
   main()                                                      
   {                                                           
       char  c;                                                
       printf("\n\n");                                         
       for( c = 65 ; c <= 122 ; c = c + 1 )                    
       {                                                       
          if( c > 90  &&  c < 97 )                             
            continue;                                          
          printf("|%4d - %c ", c, c);                          
       }                                                       
       printf("|\n");                                          
   }                                                           

                


                                            
Output                                                      
                                                               
 |  65 - A |  66 - B |  67 - C |  68 - D |  69 - E |  70 - F 
 |  71 - G |  72 - H |  73 - I |  74 - J |  75 - K |  76 - L 
 |  77 - M |  78 - N |  79 - O |  80 - P |  81 - Q |  82 - R 
 |  83 - S |  84 - T |  85 - U |  86 - V |  87 - W |  88 - X 
 |  89 - Y |  90 - Z |  97 - a |  98 - b |  99 - c | 100 - d 
 | 101 - e | 102 - f | 103 - g | 104 - h | 105 - i | 106 - j 
 | 107 - k | 108 - l | 109 - m | 110 - n | 111 - o | 112 - p 
 | 113 - q | 114 - r | 115 - s | 116 - t | 117 - u | 118 - v 
 | 119 - w | 120 - x | 121 - y | 122 - z |                   


Fig.8.7  Printing of the alphabet set in decimal and character form



Example 8.7
The names of employees of an organization are stored in three arrays, namely first_name, second_name, and last_name. Write a program to concatenate the three parts into one string to be called name.

The program is given in Fig.8.8. Three for loops are used to copy the three strings. In the first loop, the characters contained in the first_name are copied into the variable name until the null character is reached. The null character is not copied; instead it is replaced by a space by the assignment statement
              name[i] = \ /   ;
Similarly, the second_name is copied into name, starting from the column just after the space created by the above statement. This is achieved by the assignment statement
              name[i+j+1] = second_name[j];
If first_name contains 4 characters, then the value of i at this point will be 4 and therefore the first character from second_name will be placed in the fifth cell of name. Note that we have stored a space in the fourth cell.

In the same way, the statement
              name[i+j+k+2] = last_name[k];
is used to copy the characters from last_name into the proper locations of name.
At the end, we place a null character to terminate the concatenated string name. In this example, it is important to note the use of the expressions i+j+1 and i+j+k+2.

CONCATENATION OF STRINGS
Program   
   main()                                                      
   {                                                           
       int  i, j, k ;                                          
       char   first_name[10] = {"VISWANATH"}  ;         
       char  second_name[10] = {"PRATAP"} ;             
       char    last_name[10] = {"SINGH"} ;              
       char   name[30] ;                                       
     /* Copy first_name into name */                           
       for( i = 0 ; first_name[i] != '\0' ; i++ )              
          name[i] = first_name[i] ;                            
     /* End first_name with a space */                         
       name[i] = ' ' ;                                         
     /* Copy second_name into name */                          
       for( j = 0 ; second_name[j] != '\0' ; j++ )             
          name[i+j+1] = second_name[j] ;                       
     /* End second_name with a space */                        
       name[i+j+1] = ' ' ;                                     
     /* Copy last_name into name */                           
       for( k = 0 ; last_name[k] != '\0'; k++ )                
          name[i+j+k+2] = last_name[k] ;                       
     /* End name with a null character */                      
       name[i+j+k+2] = '\0' ;                                  
       printf("\n\n") ;                                        
       printf("%s\n", name) ;                                  
   }
                  
Output                                                  
VISWANATH PRATAP SINGH
Fig.8.8  Concatenation of strings




Example 8.8

s1, s2, and s3 are three string variables. Write a program to read two string constants into s1 and s2 and compare whether they are equal or not. If they are not, join them together. Then copy the contents of s1 to the variable s3. At the end, the program should print the contents of all the three variables and their lengths.


 The program is shown in Fig.8.9.  During the first run, the input strings are "New" and "York".  These strings are compared by the statement 
              x = strcmp(s1, s2);
Since they are not equal, they are joined together and copied into s3 using the statement
              strcpy(s3, s1);
The program outputs all the three strings with their lengths.

During the second run, the two strings s1 and s2 are equal, and therefore, they are not joined together.  In this case all the three strings contain the same string constant "London".






CHAPTER 9:


Example 9.1
Write a program with multiple functions that do not communicate any data between them.

A program with three user-defined functions is given in Fig.9.4. main is the calling function that calls printline and value functions. Since both the called functions contain no arguments, there are no argument declarations. The printline function, when encountered, prints a line with a length of 35 characters as prescribed in the function. The value function calculates the value of principal amount after a certain period of years and prints the results. The following equation is evaluated repeatedly:

              value = principal(1+interest-rate)


FUNCTIONS WITH THE ARGUMENTS, NO RETURN VALUES
Program      

/* Function declaration */
void printline (void);
void value (void);
   main()                                                      
   {                                                           
       printline();                                            
       value();                                                
       printline();                                            
   }                                                           
   /*       Function1: printline()       */                   
                                                               
   void printline(void)   /* contains no arguments */                   
   {                                                           
       int i ;                                                 
                                                               
       for(i=1; i <= 35; i++)                                  
          printf("%c",'-');                                    
       printf("\n");                                        
   }                                                           
   /*       Function2: value()           */                   
   void value(void)       /* contains no arguments */                   
   {                                                           
       int    year, period;                                    
       float  inrate, sum, principal;                          
                                                               
       printf("Principal amount?");                            
       scanf("%f", &principal);                                
       printf("Interest rate?   ");                            
       scanf("%f", &inrate);                                   
       printf("Period?          ");                            
       scanf("%d", &period);                                   
                                                               
       sum = principal;                                        
       year = 1;                                               
       while(year <= period)                                   
       {                                                       
           sum = sum *(1+inrate);                              
           year = year +1;                                     
       }                                                       
       printf("\n%8.2f %5.2f %5d %12.2f\n",                    
               principal,inrate,period,sum);                   
   }
                                                           
                                                               


Output   
	-----------------------------------                                                                              
   Principal amount?	5000                                       
   Interest rate?   	0.12                                       
   Period?          	5                                          
                                                               
   5000.00  0.12    	5      8811.71       
------------------------------------
Fig.9.4 Functions with no arguments and no return values



Example 9.2
Modify the program of Example 9.1 to include the arguments in the function calls.

The modified program with function arguments is presented in Fig.9.7. Most of the program is identical to the program in Fig.9.4. The input prompt and scanf assignment statement have been moved from value function to main. The variables principal, inrate, and period are declared in main because they are used in main to receive data. The function call
              value(principal, inrate, period);
passes information it contains to the function value.

The function header of value has three formal arguments p,r, and n which correspond to the actual arguments in the function call, namely, principal, inrate, and period. On execution of the function call, the values of the actual arguments are assigned to the corresponding formal arguments. In fact, the following assignments are accomplished across the function boundaries:
              p = principal;
              r = inrate;
              n = period;

FUNCTIONS WITH ARGUMENTS BUT NO RETURN VALUES

Program   

/* prototypes */
   void printline (char c);
   void value (float, float, int);
	                                                               
   main()                                                     
   {                                                           
        float principal, inrate;                               
        int period;                                            
                                                               
        printf("Enter principal amount, interest");            
        printf(" rate, and period \n");                        
        scanf("%f %f %d",&principal, &inrate, &period);        
        printline('Z');                                        
        value(principal,inrate,period);                        
        printline('C');                                        
   }                                                           

 

   void printline(char ch)                                               
   {                                                           
        int i ;                                                
        for(i=1; i <= 52; i++)                                 
             printf("%c",ch);                                  
        printf("\n");                                          
   }                                                           
   void value(float p, float r, int n)
   {                                                           
        int year ;                                             
        float sum ;                                            
        sum = p ;                                              
        year = 1;                                              
        while(year <= n)                                       
        {                                                      
            sum = sum * (1+r);                                 
            year = year +1;                                    
        }                                                      
        printf("%f\t%f\t%d\t%f\n",p,r,n,sum);                  
   }  
                                                         
 

Output                                                      
                                                               
   Enter principal amount, interest rate, and period           
   5000 0.12  5                                               
   ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        
   5000.000000     0.120000        5       8811.708984         
   CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC   
     

Fig.9.7  Functions with arguments but no return values


Example 9.3
In the program presented in Fig. 9.7 modify the function value, to return the final amount calculated to the main, which will display the required output at the terminal.  Also extend the versatility of the function printline by having it to take the length of the line as an argument.

The modified program with the proposed changes is presented in Fig. 9.9.  One major change is the movement of the printf statement from value to main.


FUNCTIONS WITH ARGUMENTS AND RETURN VALUES
Program	
void printline (char ch, int len);
	value (float, float, int);
	
main()
{
	float principal, inrate, amount;
	int period;
	printf(※Enter principal amount, interest§);
	printf(※rate, and period\n§);
	scanf(%f %f %d§, &principal, &inrate, &period);
	printline (＆*＊ , 52);
	amount = value (principal, inrate, period);
	printf(※\n%f\t%f\t%d\t%f\n\n§,principal,
		inrate,period,amount);
	printline(＆=＊,52);
}
void printline(char ch, int len)
{
	int i;
	for (i=1;i<=len;i++) printf(※%c§,ch);
	printf(※\n§);
}
value(float p, float r, int n) /* default return type */
{
	int year;
	float sum;
	sum = p; year = 1;
	while(year <=n)
{
		sum = sum * (l+r);
		year = year +1;
	}
	return(sum);	    /* returns int part of sum */
}

		
Output

	Enter principal amount, interest rate, and period
	5000	0.12    5
	***************************************************
	5000.000000		0.1200000	5	8811.000000
	= = = = = = = = = = = = = = = = = = = = = = = = = =

		Fig.9.9 Functions with arguments and return values



Example 9.4
Write a function power that computes x raised to the power y for integers x and y and returns double-type value.

Fig 9.10 shows a power function that returns a double.  The prototype declaration
	double power(int, int);
appears in main, before power is called.

POWER FUNCTIONS
Program
main()
{	int x,y;				/*input data */
	double power(int, int);	/* prototype declaration*/
	printf(※Enter x,y:§);
	scanf(※%d %d§ , &x,&y);
	printf(※%d to power %d is %f\n§, x,y,power (x,y));
}
double power (int x, int y);
{
	double p;
	p = 1.0 ; 		  /* x to power zero */

	if(y >=o)
		while(y--)   /* computes positive powers */
		 p *= x;
	else
		while (y++)  /* computes negative powers */
		 p /= x;
		return(p);

	}

Output

	Enter x,y:162
	16 to power 2 is 256.000000

	Enter x,y:16-2
	16 to power -2 is 0.003906

Fig 9.10 Illustration of return of float values




Example 9.5
Write a program to calculate the standard deviation of an array of values. The array elements are read from the terminal. Use functions to calculate standard deviation and mean.




Standard deviation of a set of n values is given by

                           		
            S.D =   	---  ?  ( x  -x i )2 		
	   

Where x  is the mean of the values.

FUNCTIONS WITH ARRAYS
Program           
   #include     <math.h>                                       
   #define SIZE    5                          
   float std_dev(float a[], int n);
   float mean (float a[], int n);
   main()                                                     
   {
        float value[SIZE];
        int i;                                                 
                                                               
        printf("Enter %d float values\n", SIZE);               
        for (i=0 ;i < SIZE ; i++)                              
            scanf("%f", &value[i]);                            
        printf("Std.deviation is %f\n", std_dev(value,SIZE));  
   }                                                           
   float std_dev(float a[], int n)                                          
   {    int i;                                                 
        float x, sum = 0.0;                            
        x = mean (a,n);                                        
        for(i=0; i < n; i++)                                    
        	sum += (x-a[i])*(x-a[i]);                              
        return(sqrt(sum/(float)n));                            
   }                                                           
   float mean(float a[],int n)                                             
   {                                                           
        int i ;                                                
        float sum = 0.0;                                       
        for(i=0 ; i < n ; i++)                                 
           sum = sum + a[i];                                   
        return(sum/(float)n);                                  
   } 
                                                          





Output 	
Enter 5 float values                                        
   		35.0 67.0 79.5 14.20 55.75   
                               
    		Std.deviation is 23.231582 
   
Fig.9.11 Passing of arrays to a function



Example 9.6
Write a program that uses a function to sort an array of integers.


 A program to sort an array of integers using the function sort() is given in Fig.9.12.  Its output clearly shows that a function can change the values in an array passed as an argument.



SORTING OF ARRAY ELEMENTS
Program          
   void sort(int m, int x[ ]);                                                               
   main()                                                      
   {                                                           
       int i;                                                  
       int marks[5] = {40, 90, 73, 81, 35};             
                                                               
       printf("Marks before sorting\n");                       
       for(i = 0; i < 5; i++)                                  
          printf("%d ", marks[i]);                             
       printf("\n\n");                                         
                                                               
       sort (5, marks);                                        
       printf("Marks after sorting\n");                        
       for(i = 0; i < 5; i++)                                  
          printf("%4d", marks[i]);                             
       printf("\n");                                           
   }                                                           
   void sort(int m, int x[ ])
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= m-1; i++)                               
          for(j = 1; j <= m-i; j++)                             
             if(x[j-1] >= x[j])                                
             {
                t = x[j-1];                                    
                x[j-1] = x[j];                                 
                x[j] = t;                                      
             }                                                 
   }                                                           
                                                                Output                                                      
   		Marks before sorting                                        
   		40 90 73 81 35                                              
                                                               
   		Marks after sorting                                         
     		35  40  73  81  90                                        

      Fig.9.12 Sorting of array elements using a function



Example 9.7
Write a multifunction to illustrate how automatic variables work.

A program with two subprograms function1 and function2 is shown in Fig.9.13. m is an automatic variable and it is declared at the beginning of each function. m is initialized to 10, 100, and 1000 in function1, function2, and main respectively.

When executed, main calls function2 which in turn calls function1. When main is active, m = 1000; but when function2 is called, the main's m is temporarily put on the shelf and the new local m = 100 becomes active. Similarly, when function1 is called, both the previous values of m are put on the shelf and the latest value of m (=10) becomes active.  As soon as function1 (m=10) is finished, function2 (m=100) takes over again. As soon it is done, main (m=1000) takes over. The output clearly shows that the value assigned to m in one function does not affect its value in the other functions; and the local value of m is destroyed when it leaves a function.









ILLUSTRATION OF WORKING OF auto VARIABLES

Program      
   void function1(void);
   void function2(void);                                                               
   main()                                                     
   {
        int m = 1000;                                          
        function2();                                           
                                                               
        printf("%d\n",m);	/* Third output */                                      
   }                                                           
   void function1(void)                                                 
   {                                                           
        int m = 10;                                            
                                                               
        printf("%d\n",m);	/* First output */                                      
   }  

                                                         
   void function2(void)                                                 
   {                                                           
        int m = 100;                                           
        function1();                                           
        printf("%d\n",m);	/* Second output */                                      
   }   
                                                        
 
Output                                                      
   10                                                          
   100                                                         
   1000  
                                                    
Fig.9.13 Working of automatic variables



Example 9.8
Write a multifunction program to illustrate the properties of global variables.

A program to illustrate the properties of global variables is presented in Fig.9.14. Note that variable x is used in all functions but none except fun2, has a definition for x. Because x has been declared 'above' all the functions, it is available to each function without having to pass x as a function argument. Further, since the value of x is directly available, we need not use return(x) statements in fun1 and fun3. However, since fun2 has a definition of x, it returns its local value of x and therefore uses a return statement.  In fun2, the global x is not visible.  The local x hides its visibility here.

ILLUSTRATION OF PROPERTIES OF GLOBAL VARIABLES
Program      
   int fun1(void);
   int fun2(void);
   int fun3(void);                                                        
   int x ;			/* global */                                                     
   main()                                                     
   {                                                           
        x = 10 ; 	/* global x */	                                              
        printf("x = %d\n", x);                                 
        printf("x = %d\n", fun1());                            
        printf("x = %d\n", fun2());                            
        printf("x = %d\n", fun3());                            
   }                                                           
   fun1(void)                                                      
   {                                                           
        x = x + 10 ;                                                                                    
   }              
   int fun2(void)                                                      
   {                                                           
        int x ; 		/* local */                                               
        x = 1 ;                                                
        return (x);                                            
   }                                                           
   fun3(void)                                                      
   {                                                           
        x = x + 10 ; 	/* global x */                                          
   }   
                                                        
                                                            
Output 	x = 10                                                      
   	x = 20                                                      
   	x = 1                                                       
   		x = 30
                                               
Fig.9.14 Illustration of  global variables



Example  9.9
Write a program to illustrate the properties of a static variable.

The program in Fig.9.15 explains the behaviour of a static variable.


ILLUSTRATION OF STATIC VARIABLE

Program 
         void stat(void);                                                     
   main ()                                                    
   {                                                           
   	int i;                                                  
for(i=1; i<=3; i++)                                     
      stat();                                            
         }                                                           
   void stat(void)                                                     
   {                                                           
     static int x = 0;                                      
                                                              
     x = x+1;                                                
     printf("x = %d\n", x);                                  
   } 
                                                          
                                                               Output                                                      
   x = 1                                                       
   x = 2                                                       
   x = 3 

                                                      
Fig.9.15  Illustration of static variable

CHAPTER 10:


Example 10.1
Define a structure type, struct personal that would contain person name, date of joining and salary.  Using this structure, write a program to read this information for one person from the keyboard and print the same on the screen.

Structure definition along with the program is shown in Fig.10.1.  The scanf and printf functions illustrate how the member operator `.' is used to link the structure members to the structure variables.  The variable name with a period and the member name is used like an ordinary variable.











DEFINING AND ASSIGNING VALUES TO STRUCTURE MEMBERS
Program  
   struct  personal                                                 
   {
       char  name[20];                                              
       int   day;                                                   
       char  month[10];                                             
       int   year;                                                  
       float salary;                                                
   };                                                               
   main()                                                           
   {
       struct personal person;                                      
       printf("Input Values\n");                                    
       scanf("%s %d %s %d %f",                                      
                 person.name,                                       
                &person.day,                                        
                 person.month,                                      
                &person.year,                                       
                &person.salary);                                    
       printf("%s %d %s %d %f\n",                                   
                 person.name,                                       
                 person.day,                                        
                 person.month,                                      
                 person.year,                                       
                 person.salary);                                    
   } 
                                                               
Output                                                           
   Input Values                                                     
   M.L.Goel 10 January 1945 4500                                    
   M.L.Goel 10 January 1945 4500.00 
                                
Fig.10.1 Defining and accessing structure members



Example 10.2
Write a program to illustrate the comparison of structure variables.

The program shown in Fig.10.2 illustrates how a structure variable can be copied into another of the same type.  It also performs member-wise comparison to decide whether two structure variables are identical. 






			COMPARISON OF STRUCTURE VARIABLES
Program
   struct class                                                     
   {
       int  number;                                                 
       char name[20];                                               
       float marks;                                                 
   };                                                               
                                                                    
   main()                                                           
   {
       int  x;                                                      
       struct class student1 = {111,"Rao",72.50};            
       struct class student2 = {222,"Reddy", 67.00};         
       struct class student3;                                       
                                                                    
       student3 = student2;                                         
                                                                    
       x = ((student3.number ==  student2.number) &&                
            (student3.marks  ==  student2.marks)) ? 1 : 0;          
                                                                    
       if(x == 1)                                                   
      {
        	printf("\nstudent2 and student3 are same\n\n");          
           printf("%d %s %f\n", student3.number,                    
                                student3.name,                      
                                student3.marks);                    
       }                                                            
       else                                                         
           printf("\nstudent2 and student3 are different\n\n");     
                                                                    
   }                                                                
                                                                    
Output                                                           
                                                                    
   student2 and student3 are same                                   
                                                                    
   222 Reddy 67.000000                                              


Fig.10.2 Comparing and copying structure variables



Example 10.3
For the student array discussed above, write a program to calculate the subject-wise and student-wise totals and store them as a part of the structure.

The program is shown in Fig.10.4.  We have declared a four-member structure, the fourth one for keeping the student-totals.  We have also declared an array total to keep the subject-totals and the grand-total.  The grand-total is given by total.total.  Note that a member name can be any valid C name and can be the same as an existing structure variable name.  The linked name total.total represents the total member of the structure variable total.
ARRAYS OF STRUCTURES
Program  
   struct marks                                                     
   {
       int  sub1;                                                   
       int  sub2;                                                   
       int  sub3;                                                   
       int  total;                                                  
   };                                                               
   main()                                                           
   {
       int  i;                                                      
       struct marks student[3] =  {{45,67,81,0},             
                                   {75,53,69,0},             
                                   {57,36,71,0}};            
       struct marks total;                                   
       for(i = 0; i <= 2; i++)                                      
       {                                                            
           student[i].total = student[i].sub1 +                     
                              student[i].sub2 +                     
                              student[i].sub3;                      
           total.sub1 = total.sub1 + student[i].sub1;               
           total.sub2 = total.sub2 + student[i].sub2;               
           total.sub3 = total.sub3 + student[i].sub3;               
           total.total = total.total + student[i].total;            
       }                                                            
       printf(" STUDENT          TOTAL\n\n");                       
       for(i = 0; i <= 2; i++)                                      
          printf("Student[%d]      %d\n", i+1,student[i].total); 
       printf("\n SUBJECT          TOTAL\n\n");                     
       printf("%s       %d\n%s       %d\n%s       %d\n",            
              "Subject 1   ", total.sub1,                           
              "Subject 2   ", total.sub2,                           
              "Subject 3   ", total.sub3);                          
                                                                    
       printf("\nGrand Total = %d\n", total.total);                 
   }                                                                

Output                                                           
                                                                    
        STUDENT           TOTAL                                          
        Student[1]         193                                           
        Student[2]         197                                           
        Student[3]         164                                           
                                                                    
        SUBJECT           TOTAL                                          
        Subject 1          177                                           
        Subject 2          156                                           
        Subject 3          221                                           
                                                                    
        Grand Total  = 554                                                
                                                                    

Fig.10.4 Illustration of subscripted structure variables



Example 10.4
Rewrite the program of Example 10.3 using an array member to represent the three subjects.

The modified program is shown in Fig.10.5.  You may notice that the use of array name for subjects has simplified in code.




ARRAYS WITHIN A STRUCTURE
Program
   main()                                                           
   {                                                                
       struct  marks                                                
       {                                                            
           int  sub[3];                                             
           int  total;                                              
       };                                                           
       struct marks student[3] =                             
       {45,67,81,0,75,53,69,0,57,36,71,0};                   
       struct marks total;                                   
       int  i,j;                                                    
                                                                    
       for(i = 0; i <= 2; i++)                                      
       {                                                            
          for(j = 0; j <= 2; j++)                                   
          {                                                         
             student[i].total += student[i].sub[j];                 
             total.sub[j] += student[i].sub[j];                     
          }                                                         
          total.total += student[i].total;                          
       }                                                            
       printf("STUDENT         TOTAL\n\n");                         
       for(i = 0; i <= 2; i++)                                      
          printf("Student[%d]      %d\n", i+1, student[i].total);  
                                                                    
       printf("\nSUBJECT         TOTAL\n\n");                       
       for(j = 0; j <= 2; j++)                                      
          printf("Subject-%d        %d\n", j+1, total.sub[j]);      
                                                                    
       printf("\nGrand Total  =   %d\n", total.total);              
                                                                    
   }                                                                
                                                                    Output                                                           
                                                                    
   STUDENT         TOTAL                                            
   Student[1]       193                                             
   Student[2]       197                                             
   Student[3]       164                                             
                                                                    
   SUBJECT         TOTAL                                            
   Subject-1        177                                             
   Subject-2        156                                             
   Subject-3        221                                             
                                                                    
   Grand Total  =   554                                             

Fig.10.5  Use of subscripted members in structures



Example 10.5
Write a simple program to illustrate the method of sending an entire structure as a parameter to a function.

 A program to update an item is shown in Fig.10.6.  The function update receives a copy of the structure variable item as one of its parameters.  Note that both the function update and the formal parameter product are declared as type struct stores.  It is done so because the function uses the parameter product to receive the structure variable item and also to return the updated values of item.

The function mul is of type float because it returns the product of price and quantity.  However, the parameter stock, which receives the structure variable item is declared as type struct stores.
The entire structure returned by update can be copied into a structure of identical type.  The statement
              item = update(item,p_increment,q_increment);
replaces the old values of item by the new ones.
STRUCTURES AS FUNCTION PARAMETERS
Program  
 /*        Passing a copy of the entire structure        */    
   struct stores                                                    
   {                                                                
       char  name[20];                                              
       float price;                                                 
       int   quantity;                                              
   };                                                               
   struct stores update (struct stores product, float p, int q);
   float mul (struct stores stock);
   main()                                                           
   {                                                                
       float    p_increment, value;                     
       int      q_increment;                                   
                                                                    
       struct stores item = {"XYZ", 25.75, 12};              
                                                                    
       printf("\nInput increment values:");                         
       printf("   price increment and quantity increment\n");       
       scanf("%f %d", &p_increment, &q_increment);                  
                                                                    
   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - */    
       item  = update(item, p_increment, q_increment);              
   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - */    
       printf("Updated values of item\n\n");                        
       printf("Name      : %s\n",item.name);                        
       printf("Price     : %f\n",item.price);                       
       printf("Quantity  : %d\n",item.quantity);                    
                                                                    
   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - */    
       value  = mul(item);                                          
   /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - */    
       printf("\nValue of the item  =  %f\n", value);               
   }                                                                
   struct stores update(struct stores product, float p, int q)    
   {                                                               
       product.price += p;                                         
       product.quantity += q;                                       
       return(product);                                             
   }                                                                
   float mul(struct stores stock)                                             
   {                                                                
       return(stock.price * stock.quantity);                        
   }
                                                                                                                                   
 


Output                                                           
Input increment values:   price increment and quantity increment 
10 12                                                            
Updated values of item                                           
Name      : XYZ                                                  
Price     : 35.750000                                            
Quantity  : 24                                                   
Value of the item  =  858.000000                                 
Fig.10.6 Using structure as a function parameter


CHAPTER 11:


Example 11.1
Write a program to print the address of a variable along with its value.

The program shown in Fig.11.4, declares and initializes four variables and then prints out these values with their respective storage locations.  Notice that we have used %u format for printing address values. Memory addresses are unsigned integers.

ACCESSING ADDRESSES OF VARIABLES
Program                                                                    
   main()                                                           
   {
       char   a;                                                    
       int    x;                                                    
       float  p, q;                                                 
                                                                    
       a  = 'A';                                                    
       x  = 125;                                                    
       p  = 10.25, q = 18.76;                                       
       printf("%c is stored at addr %u.\n", a, &a);                 
       printf("%d is stored at addr %u.\n", x, &x);                 
       printf("%f is stored at addr %u.\n", p, &p);                
       printf("%f is stored at addr %u.\n", q, &q);                 
                                                                    
   }                                                                
                                                                    
Output                                                           
                                                                    
   A is stored at addr 4436.                                        
   125 is stored at addr 4434.                                      
   10.250000 is stored at addr 4442.                                
   18.760000 is stored at addr 4438.  
                              
Fig.11.4 Accessing the address of a variable



   
Example 11.2
Write a program to illustrate the use of indirection operator '*' to access the value pointed to by a printer.

The program and output are shown in Fig.11.5.  The program clearly shows how we can access the value of a variable using a pointer.  You may notice that the value of the pointer ptr is 4104 and the value it points to is 10.  Further, you may also note the following equivalences:
        x = *(&x) = *ptr = y
        &x = &*ptr

ACCESSING VARIABLES USING POINTERS
Program                                                                               
   main()                                                           
   {
       int   x, y;                                                  
       int   *ptr;                                                  
       x = 10;                                                      
       ptr = &x;                                                    
       y = *ptr;                                                    
       printf("Value of x is %d\n\n",x);                            
       printf("%d is stored at addr %u\n", x, &x);                  
       printf("%d is stored at addr %u\n", *&x, &x);                
       printf("%d is stored at addr %u\n", *ptr, ptr);              
       printf("%d is stored at addr %u\n", y, &*ptr);               
       printf("%d is stored at addr %u\n", ptr, &ptr);              
       printf("%d is stored at addr %u\n", y, &y);                  
       *ptr = 25;                                                   
       printf("\nNow x = %d\n",x);                                  
                                                                    
   }                                                                
Output                                                           
   Value of x is 10                                                 
   10 	is stored at addr 4104                                        
   10 	is stored at addr 4104                                        
   10 	is stored at addr 4104                                        
   10 	is stored at addr 4104                                        
   4104 is stored at addr 4106                                      
   10 	is stored at addr 4108                                        
  Now x = 25                                                     
Fig.11.5 Accessing a variable through its pointer



Example 11.3
Write a program to illustrate the use of pointers in arithmetic operations.      

The program in Fig.11.7 shows how the pointer variables can be directly used in expressions.  It also illustrates the order of evaluation of expressions.  For example, the expression

              4* - *p2 / *p1 + 10

is evaluated as follows:

              ((4 * (-(*p2))) / (*p1)) + 10

When *p1 = 12 and *p2 = 4, this expression evaluates to 9.  Remember, since all the variables are of type int, the entire evaluation is carried out using the integer arithmetic.



ILLUSTRATION OF POINTER EXPRESSIONS
Program 
   main()                                                           
   {
       int  a, b, *p1, *p2, x, y, z;                                
       a  = 12;                                                     
       b  =  4;                                                     
       p1 = &a;                                                     
       p2 = &b;                                                     
       x  =  *p1 * *p2 - 6;                                         
       y  =  4*  - *p2 / *p1 + 10;                                  
       printf("Address of a = %u\n", p1);                           
       printf("Address of b = %u\n", p2);                           
       printf("\n");                                                
       printf("a = %d, b = %d\n", a, b);                            
       printf("x = %d, y = %d\n", x, y);                            
       *p2  = *p2 + 3;                                              
       *p1  = *p2 - 5;                                              
       z    = *p1 * *p2 - 6;                                        
       printf("\na = %d, b = %d,", a, b);                           
       printf(" z = %d\n", z);                                      
   }                                                                
                                                                    
Output                                                           
   Address of a = 4020                                              
   Address of b = 4016                                              
   a = 12, b = 4                                                    
   x = 42, y = 9                                                    
   a = 2, b = 7, z = 8                                              
                                                                    
Fig.11.7 Evaluation of pointer expressions



Example 11.4
Write a program using pointers to compute the sum of all elements stored in an array.

The program shown in Fig.11.8 illustrates how a pointer can be used to traverse an array element.  Since incrementing an array pointer causes it to point to the next element, we need only to add one to p each time we go through the loop.

POINTERS IN ONE-DIMENSIONAL ARRAY
Program                       
   main()                                                           
   {
       int *p, sum, i;                                              
       int x[5] = {5,9,6,3,7};                               
       i  = 0;                                                      
       p  = x;		  /* initializing with base address of x */                                                      
       printf("Element   Value   Address\n\n");                  
       while(i < 5)                                                 
       {
          printf(" x[%d] %d %u\n", i, *p, p);        
          sum = sum + *p;   /* accessing array element  */                                         
          i++, p++;        /* incrementing pointer     */                                          
       }                                                            
       printf("\n  Sum    =  %d\n", sum);                           
       printf("\n  &x[0]  =  %u\n", &x[0]);                         
       printf("\n  p      =  %u\n", p);                             
   }                                                                
                                                                    
Output                                                           
	     Element    Value     Address                                     
    		 x[0]       5         166                                       
    		 x[1]       9         168                                       
    		 x[2]       6         170                                       
    		 x[3]       3         172                                       
    		 x[4]       7         174                                       
     		Sum    =  55                                                   
     		&x[0]  =  166                                                  
     		p      =  176  

Fig.11.8 Accessing array elements using the pointer



Example 11.5
Write a program using pointers to determine the length of a character string.

 A program to count the length of a string is shown in Fig.11.10.  The statement
              char *cptr = name;
declares cptr as a pointer to a character and assigns the address of the first character of name as the initial value.  Since a string is always terminated by the null character, the statement
              while(*cptr != '\0')
is true until the end of the string is reached.

When the while loop is terminated, the pointer cptr holds the address of the null character.  Therefore, the statement 
              length = cptr - name;
gives the length of the string name. 

D
E
L
H
I
\0

               
     name                      cptr  
     (5 4)		(5 9)

The output also shows the address location of each character.  Note that each character occupies one memory cell (byte).

POINTERS AND CHARACTER STRINGS
Program
   main()                                                          
   {                                                                
       char  *name;                                                 
       int   length;                                                
       char  *cptr = name;                                          
       name  = "DELHI";                               
       printf (※%s\n§, name);              
       while(*cptr != '\0')                                         
       {                                                            
           printf("%c is stored at address %u\n", *cptr, cptr);     
           cptr++;                                                  
       }                                                            
       length = cptr - name;                                        
       printf("\nLength of the string = %d\n", length);             
   }                                                              
                                                                    
Output                                                           
                                           
   DELHI                         
   D is stored at address 54                                        
   E is stored at address 55                                        
   L is stored at address 56                                        
   H is stored at address 57                                       
   I is stored at address 58                                        
                                                                    
       Length of the string = 5  
Fig.11.10 String handling by pointers



Example 11.6
Write a function using pointers to exchange the values stored in two locations in the memory.

The program in Fig.11.11 shows how the contents of two locations can be exchanged using their address locations.  The function exchange() receives the addresses of the variables x and y and exchanges their contents.

POINTERS AS FUNCTION PARAMETERS
Program        
   void exchange (int *, int *);	    /* prototype */
   main()                                                           
   {                                                                
       int  x, y;                                                   
       x = 100;                                                     
       y = 200;                                                     
       printf("Before exchange  : x = %d   y = %d\n\n", x, y);      
       exchange(&x,&y);     	/* call */                                        
       printf("After exchange   : x = %d   y = %d\n\n", x, y);      
   }                                                                
   exchange (int *a, int *b)
   {                                                                
       int t;                                                       
       t = *a;    /* Assign the value at address a to t */          
       *a = *b;   /* put b into a */                                
       *b = t;    /* put t into b */                                
   }                                                                
                                                                    
Output
                                                                    
   Before exchange  : x = 100   y = 200                             
   After exchange   : x = 200   y = 100   
                          
                                                                    
Fig.11.11 Passing of pointers as function parameters



Example 11.7
Write a program that uses a function pointer as a function argument.

A program to print the function values over a given range of values is shown in Fig.11.12.  The printing is done by the function table by evaluating the function passed to it by the main.

With table, we declare the parameter f as a pointer to a function as follows:
              double (*f)();
The value returned by the function is of type double.  When table is called in the statement
              table (y, 0.0, 2, 0.5);
we pass a pointer to the function y as the first parameter of table.  Note that y is not followed by a parameter list. 

During the execution of table, the statement
              value = (*f)(a);
calls the function y which is pointed to by f, passing it the parameter a.  Thus the function y is evaluated over the range 0.0 to 2.0 at the intervals of 0.5.

Similarly, the call
              table (cos, 0.0, PI, 0.5);
passes a pointer to cos as its first parameter and therefore, the function table evaluates the value of cos over the range 0.0 to PI at the intervals of 0.5. 

ILLUSTRATION OF POINTERS TO FUNCTIONS
Program
   #include  <math.h>                                               
   #define  PI  3.1415926    
   double y(double);
   double cos(double);
   double table (double(*f)(), double, double, double);

   main()                                                           
   {   printf("Table of y(x) = 2*x*x-x+1\n\n");                     
       table(y, 0.0, 2.0, 0.5);                                     
       printf("\nTable of cos(x)\n\n");                             
       table(cos, 0.0, PI, 0.5);                                    
   }                                                                
   double table(double(*f)(),double min, double max, double step)
   {   double a, value;                                             
       for(a = min; a <= max; a += step)                            
       {                                                            
          value = (*f)(a);                                          
          printf("%5.2f  %10.4f\n", a, value);                      
       }                                                            
   }                                                                
   double y(double x)                                                   
   {  return(2*x*x-x+1);                                           
   }    
                                                            
 
Output  
Table of y(x) = 2*x*x-x+1                                        
    		0.00      1.0000                                                
    		0.50      1.0000                                                
    		1.00      2.0000                                                
    		1.50      4.0000                                                
    		2.00      7.0000                                                
   	Table of cos(x)                                                  
    		0.00      1.0000                                                
    		0.50      0.8776                                                
    		1.00      0.5403                                                
    		1.50      0.0707                                                
    		2.00     -0.4161                                                
    		2.50     -0.8011                                                
    		3.00     -0.9900                                                
Fig.11.12   Use of pointers to functions



Example 11.8 
Write a program to illustrate the use of structure pointers.
A program to illustrate the use of a structure pointer to manipulate the elements of an array of structures is shown in Fig.11.13.  The program highlights all the features discussed above. Note that the pointer ptr (of type struct invent) is also used as the loop control index in for loops.

POINTERS TO STRUCTURE VARIABLES
Program
   struct invent                                                    
   {                                                                
       char  *name[20];                                             
       int   number;                                                
       float price;                                                 
   };                                                               
   main()                                                           
   {                                                                
      struct invent product[3], *ptr;                              
      printf("INPUT\n\n");                                         
      for(ptr = product; ptr < product+3; ptr++)                   
        scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);  
      printf("\nOUTPUT\n\n");                                      
       ptr = product;                                               
       while(ptr < product + 3)                                     
       {
           printf("%-20s %5d %10.2f\n",                             
                    ptr->name,                                      
                    ptr->number,                                    
                    ptr->price);                                    
           ptr++;                                                   
       }                                                            
   }                                                                
                                                                    
Output                                                           
                                                                    
   INPUT   
   Washing_machine   5    7500                                           
   Electric_iron    12     350                                             
   Two_in_one        7    1250                                                
                                                                    
   OUTPUT                                                           
   Washing machine 	5   7500.00                            
   Electric_iron   	12   350.00                            
   Two_in_one       	7   1250.00                            

             
Fig.11.13  Pointer to structure variables


ILLUSTRATIONS OF STRING-HANDLING FUNCTIONS
Program

   #include    <string.h>                                      
   main()                                                      
   {   char  s1[20], s2[20], s3[20];                           
       int   x, l1, l2, l3;                                    
       printf("\n\nEnter two string constants \n");            
       printf("?");                                            
       scanf("%s %s", s1, s2);                                 
    /* comparing s1 and s2 */                                  
       x = strcmp(s1, s2);                                     
       if(x != 0)                                              
       {   printf("\n\nStrings are not equal \n");             
           strcat(s1, s2);   /* joining s1 and s2 */           
       }                                                       
       else                                                    
           printf("\n\nStrings are equal \n");                 
   /* copying s1 to s3 
       strcpy(s3, s1);                                         
    /* Finding length of strings */                            
       l1 = strlen(s1);                                        
       l2 = strlen(s2);                                        
       l3 = strlen(s3);                                        
    /* output */                                               
       printf("\ns1 = %s\t length = %d characters\n", s1, l1); 
       printf("s2 = %s\t length = %d characters\n", s2, l2);   
       printf("s3 = %s\t length = %d characters\n", s3, l3);   

   }
                                                           

Output                                                      
Enter two string constants                                  
? New York                                                  
Strings are not equal                                       
s1 = NewYork     length = 7 characters                      
s2 = York        length = 4 characters                      
s3 = NewYork     length = 7 characters                      
                                                                                                                              
Enter two string constants                                  
? London   London                                           
Strings are equal                                           
s1 = London      length = 6 characters                      
s2 = London      length = 6 characters                      
s3 = London      length = 6 characters      
                

Fig.7.9  Illustration of string handling functions



Example 8.9
Write  a program that would sort a list of names in alphabetical order.

A program to sort the list of strings in alphabetical order is given in Fig.8.10. It employs the method of bubble sorting described in Case Study 1 in the previous chapter. 


SORTING OF STRINGS IN ALPHABETICAL ORDER
Program
   #define ITEMS   5                                           
   #define MAXCHAR 20                                          
   main()                                                     
   {   
  char string[ITEMS][MAXCHAR], dummy[MAXCHAR];            
        int  i = 0, j = 0;                                      
       /* Reading the list */                                  
       printf ("Enter names of %d items \n ",ITEMS);           
       while (i < ITEMS)                                       
            scanf ("%s", string[i++]);                         
       /* Sorting begins */                                    
       for (i=1; i < ITEMS; i++) /* Outer loop begins */       
       {    
 for (j=1; j <= ITEMS-i ; j++) /*Inner loop begins*/
            {                                                  
                 if (strcmp (string[j-1], string[j]) > 0)      
                 {   /* Exchange of contents */                
                     strcpy (dummy, string[j-1]);              
                     strcpy (string[j-1], string[j]);          
                     strcpy (string[j], dummy );               
                 }                                             
            } /* Inner loop ends */                            
       } /* Outer loop ends */                                 
       /* Sorting completed */                                
       printf ("\nAlphabetical list \n\n");                    
       for (i=0; i < ITEMS ; i++)                              
           printf ("%s", string[i]);                           
   } 
                                   

Output 
	
	Enter names of 5 items                                      
  London Manchester Delhi Paris Moscow                        
  Alphabetical list                                           
                                                             
  Delhi                                                       
  London                                                      
  Manchester                                                  
  Moscow                                                      
  Paris            
                                           

Fig.8.10  Sorting of strings.

CHAPTER 12:


Example 12.1
Write a program to read data from the keyboard, write it to a file called INPUT, again read the same data from the INPUT file, and display it on the screen.

A program and the related input and output data are shown in Fig.12.1.  We enter the input data via the keyboard and the program writes it, character by character, to the file INPUT.  The end of the data is indicated by entering an EOF character, which is control-Z in the reference system.  (This may be control-D in other systems).  The file INPUT is closed at this signal.
WRITING TO AND READING FROM A FILE
Program           
   #include  <stdio.h>                                              
                                                                    
   main()                                                           
   { 
       FILE *f1;                                                    
       char c;                                                      
       printf("Data Input\n\n");
    	 /* Open the file INPUT */                                     
       f1 = fopen("INPUT", "w");
    
   	 /* Get a character from keyboard   */                                                                   
       while((c=getchar()) != EOF) 

     /* Write a character to INPUT  */  
           putc(c,f1);     
       /* Close the file INPUT   */                                                                
       fclose(f1);                 
       printf("\nData Output\n\n"); 
       /* Reopen the file INPUT    */                             
       f1 = fopen("INPUT","r");    

      /* Read a character from INPUT*/                                                                  
       while((c=getc(f1)) != EOF) 

      /* Display a character on screen */  
           printf("%c",c);     

   /* Close the file INPUT       */  
       fclose(f1);                
   }                                                                
                                                                 
Output                                                           
                                                                    
   Data Input                                                       
   This is a program to test the file handling                      
   features on this system^Z                                        
                                                                    
   Data Output                                                      
   This is a program to test the file handling                      
   features on this system                                          


Fig.12.1 Character oriented read/write operations on a file



Example 12.2
A file named DATA contains a series of integer numbers.  Code a program to read these numbers and then write all 'odd' numbers to a file to be called ODD and all `even' numbers to a file to be called EVEN.

The program is shown in Fig.12.2.  It uses three files simultaneously and therefore we need to define three-file pointers f1, f2 and f3.  

First, the file DATA containing integer values is created.  The integer values are read from the terminal and are written to the file DATA with the help of the statement
          putw(number, f1);
Notice that when we type  -1, the reading is terminated and the file is closed.  The next step is to open all the three files, DATA for reading, ODD and EVEN for writing.  The contents of DATA file are read, integer by integer, by the function getw(f1) and written to ODD or EVEN file after an appropriate test.  Note that the statement
          (number = getw(f1)) != EOF
reads a value, assigns the same to number, and then tests for the end-of-file mark.  

Finally, the program displays the contents of ODD and EVEN files.  It is important to note that the files ODD and EVEN opened for writing are closed before they are reopened for reading.


HANDLING OF INTEGER DATA FILES
Program          
   #include  <stdio.h>                                               
   main()                                                            
   {                                                                 
       FILE  *f1, *f2, *f3;                                          
       int   number, i;                                              
                                                                     
       printf("Contents of DATA file\n\n");                          
       f1 = fopen("DATA", "w");      /* Create DATA file    */       
       for(i = 1; i <= 30; i++)                                      
       {
          scanf("%d", &number);                                      
          if(number == -1) break;                                    
          putw(number,f1);                                           
       }                                                             
       fclose(f1);                                                   
                                                                     
       f1 = fopen("DATA", "r");                                      
       f2 = fopen("ODD", "w");                                       
       f3 = fopen("EVEN", "w");       
                               
       /* Read from DATA file */                                                                 
       while((number = getw(f1)) != EOF) 
       {
           if(number %2 == 0)                                        
             putw(number, f3);   /*  Write to EVEN file  */   
           else                                                      
             putw(number, f2);   /*  Write to ODD file   */   
       }                                                             
       fclose(f1);                                                   
       fclose(f2);                                                   
       fclose(f3);                                                   
                                                                     
       f2 = fopen("ODD","r");                                        
       f3 = fopen("EVEN", "r");                                      
       printf("\n\nContents of ODD file\n\n");                       
                                                                     
       while((number = getw(f2)) != EOF)                             
          printf("%4d", number);                                     
       printf("\n\nContents of EVEN file\n\n");                      
                                                                     
       while((number = getw(f3)) != EOF)                             
          printf("%4d", number);                                     
                                                                     
       fclose(f2);                                                   
       fclose(f3);                                                   
                                                                     
   }                                                                 
                                                                     
                                                                     
   Output                                                            
                                                                     
   Contents of DATA file                                             
   111 222 333 444 555 666 777 888 999 000 121 232 343 454 565 -1    
                                                                     
   Contents of ODD file                                              
   111 333 555 777 999 121 343 565                                  
                                                                     
   Contents of EVEN file                                             
   222 444 666 888   0 232 454                                      
_____________________________________________________________________
Fig.12.2 Operations on integer data



Example 12.3
Write a program to open a file named INVENTORY and store in it the following data:
         Item name      	 Number        	Price       	Quantity
            AAA-1          		111       	17.50           	115
            BBB-2           	125        	36.00               75
            C-3    	 			247         31.75               104

Extend the program to read this data from the file INVENTORY and display the inventory table with the value of each item.

The program is given in Fig.12.3.  The filename INVENTORY is supplied through the keyboard.  Data is read using the function fscanf from the file stdin, which refers to the terminal and it is then written to the file that is being pointed to by the file pointer fp.  Remember that the file pointer fp points to the file INVENTORY.

After closing the file INVENTORY, it is again reopened for reading.  The data from the file, along with the item values are written to the file stdout, which refers to the screen. While reading from a file, care should be taken to use the same format specifications with which the contents have been written to the file.＃谷

HANDLING OF FILES WITH MIXED DATA TYPES
(fscanf and fprinf)
Program
   #include  <stdio.h>                                              
                                                                    
   main()                                                           
   {
       FILE  *fp;                                                   
       int    number, quantity, i;                                  
       float  price, value;                                         
       char   item[10], filename[10];                               
                                                                    
       printf("Input file name\n");                                 
       scanf("%s", filename);                                       
       fp = fopen(filename, "w");                                   
       printf("Input inventory data\n\n");                          
       printf("Item name  Number   Price   Quantity\n");            
       for(i = 1; i <= 3; i++)                                      
       {
          fscanf(stdin, "%s %d %f %d",                              
                        item, &number, &price, &quantity);          
          fprintf(fp, "%s %d %.2f %d",                              
                        item, number, price, quantity);             
       }                                                            
       fclose(fp);                                                  
       fprintf(stdout, "\n\n");                                     
                                                                    
       fp = fopen(filename, "r");                                   
                                                                    
       printf("Item name  Number   Price   Quantity    Value\n");   
       for(i = 1; i <= 3; i++)                                      
       {
          fscanf(fp, "%s %d %f d",item,&number,&price,&quantity);  
          value = price * quantity;                                 
          fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f\n",            
                         item, number, price, quantity, value);     
       }                                                            
       fclose(fp);                                                  
   }                                                                

Output                                                           
                                                                    
   Input file name                                                  
   INVENTORY                                                        
   Input inventory data                                             
                                                                    
   Item name  Number   Price   Quantity                             
   AAA-1  111  17.50  115                                           
   BBB-2  125  36.00  75                                            
   C-3    247  31.75  104                                           
                                                                    
   Item name  Number   Price   Quantity    Value                    
   AAA-1        111    17.50      115     2012.50                   
   BBB-2        125    36.00       75     2700.00                   
   C-3          247    31.75      104     3302.00                   
                                                                    

Fig.12.3 Operations on mixed data types




Example 12.4

Write a program to illustrate error handling in file operations.

The program shown in Fig.12.4 illustrates the use of the NULL pointer test and feof function.  When we input filename as TETS, the function call
          fopen("TETS", "r");
returns a NULL pointer because the file TETS does not exist and therefore the message "Cannot open the file" is printed out.

Similarly, the call feof(fp2) returns a non-zero integer when the entire data has been read, and hence the program prints the message "Ran out of data" and terminates further reading.





		ERROR HANDLING IN FILE OPERATIONS 
Program
    #include  <stdio.h>                                             
                                                                    
    main()                                                          
    {                                                               
       char  *filename;                                            
        FILE  *fp1, *fp2;                                           
        int   i, number;                                            
                                                                    
        fp1 = fopen("TEST", "w");                                   
        for(i = 10; i <= 100; i += 10)                              
           putw(i, fp1);                                            
                                                                    
        fclose(fp1);                                                
                                                                    
        printf("\nInput filename\n");                               
                                                                    
    open_file:                                                      
        scanf("%s", filename);                                      
                                                                    
        if((fp2 = fopen(filename,"r")) == NULL)                     
        {                                                           
           printf("Cannot open the file.\n");                       
           printf("Type filename again.\n\n");                      
           goto open_file;                                          
        }                                                           
        else                                                        
                                                                    
        for(i = 1; i <= 20; i++)                                    
        {  number = getw(fp2);                                      
           if(feof(fp2))                                            
           {                                                        
              printf("\nRan out of data.\n");                       
              break;                                                
           }                                                        
           else                                                     
              printf("%d\n", number);                               
        }                                                           
                                                                    
        fclose(fp2);                                                
    }                                                               
                                                                    






Output                                                           
                                                                    
   Input filename                                                   
   TETS                                                             
   Cannot open the file.                                            
   Type filename again.                                             
                                                                    
   TEST                                                             
   10                                                               
   20                                                               
   30                                                               
   40                                                               
   50                                                               
   60                                                               
   70                                                               
   80                                                               
   90                                                               
   100                                                            

   Ran out of data.                                                 

Fig.12.4 Illustration of error handling





Example 12.5

Write a program that uses the functions ftell and fseek.

A program employing ftell and fseek functions is shown in Fig.12.5.  We have created a file RANDOM with the following contents:
        Position  ---->  0 1 2 . . . . . . . . . . . 25
        Character     
        stored    ---->  A B C . . . . . . . . . . . .Z

We are reading the file twice.  First, we are reading the content of every fifth position and printing its value along with its position on the screen.  The second time, we are reading the contents of the file from the end and printing the same on the screen.  

During the first reading, the file pointer crosses the end-of-file mark when the parameter n of fsee(fp,n,0) becomes 30.  Therefore, after printing the content of position 30, the loop is terminated.

For reading the file from the end, we use the statement
              fseek(fp,-1L,2);
to position the file pointer to the last character.  Since every read causes the position to move forward by one position, we have to move it back by two positions to read the next character.  This is achieved by the function
              fseek(fp, -2L, 1);
in the while statement.  This statement also tests whether the file pointer has crossed the file boundary or not.  The loop is terminated as soon as it crosses it.
     
ILLUSTRATION OF fseek & ftell FUNCTIONS
Program  
   #include <stdio.h>                                             
   main()                                                           
   {                                                                
       FILE  *fp;                                                   
       long  n;                                                     
       char c;                                                      
       fp = fopen("RANDOM", "w");                                   
       while((c = getchar()) != EOF)                                
           putc(c,fp);                                              
                                                                    
       printf("No. of characters entered = %ld\n", ftell(fp));      
       fclose(fp);                                                  
       fp = fopen("RANDOM","r");                                    
       n = 0L;                                                      
                                                                    
       while(feof(fp) == 0)                                         
       {                                                            
           fseek(fp, n, 0);  /*  Position to (n+1)th character */   
           printf("Position of %c is %ld\n", getc(fp),ftell(fp));  
           n = n+5L;                                                
       }                                                            
       putchar('\n');                                               
                                                                    
       fseek(fp,-1L,2);     /*  Position to the last character */   
         do                                                           
         {                                                          
             putchar(getc(fp));                                     
         }                                                          
         while(!fseek(fp,-2L,1));                                     
         fclose(fp);                                                  
   }                                                                
Output                                                           
                                                                    
   ABCDEFGHIJKLMNOPQRSTUVWXYZ^Z                                     
   No. of characters entered = 26                                   
   Position of A is 0                                               
   Position of F is 5                                               
   Position of K is 10                                              
   Position of P is 15                                              
   Position of U is 20                                              
   Position of Z is 25                                              
   Position of   is 30                                              
                                                                    
   ZYXWVUTSRQPONMLKJIHGFEDCBA                                       

Fig.12.5  Illustration of fseek and ftell functions


Example 12.6 
Write a program to append additional items to the file INVENTORY and print the total contents of the file.

The program is shown in Fig.12.6.  It uses a structure definition to describe each item and a function append() to add an item to the file.  

On execution, the program requests for the filename to which data is to be appended.  After appending the items, the position of the last character in the file is assigned to n and then the file is closed.

The file is reopened for reading and its contents are displayed.  Note that reading and displaying are done under the control of a while loop.  The loop tests the current file position against n and is terminated when they become equal.

APPENDING ITEMS TO AN EXISTING FILE
Program
   #include  <stdio.h>                                              
                                                                    
   struct invent_record                                             
   {
       char   name[10];                                             
       int    number;                                               
       float  price;                                                
       int    quantity;                                             
   };                                                               
                                                                    
   main()                                                           
   {
       struct invent_record item;                                   
       char  filename[10];                                          
       int   response;                                              
       FILE  *fp;                                                   
       long  n;                                                     
       void append (struct invent_record 8x, file *y);                                                             
       printf("Type filename:");                                    
       scanf("%s", filename);                                       
                                                                    
       fp = fopen(filename, "a+");                                  
       do                                                           
       {
          append(&item, fp);                                        
          printf("\nItem %s appended.\n",item.name);                
          printf("\nDo you want to add another item\                
   		(1 for YES /0 for NO)?");                                        
          scanf("%d", &response);                                   
       }  while (response == 1);                                    
                                                                    
       n = ftell(fp);      /* Position of last character  */        
       fclose(fp);                                                  
                                                                    
       fp = fopen(filename, "r");                                   
                            





                                        
       
  while(ftell(fp) < n)                                         
       {                                                            
          fscanf(fp,"%s %d %f %d",                                  
          item.name, &item.number, &item.price, &item.quantity); 
          fprintf(stdout,"%-8s %7d %8.2f %8d\n",                    
          item.name, item.number, item.price, item.quantity);    
       }                                                            
       fclose(fp);                                                  
   }                                                                
   void append(struct invent_record *product, File *ptr)
   {                                                                
       printf("Item name:");                                        
       scanf("%s", product->name);                                  
       printf("Item number:");                                      
       scanf("%d", &product->number);                               
       printf("Item price:");                                       
       scanf("%f", &product->price);                                
       printf("Quantity:");                                         
       scanf("%d", &product->quantity);                             
       fprintf(ptr, "%s %d %.2f %d",                                
                     product->name,                                 
                     product->number,                               
                     product->price,                                
                     product->quantity);                            
   }                                                                
                                                                    
Output                                                           
   Type filename:INVENTORY                                          
   Item name:XXX                                                    
   Item number:444                                                  
   Item price:40.50                                                 
   Quantity:34                                                      
   Item XXX appended.                                               
   Do you want to add another item(1 for YES /0 for NO)?1           
   Item name:YYY                                                    
   Item number:555                                                  
   Item price:50.50                                                 
   Quantity:45                                                      
   Item YYY appended.                                               
   Do you want to add another item(1 for YES /0 for NO)?0           
   AAA-1        111    17.50      115                               
   BBB-2        125    36.00       75                               
   C-3          247    31.75      104                               
   XXX          444    40.50       34                               
   YYY          555    50.50       45                               
Fig.12.6  Adding items to an existing file




Example 12.7
Write a program that will receive a filename and a line of text as command line arguments and write the text to the file.

Figure 12.7 shows the use of command line arguments.  The command line is 

F12_7 TEXT AAAAAA BBBBBB CCCCCC DDDDDD EEEEEE FFFFFF GGGGGG

Each word in the command line is an argument to the main and therefore the total number of arguments is 9.

The argument vector argv[1] points to the string TEXT and therefore the statement
              fp = fopen(argv[1], "w");
opens a file with the name TEXT.  The for loop that follows immediately writes the remaining 7 arguments to the file TEXT. 


			COMMAND LINE ARGUMENTS                 
Program
   #include  <stdio.h>                                              
                                                                    
   main(argc, argv)                                                 
   int  argc;                    /*   argument count           */   
   char *argv[];                 /*   list of arguments        */   
   {                                                                
       FILE   *fp;                                                  
       int  i;                                                      
       char word[15];                                               
                                                                    
       fp = fopen(argv[1], "w"); /* open file with name argv[1] */  
       printf("\nNo. of arguments in Command line = %d\n\n",argc); 
       for(i = 2; i < argc; i++)                                    
          fprintf(fp,"%s ", argv[i]); /* write to file argv[1]  */  
       fclose(fp);                                                  
                                                                    
   /*  Writing content of the file to screen                    */  
                                                                    
       printf("Contents of %s file\n\n", argv[1]);                  
       fp = fopen(argv[1], "r");                                    
       for(i = 2; i < argc; i++)                                    
       {
          fscanf(fp,"%s", word);                                    
          printf("%s ", word);                                      
       } 
                                                           
       fclose(fp);                                                  
       printf("\n\n");                                              
                                                                    
   /*  Writing the arguments from memory */  
                                                                    
       for(i = 0; i < argc; i++)                                    
          printf("%*s \n", i*5,argv[i]);                            
   }                                                                
                                                                    
                                                                    
Output                                                           
                                                                    
   C>F12_7 TEXT AAAAAA BBBBBB CCCCCC DDDDDD EEEEEE FFFFFF GGGGG    
                                                                    
   No. of arguments in Command line = 9                             

   Contents of TEXT file                                            
                                                                    
   AAAAAA BBBBBB CCCCCC DDDDDD EEEEEE FFFFFF GGGGGG                 
                                                                    
   C:\C\F12_7.EXE                                                   
    TEXT                                                            
       AAAAAA                                                       
            BBBBBB                                                  
                 CCCCCC                                             
                      DDDDDD                                        
                           EEEEEE                                   
                                FFFFFF                              
                                     GGGGGG 
                        
                                                                    
Fig.12.7  Use of command line arguments

 
CHAPTER 13:


Example 13.1
Write a program that uses a table of integers whose size will be specified interactively at run time.

The program is given in Fig.13.2. It tests for availability of memory space of required size.  If it is available, then the required space is allocated and the address of the first byte of the space allocated is displayed.  The program also illustrates the use of pointer variable for storing and accessing the table values.

USE OF malloc FUNCTION

Program

#include <stdio.h>
#include <stdlib.h>
#define NULL 0

main()
{
	int *p, *table;
	int size;
	printf(※\nWhat is the size of table?§);
	scanf(※%d§,size);
	printf(※\n§)
		/*------------Memory allocation --------------*/
	if((table = (int*)malloc(size *sizeof(int))) == NULL)
		{
			printf(※No space available \n§);
			exit(1);
		}
	printf(※\n Address of the first byte is  %u\n§, table);
	/* Reading table values*/
	printf(※\nInput table values\n§);

	for (p=table; p<table + size; p++)
		  scanf(※%d§,p);
	/* Printing table values in reverse order*/
	for (p = table + size 每1; p >= table; p --)
		printf(※%d is stored at address %u \n§,*p,p);

}

Output

What is the size of the table? 5
Address of the first byte is 2262
Input table values
11 12 13 14 15
15 is stored at address 2270
14 is stored at address 2268
13 is stored at address 2266
12 is stored at address 2264
11 is stored at address 2262

Fig.13.2 Memory allocation with malloc


Example 13.2
Write a program to store a character string in a block of memory space created by malloc and then modify the same to store a larger string.
The program is shown in Fig. 13.3.  The output illustrates that the original buffer size obtained is modified to contain a larger string.  Note that the original contents of the buffer remains same even after modification of the original size.

USE OF realloc AND free FUNCTIONS
Program
#include <stdio.h>
#include<stdlib.h>
#define NULL 0
main()
{
	char *buffer;
	/* Allocating memory */
	if((buffer = (char *)malloc(10)) == NULL)
	{
		printf(※malloc failed.\n§);
		exit(1);
	}
	printf(※Buffer of size %d created \n§,_msize(buffer));
	strcpy(buffer, ※HYDERABAD§);
	printf(※\nBuffer contains: %s \n ※, buffer);
	/* Realloction */
	if((buffer = (char *)realloc(buffer, 15)) == NULL)
	{
		printf(※Reallocation failed. \n§);
		exit(1);
	}
	printf(※\nBuffer size modified. \n§);
	printf(※\nBuffer still contains: %s \n§,buffer);
	strcpy(buffer, ※SECUNDERBAD§);
	printf(※\nBuffer now contains: %s \n§,buffer);
/* Freeing memory */
free(buffer);
 }

Output
Buffer of size 10 created
Buffer contains: HYDERABAD
Buffer size modified
Buffer still contains: HYDERABAD
Buffer now contains: SECUNDERABAD

Fig . 13.3 Reallocation and release of memory space




Example 13.3

Write a program to create a linear linked list interactively and print out the list and the total number of items in the list.

The program shown in Fig.13.7 first allocates a block of memory dynamically for the first node using the statement

				head = (node *)malloc(sizeof(node));

which returns a pointer to a structure of type node that has been type defined earlier.  The linked list is then created by the function create.  The function requests for the number to be placed in the current node that has been created.  If the value assigned to the current node is 每999, then null is assigned to the pointer variable next and the list ends.  Otherwise, memory space is allocated to the next node using again the malloc function and the next value is placed into it.  Not that the function create calls itself recursively and the process will continue until we enter the number 每999.

The items stored in the linked list are printed using the function print which accept a pointer to the current node as an argument.  It is a recursive function and stops when it receives a NULL pointer.  Printing algorithm is as follows;
1.Start with the first node.
2.While there are valid nodes left to print
a) print the current item and
b) advance to next node

Similarly, the function count counts the number of items in the list recursively and return the total number of items to the main function. Note that the counting does not include the item 每999 (contained in the dummy node).

CREATING A LINEAR LINKED LIST
Program

#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;  /* node type defined */

main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	head = (node *)malloc(sizeof(node));
	create(head);
	printf(※\n§);
	printf(head);
	printf(※\n§);
	printf(※\nNumber of items = %d \n§, count(head));
}
void create(node *list)
{
	printf(※Input a number\n§);
	printf(※(type 每999 at end): §);
	scanf(※%d§, &list -> number); /* create current node */

	if(list->number == -999)
	{
		list->next = NULL;
	}
	else 	/*create next node */
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}
void print(node *list)
{
		if(list->next != NULL)
		{
		  printf(※%d-->§,list ->number);  /* print current item */
		  
		   if(list->next->next == NULL)
			printf(※%d§, list->next->number);

		  printf(list->next);		/* move to next item */
		}
		return;
	}

	int count(node *list)
	{
		if(list->next == NULL)
		       return (0);
		else
		       return(1+ count(list->next));
	}


Output

Input a number
(type 每999 to end); 60
Input a number
(type 每999 to end); 20
Input a number
(type 每999 to end); 10
Input a number
(type 每999 to end); 40
Input a number
(type 每999 to end); 30
Input a number
(type 每999 to end); 50
Input a number
(type 每999 to end); -999

60 -->20 -->10 -->40 -->30 -->50 --> -999

Number of items = 6


Fig. 13.7 Creating a linear linked list



Example 13.4
Write a function to insert a given item before a specified node known as key node.

The function insert shown in Fig.13.8 requests for the item to be inserted as well as the ＆key node§.  If the insertion happens to be at the beginning, then memory space is created for the new node, the value of new item is assigned to it and the pointer head is assigned to the next member.  The pointer new which indicates the beginning of the new node is assigned to head.  Note the following statements:

new->number = x;
new->next = head;
head = new;

FUNCTION INSERT

node *insert(node *head)
{
	node *find(node *p, int a);
	node *new;   		/* pointer to new node */
	node *n1;		/* pointer to node preceding key node */
	int key;
	int x;			/* new item (number) to be inserted */

	printf(※Value of new item?§);
	scanf(※%d§, &x);
	printf(※Value of key item ? (type 每999 if last) ※);
	scanf(※%d§, &key);

	if(head->number == key) 		/* new node is first */
	{
	new = (node *)malloc(size of(node));
	new ->number = x;
	new->next = head;
	head = new;
	}
	else		/* find key node and insert new node */
	{			/* before the key node */
		n1 = find(head, key);    /* find key node */

		if(n1 == NULL)
		   printf(※\n key is not found \n§);
		else		/* insert new node */
		{
	new = (node *)malloc(sizeof(node));
	new->number = x;
	new->next = n1->next;
	n1->next = new;
		}
  	}
return(head);
}
node *find(node *lists, int key)
{
		if(list->next->number == key)  	/* key found */
			return(list);
	else

		if(list->next->next == NULL) 	/* end */
			return(NULL);
	else
		find(list->next, key);
}

Fig. 13.8 A function for inserting an item into a linked list



Example 13.5
Write a function to delete a specified node.

A function to delete a specified node is given in Fig.13.9.  The function first checks whether the specified item belongs to the first node.  If yes, then the pointer to the second node is temporarily assigned the pointer variable p, the memory space occupied by the first node is freed and the location of the second node is assigned to head.  Thus, the previous second node becomes the first node of the new list.

If the item to be deleted is not the first one, then we use the find function to locate the position of ＆key node＊ containing the item to be deleted. The pointers are interchanged with the help of a temporary pointer variable making the pointer in the preceding node to point to the node following the key node.  The memory space of key node that has been deleted if freed.  The figure below shows the relative position of the key node.
						key node

											 
	
		       n1			       n1->next		        n1->next->next		
The execution of the following code deletes the key node.

p = n1->next->next;
free (n1->next);
n1->next = p;		n1->next

					   key node

											 
	
	        n1	

FUNCTION DELETE

node *delete(node *head)
{
	node *find(node *p, int a);
	int  key;	/* item to be deleted */
	node *n1;	/* pointer to node preceding key node */
	node *p;		/* temporary pointer */
	printf(※\n What is the item (number) to be deleted?§);
	scanf(※%d§, &key);
	if(head->number == key) 	/* first node to be deleted) */
	{
		p = head->next;		/* pointer to 2nd node  in list */
		free(head);		/* release space of key node */
		head = p;			/* make head to point to 1st node */
	}
	else
	{
		n1 = find(head, key);
		if(n1 == NULL)
		   printf(※\n key not found \n§);
		else						/* delete key node */
		{
			p = n1->next->next;		/*  pointer to the node 
							    following the keynode */
	
			free(n1->next);			/* free key node */
			n1->next = p;			/* establish link */
		}
	}
return(head);
}
/* USE FUNCTION find() HERE */


Fig.13.9 A function for deleting an item from linked list


///::~


Gursharan Singh Tatla
www.eazynotes.com
"c-programs.zip"
File Location(PATH) "/media/it/新加卷/A/cprogrammingquestion/"

  1. Program to add two matrices.
  2. Program to calculate the net salary.
  3. Program to check whether a character is vowel or not by using switch statement.
  4. Program to check whether the given number is an armstrong number.
  5. Program to compare two strings using strcmp.
  6. Program to compare two strings without using strcmp.
  7. Program to concatenate two strings using strcat.
  8. Program to concatenate two strings without using strcat.
  9. Program to convert temperature from degree centigrade to fahrenheit.
 10. Program to convert time in seconds to hours minutes and seconds.
 11. Program to copy contents of one file to another.
 12. Program to copy one string to another without using strcpy.
 13. Program to copy string using strcpy.
 14. Program to count number of words and number of characters in a string.
 15. Program to find area of a triangle using hero formula.
 16. Program to find area of square and circumference of a circle.
 17. Program to find factorial of a number using recursion.
 18. Program to find factorial of a number without using recursion.
 19. Program to find hcf of two numbers using recursion.
 20. Program to find hcf of two numbers without recursion. 
 21. Program to find largest of three numbers.
 22. Program to find length of a string using strlen.
 23. Program to find length of a string without using strlen.
 24. Program to find simple interest and compound interest.
 25. Program to find smallest among n numbers.
 26. Program to find sphere surface area and volume of a sphere.
 27. Program to find sum and average of three real numbers.
 28. Program to find the sum of digits of a positive integer.
 29. Program to find the sum of even and odd numbers from first 100 positive integers.
 30. Program to find the sum of first 100 positive integers. 
 31. Program to find value of sinx using expansion series.
 32. Program to find vowels in a string.
 33. Program to find whether a number is palindrome or not.
 34. Program to find whether a string is palindrome or not without using string functions.
 35. Program to find whether a string is palindrome or not.
 36. Program to find whether the given number is a prime number.
 37. Program to illustrate the concept of passing 1d array to function.
 38. Program to illustrate the concept of passing 2d array to function.
 39. Program to illustrate the concept of pointers.
 40. Program to implement break statement. 
 41. Program to implement continue statement.
 42. Program to implement structure with array.
 43. Program to implement structure with function.
 44. Program to implement structure with pointers.
 45. Program to implement structure.
 46. Program to input output strings using character functions.
 47. Program to input output strings using gets and puts.
 48. Program to input output strings using printf and scanf.
 49. Program to multiply two matrices.
 50. Program to print a file and count number of characters. 
 51. Program to print a table of any number.
 52. Program to print fibonacci series using recursion.
 53. Program to print fibonacci series without recursion.
 54. Program to print first n prime numbers.
 55. Program to print the numbers which are divisible by 3 and 5 from first 100 natural numbers.
 56. Program to print the pattern1.
 57. Program to print transpose of a matrix.
 58. Program to read data from file using fscanf.
 59. Program to reverse a given number. 
 60. Program to reverse a string using strrev.
 61. Program to reverse a string without using strrev.
 62. Program to search an array using binary search.[CODE INCOMPLETE]
 63. Program to search an array using linear search.
 64. Program to show call by reference.
 65. Program to show call by value.
 66. Program to sort an array using bubble sort.
 67. Program to sort an array using selection sort.
 68. Program to swap values of two variables using third variable.
 69. Program to swap values of two variables without using third variable.
 70. Program to write and read a character from a file.
 71. Program to write and read a string from a file.
 72. Program to write and read an integer from a file.
 73. Program to write data into a file using fprintf.

 
www.eazynotes.com
Gursharan Singh Tatla

/* **Program to Add Two Matrices** */

Page No. 1

#include <stdio.h>
main()
{
int a[10][10], b[10][10], c[10][10], i, j, row, col;
printf("\nEnter number of rows and columns: ");
scanf("%d %d", &row, &col);
printf("\nEnter elements of Array A:\n");
for (i=0; i<row; i++)
for (j=0; j<col; j++)
scanf("%d", &a[i][j]);
printf("\nEnter elements of Array B:\n");
for (i=0; i<row; i++)
for (j=0; j<col; j++)
scanf("%d", &b[i][j]);
printf("\nElements of Matrix A:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
printf("\nElements of Matrix B:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", b[i][j]);
printf("\n\n");
}

www.eazynotes.com
Gursharan Singh Tatla

for (i=0; i<row; i++)
for (j=0; j<col; j++)
c[i][j] = a[i][j] + b[i][j];
printf("\nMatrix Addition is:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", c[i][j]);
printf("\n");
}
}
getch();

Page No. 2


www.eazynotes.com
Gursharan Singh Tatla
Page No. 1

/*
Basic salary of an employee is input through the keyboard. The DA
is 25% of the basic salary while the HRA is 15% of the basic
salary. Provident Fund is deducted at the rate of 10% of the gross
salary(BS+DA+HRA).
Program to Calculate the Net Salary.
*/
#include <stdio.h>
main()
{
float basic_sal, da, hra, pf, gross_sal, net_sal;
printf("\nEnter basic salary of the employee: Rs. ");
scanf("%f", &basic_sal);
da = (basic_sal * 25)/100;
hra = (basic_sal * 15)/100;
gross_sal = basic_sal + da + hra;
pf = (gross_sal * 10)/100;
net_sal = gross_sal - pf;
printf("\n\nNet Salary: Rs. %.2f", net_sal);
getch();
}

www.eazynotes.com
Gursharan Singh Tatla
Page No. 1
/*
Program to Check Whether a Character is a Vowel or not by using
switch Statement
*/
#include <stdio.h>
main()
{
char ch;
printf("\nEnter any character: ");
scanf("%c", &ch);
switch (ch)
{
case 'a':
case 'A':
printf("\n\n%c is a vowel", ch);
break;
case 'e':
case 'E':
printf("\n\n%c is a vowel", ch);
break;
case 'i':
case 'I':
printf("\n\n%c is a vowel", ch);
break;

www.eazynotes.com
Gursharan Singh Tatla

case 'o':
case 'O':
printf("\n\n%c is a vowel", ch);
break;
case 'u':
case 'U':
printf("\n\n%c is a vowel", ch);
break;
default:
printf("\n\n%c is not a vowel", ch);
}
}
getch();

Page No. 2

www.eazynotes.com
Gursharan Singh Tatla
Page No. 1
/*
Program to Check Whether the Given Number is an Armstrong Number
*/
#include <stdio.h>
main()
{
int n, temp, d, arm=0;
printf("\nEnter any number: ");
scanf("%d", &n);
temp = n;
while (temp > 0)
{
d = temp%10;
temp = temp/10;
arm = arm + (d*d*d);
}
}
if (arm == n)
printf("\n\n%d is an Armstrong number\n", n);
else
printf("\n\n%d is not an Armstrong number\n", n);
getch();


www.eazynotes.com
Gursharan Singh Tatla
/***
 Program to Compare Two Strings using strcmp()
 ***/
#include <stdio.h>
#include <string.h>
main()
{
char s1[20], s2[20];
int result;
printf("\nEnter first string: ");
gets(s1);
printf("\nEnter second string: ");
gets(s2);
result = strcmp(s1, s2);
if (result == 0)
printf("\nBoth strings are equal");
else
printf("\nBoth strings are not equal");
getch();
}
Page No. 1

www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Compare Two Strings Without using strcmp() **/
#include<stdio.h>
main()
{
char string1[5],string2[5];
int i,temp = 0;
printf("Enter the string1 value:\n");
gets(string1);
printf("\nEnter the String2 value:\n");
gets(string2);
for(i=0; string1[i]!='\0'; i++)
{
if(string1[i] == string2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("Both strings are same.");
else
printf("Both string not same.");
}
getch();


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/****
 Program to Concatenate Two Strings using strcat()
 ****/
#include <stdio.h>
#include <string.h>
main()
{
char s1[20], s2[20];
printf("\nEnter first string: ");
gets(s1);
printf("\nEnter second string: ");
gets(s2);
strcat(s1, s2);
printf("\nThe concatenated string is: %s", s1);
getch();
}

www.eazynotes.com
 Neeru Babber
 Page No. 1
/*
 Program to Concatenate Two Strings without using strcat()
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char string1[30], string2[20];
int i, length=0, temp;
}
printf("Enter the Value of String1: \n");
gets(string1);
printf("\nEnter the Value of String2: \n");
gets(string2);
for(i=0; string1[i]!='\0'; i++)
length++;
temp = length;
for(i=0; string2[i]!='\0'; i++)
{
string1[temp] = string2[i];
temp++;
}
string1[temp] = '\0';
printf("\nThe concatenated string is:\n");
puts(string1);
getch();

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Convert Temperature from Degree Centigrade to Fahrenheit
f = (1.8*c) + 32
*/
#include <stdio.h>
main()
{
float c, f;
printf("\nEnter temperature in degree Centigrade: ");
scanf("%f", &c);
f = (1.8*c) + 32;
printf("\n\nTemperature in degree Fahrenheit: %.2f", f);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Convert Time in Seconds to Hours, Minutes and Seconds
*/
#include <stdio.h>
main()
{
long sec, hr, min, t;
printf("\nEnter time in seconds: ");
scanf("%ld", &sec);
hr = sec/3600;
t = sec%3600;
min = t/60;
sec = t%60;
printf("\n\nTime is %ld hrs %ld mins %ld secs", hr, min, sec);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Copy Contents of One File to Another
#include <stdio.h>
main()
{
FILE *fp1, *fp2;
char ch;
fp1 = fopen("abc.txt", "r");
fp2 = fopen("xyz.txt", "w");
while((ch = getc(fp1)) != EOF)
putc(ch, fp2);
fclose(fp1);
fclose(fp2);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Neeru Babber
 Page No. 1
/* Program to Copy one String to Another Without Using strcpy() */
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char string1[20], string2[20];
int i;
printf("Enter the value of STRING1: \n");
gets(string1);
for(i=0; string1[i]!='\0'; i++)
string2[i]=string1[i];
string2[i]='\0';
printf("\nThe value of STRING2 is:\n");
puts(string2);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Copy String using strcpy()
#include <stdio.h>
#include <string.h>
main()
{
char s1[20], s2[20];
printf("\nEnter string into s1: ");
gets(s1);
strcpy(s2, s1);
printf("\ns2: %s", s2);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Count Number of Words and Number of Characters in a
String
*/
#include <stdio.h>
#include <string.h>
main()
{
char str[20];
int i=0, word=0, chr=0;
printf("\nEnter any string: ");
gets(str);
while (str[i] != '\0')
{
if (str[i] == ' ')
{
word++;
chr++;
}
else
chr++;
i++;
}
}
printf("\nNumber of characters: %d", chr);
printf("\nNumber of words: %d", word+1);
getch();

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/**
 Program to Find Area of a Triangle using Hero’s Formula
 **/
#include <stdio.h>
#include <math.h>
main()
{
float a, b, c, s, area;
back:
printf("\nEnter three sides of a triangle: ");
scanf("%f %f %f", &a, &b, &c);
if (a==0 || b==0 || c==0)
{
printf("\nValue of any side should not be equal to
zero\n");
goto back;
}
if (a+b<c || b+c<a || c+a<b)
{
printf("\nSum of two sides should not be less than
third\n");
goto back;
}
}
s = (a + b + c) / 2;
area = sqrt(s * (s - a) * (s - b) * (s - c));
printf("\n\nArea of triangle: %.2f", area);
getch();

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/** Program to Find Area of Square & Circumference of a Circle **/
#include <stdio.h>
#define PI 3.142
main()
{
float len, r, area, circum;
printf("\nEnter length of a square: ");
scanf("%f", &len);
area = len * len;
printf("\nEnter radius of a circle: ");
scanf("%f", &r);
circum = 2 * PI * r;
printf("\nArea of square = %.2f", area);
printf("\nCircumference of circle = %.2f", circum);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/**
 Program to Find Factorial of a Number using Recursion
 **/
#include <stdio.h>
long fact(int);
main()
{
int n;
long f;
printf("\nEnter number to find factorial: ");
scanf("%d", &n);
f = fact(n);
printf("\nFactorial: %ld", f);
getch();
}
long fact(int n)
{
int m;
if (n == 1)
return n;
else
{
m = n * fact(n-1);
return m;
}
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/* Program to Find Factorial of a Number without using Recursion */
#include <stdio.h>
main()
{
int n, i;
long fact=1;
printf("\nEnter any number: ");
scanf("%d", &n);
for (i=1; i<=n; i++)
fact = fact*i;
printf("\nFactorial = %ld", fact);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
 Program to Find HCF of Two Numbers using Recursion
 */
#include <stdio.h>
int hcf(int, int);
main()
{
int h, i, a, b;
printf("\nEnter values of two numbers: ");
scanf("%d %d", &a, &b);
h = hcf(a, b);
printf("\nHCF of numbers is: %d", h);
getch();
}
int hcf(int a, int b)
{
if (a%b == 0)
return b;
else
return hcf(b, a%b);
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Find HCF of Two Numbers Without Recursion
 ***/
#include <stdio.h>
main()
{
int q, m, n, temp;
printf("\nEnter values of two numbers: ");
scanf("%d %d", &m, &n);
if (m == 0)
{
printf("\nHCF of number is: %d", n);
goto end;
}
if (n == 0)
{
printf("\nHCF of numbers is: %d", m);
goto end;
}
if (n > m)
{
temp = m;
m = n;
n = temp;
}
www.eazynotes.com
q = 1;
Gursharan Singh Tatla
while (q != 0)
{
q = m % n;
if (q != 0)
{
m = n;
n = q;
}
}
printf("\nHCF of number is: %d", n);
end:
getch();
}
Page No. 2


www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Find Largest of Three Numbers
#include <stdio.h>
main()
{
int a, b, c;
printf("\nEnter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
if (a>b && a>c)
printf("\n\n%d is greater", a);
else if (b>a && b>c)
printf("\n\n%d is greater", b);
else
printf("\n\n%d is greater", c);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Find Length of a String using strlen()
 ***/
#include <stdio.h>
#include <string.h>
main()
{
char s1[20];
int len;
printf("\nEnter any string: ");
gets(s1);
len = strlen(s1);
printf("\nLength of string: %d", len);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*** Program to Find Length of a String Without using strlen() ***/
#include <stdio.h>
main()
{
char str[20];
int i = 0;
printf("\nEnter any string: ");
gets(str);
while (str[i] != '\0')
i++;
printf("\nLength of string: %d", i);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
/*
Program to find Simple Interest and Compound Interest
SI = (p * r * t) / 100
CI = p * pow((1 + r/100), t) - p
*/
#include <stdio.h>
#include <math.h>
main()
{
float p, r, t, si, ci;
printf("\nEnter priciple, rate and time: ");
scanf("%f %f %f", &p, &r, &t);
si = (p * r * t) / 100;
ci = p * pow((1 + r/100), t) - p;
printf("\n\nSimple Interest: %.2f", si);
printf("\n\nCompound Interest: %.2f", ci);
getch();
}
Page No. 1


www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Find Smallest Among N Numbers
#include <stdio.h>
main()
{
int a[10], i, small;
printf("\nEnter elements of an array:\n");
for (i=0; i<=9; i++)
scanf("%d", &a[i]);
small = a[0];
for (i=0; i<=9; i++)
if (a[i] < small)
small = a[i];
printf("\nSmallest number is %d", small);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to find Sphere Surface Area and Volume of a Sphere
Sphere Surface Area = 4 * PI * r * r
Volume of Sphere
 = (4/3) * PI * r * r * r
*/
#include <stdio.h>
#define PI 3.142
main()
{
float r, area, vol;
printf("\nEnter radius of Sphere: ");
scanf("%f", &r);
area = 4 * PI * r * r;
vol = (4/3) * PI * r * r * r;
printf("\nSphere Surface Area = %.2f", area);
printf("\nVolume of Sphere = %.2f", vol);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/****
 Program to Find Sum and Average of Three Real Numbers
 ****/
#include <stdio.h>
main()
{
float a, b, c, sum, avg;
printf("\nEnter value of three numbers: ");
scanf("%f %f %f", &a, &b, &c);
sum = a + b + c;
avg = sum / 3;
printf("\nSum = %.2f", sum);
printf("\nAverage = %.2f", avg);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
 Program to Find the Sum of Digits of a Positive Integer
 */
#include <stdio.h>
main()
{
long n;
int digit, sum = 0;
printf("\nEnter any number: ");
scanf("%d", &n);
while (n > 0)
{
digit = n%10;
n = n/10;
sum = sum + digit;
}
printf("\n\nSum of digits: %d", sum);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Find the Sum of Even and Odd Numbers from First 100
Positive Integers
*/
#include <stdio.h>
main()
{
int i, sumEven=0, sumOdd=0;
for (i=0; i<=100; i++)
if (i%2 == 0)
sumEven = sumEven + i;
else
sumOdd = sumOdd + i;
}
printf("\nSum of first even 100 numbers: %d\n", sumEven);
printf("\nSum of first odd 100 numbers: %d\n", sumOdd);
getch();

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
 Program to Find the Sum of First 100 Positive Integers
 */
#include <stdio.h>
main()
{
int i, sum=0;
printf("\n\tSum of first 100 positive numbers\n");
for(i=0; i<=100; i++)
sum = sum + i;
printf("\nSum = %d", sum);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Find Value of sin(x) using Expansion Series Given Below:
sin(x) = x - x3/3! + x5/5! - x7/7!........
*/
#include <stdio.h>
#include <math.h>
main()
{
float base, pwr, sum, c=1, m=2, i=3, g, h;
printf("\nEnter the base value: ");
scanf("%f", &base);
printf("\nEnter the power value: ");
scanf("%f", &pwr);
sum = base;
ab:
m = m * i;
h = pow(-1, c);
g = pow(base, i);
sum = sum + (h * g) / m;
i = i + 2;
c++;
m = m * (i - 1);
www.eazynotes.com
 Gursharan Singh Tatla
if (i <= pwr)
goto ab;
printf("\n\nSum = %f", sum);
getch();
}
Page No. 2

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Find Vowels in a String
 ***/
#include <stdio.h>
#include <string.h>
main()
{
char str[20];
int count=0, i=0;
printf("\nEnter any string: ");
gets(str);
while (str[i] != '\0')
{
if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u')
count++;
i++;
}
printf("\nNo. of vowels: %d", count);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Find Whether a Number is Palindrome or Not
 ***/
#include <stdio.h>
main()
{
int n, pal=0, temp, x;
printf("\nEnter any number: ");
scanf("%d", &n);
temp = n;
while (temp > 0)
{
x = temp%10;
temp = temp/10;
pal = pal*10 + x;
}
if (pal == n)
printf("\n%d is palindrome", n);
else
printf("\n%d is not palindrome", n);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/* Program to Find Whether a String is Palindrome or Not without
using String Functions */
#include#include<stdio.h>
<string.h>
main()
{
char s1[20];
int i, j, len=0, flag=0;
printf("\nEnter any string: ");
gets(s1);
}
for (i=0; s1[i]!='\0'; i++)
len++;
i = 0;
j = len-1;
while (i < len)
{
if (s1[i] != s1[j])
{
flag = 1;
break;
}
i++;
j--;
}
if (flag == 0)
printf("\nString is palindrome");
else
printf("\nString is not palindrome");
getch();

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Find Whether a String is Palindrome or Not
 ***/
#include <stdio.h>
#include <string.h>
main()
{
char s1[20], s2[20];
int result;
printf("\nEnter any string: ");
gets(s1);
strcpy(s2, s1);
strrev(s2);
result = strcmp(s1, s2);
if(result == 0)
printf("\nIt is a palindrome string");
else
printf("\nIt is not a palindrome string");
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
 Program to Find Whether the Given Number is a Prime Number
 */
#include <stdio.h>
main()
{
int n, i;
printf("\nEnter any number: ");
scanf("%d", &n);
for (i=2; i<n; i++)
if (n%i == 0)
{
printf("\n\n%d is not a prime number\n", n);
break;
}
if (i >= n)
printf("\n\n%d is a prime number\n", n);
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Illustrate the Concept of Passing 1-D Array to Function
Program to Find Largest from an Array
*/
#include <stdio.h>
#define SIZE 50
int big(int [], int);
main()
{
int a[SIZE], n, i, b;
printf("\nEnter size of array: ");
scanf("%d", &n);
printf("\nEnter elements:\n");
for (i=0; i<n; i++)
scanf("%d", &a[i]);
b = big(a, n);
printf("\nLargest number: %d", b);
getch();
}
int big(int a[], int n)
{
int b, i;
b = a[0];
www.eazynotes.com
for (i=0; i<n; i++)
if (a[i] > b)
b = a[i];
return b;
}
Gursharan Singh Tatla
Page No. 2


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Illustrate the Concept of Passing 2-D Array to Function
Program to Find Sum of Diagonal Elements of a Matrix
*/
#include <stdio.h>
#define ROW 10
#define COL 10
int diagonal_sum(int [][], int, int);
main()
{
int a[ROW][COL], row, col, i, j, sum;
printf("\nEnter no. of rows and columns of a matrix: ");
scanf("%d %d", &row, &col);
printf("\nEnter elements:\n");
for (i=0; i<row; i++)
for (j=0; j<col; j++)
scanf("%d", &a[i][j]);
}
printf("\nMatrix is:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
sum = diagonal_sum(a, row, col);
printf("\nSum: %d", sum);
getch();
www.eazynotes.com
 Gursharan Singh Tatla
int diagonal_sum(int x[ROW][COL], int r, int c)
{
int i, j, s=0;
for (i=0; i<r; i++)
for (j=0; j<c; j++)
if (i == j)
s = s + x[i][j];
return s;
}
Page No. 2


www.eazynotes.com
 Gursharan Singh Tatla
/****
 Program to Illustrate the Concept of Pointers
#include <stdio.h>
main()
{
int a = 10;
int *p;
p = &a;
printf("\nAddress of a: %u", &a);
printf("\n\nAddress of a: %u", p);
printf("\n\nAddress of p: %u", &p);
printf("\n\nValue of p: %d", p);
printf("\n\nValue of a: %d", a);
printf("\n\nValue of a: %d", *(&a));
printf("\n\nValue of a: %d", *p);
getch();
}
Page No. 1
****/


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Implement break Statement
 ***/
#include <stdio.h>
main()
{
int i;
for (i=1; i<=10; i++)
{
printf("\n%d", i);
if (i == 7)
break;
}
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Implement continue Statement
 ***/
#include <stdio.h>
main()
{
int i, n, a, sq;
printf("\n\tProgram finds square of positive numbers only\n");
printf("\nHow many numbers you want to enter: ");
scanf("%d", &n);
for (i=1; i<=n; i++)
{
printf("\nEnter number: ");
scanf("%d", &a);
if (a < 0)
continue;
sq = a * a;
printf("\nSquare = %d\n", sq);
}
getch();
}


www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Array **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
struct student s1[3];
main()
{
int i;
printf("Enter Name, RollNo, Marks:\n");
for(i=0; i<=2; i++)
scanf("%s %d %f",&s1[i].name,&s1[i].rollno,&s1[i].marks);
printf("Student Name\tStudent Rollno\tStudent Marks:");
for(i=0; i<=2; i++)
printf("\n%s\t\t%d\t\t%f", s1[i].name, s1[i].rollno,
s1[i].marks);
getch();
}

www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Function **/
#include<stdio.h>
struct student
{
char name;
int rollno;
float marks;
};
struct student std_func(char, int, float);
main()
{
struct student s1 = {'x', 888, 450};
std_func(s1.name, s1.rollno, s1.marks);
getch();
}
struct student std_func(char name, int rollno, float marks)
{
printf("Name\tRoll No.\tMarks\n");
printf("%c\t%d\t\t%f", name, rollno, marks);
}

www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Pointers **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
void show(struct student *);
main()
{
struct student s1 = {"xyz", 1, 450};
show(&s1);
getch();
}
void show(struct student *ptr)
{
printf("Student name\tRollno\tMarks\n");
printf("%s\t\t%i\t%f",ptr->name,ptr->rollno,ptr->marks);
}

www.eazynotes.com
 Neeru Babber
/** Program to Implement Structure **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
main()
{
struct student s1 = {"abc", 1, 450};
struct student s2;
printf("Enter student Name, Rollno, Marks:\n");
scanf("%s%i%f", &s2.name, &s2.rollno, &s2.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
printf("\n");
printf("%s\t%i\t%f",s2.name,s2.rollno,s2.marks);
getch();
}
Page No. 1

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Illustrate the Concept of Passing 1-D Array to Function
Program to Find Largest from an Array
*/
#include <stdio.h>
#define SIZE 50
int big(int [], int);
main()
{
int a[SIZE], n, i, b;
printf("\nEnter size of array: ");
scanf("%d", &n);
printf("\nEnter elements:\n");
for (i=0; i<n; i++)
scanf("%d", &a[i]);
b = big(a, n);
printf("\nLargest number: %d", b);
getch();
}
int big(int a[], int n)
{
int b, i;
b = a[0];
www.eazynotes.com
for (i=0; i<n; i++)
if (a[i] > b)
b = a[i];
return b;
}
Gursharan Singh Tatla
Page No. 2

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Illustrate the Concept of Passing 2-D Array to Function
Program to Find Sum of Diagonal Elements of a Matrix
*/
#include <stdio.h>
#define ROW 10
#define COL 10
int diagonal_sum(int [][], int, int);
main()
{
int a[ROW][COL], row, col, i, j, sum;
printf("\nEnter no. of rows and columns of a matrix: ");
scanf("%d %d", &row, &col);
printf("\nEnter elements:\n");
for (i=0; i<row; i++)
for (j=0; j<col; j++)
scanf("%d", &a[i][j]);
}
printf("\nMatrix is:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
sum = diagonal_sum(a, row, col);
printf("\nSum: %d", sum);
getch();
www.eazynotes.com
 Gursharan Singh Tatla
int diagonal_sum(int x[ROW][COL], int r, int c)
{
int i, j, s=0;
for (i=0; i<r; i++)
for (j=0; j<c; j++)
if (i == j)
s = s + x[i][j];
return s;
}
Page No. 2

www.eazynotes.com
 Gursharan Singh Tatla
/****
 Program to Illustrate the Concept of Pointers
#include <stdio.h>
main()
{
int a = 10;
int *p;
p = &a;
printf("\nAddress of a: %u", &a);
printf("\n\nAddress of a: %u", p);
printf("\n\nAddress of p: %u", &p);
printf("\n\nValue of p: %d", p);
printf("\n\nValue of a: %d", a);
printf("\n\nValue of a: %d", *(&a));
printf("\n\nValue of a: %d", *p);
getch();
}
Page No. 1
****/

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Implement break Statement
 ***/
#include <stdio.h>
main()
{
int i;
for (i=1; i<=10; i++)
{
printf("\n%d", i);
if (i == 7)
break;
}
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Implement continue Statement
 ***/
#include <stdio.h>
main()
{
int i, n, a, sq;
printf("\n\tProgram finds square of positive numbers only\n");
printf("\nHow many numbers you want to enter: ");
scanf("%d", &n);
for (i=1; i<=n; i++)
{
printf("\nEnter number: ");
scanf("%d", &a);
if (a < 0)
continue;
sq = a * a;
printf("\nSquare = %d\n", sq);
}
getch();
}


www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Array **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
struct student s1[3];
main()
{
int i;
printf("Enter Name, RollNo, Marks:\n");
for(i=0; i<=2; i++)
scanf("%s %d %f",&s1[i].name,&s1[i].rollno,&s1[i].marks);
printf("Student Name\tStudent Rollno\tStudent Marks:");
for(i=0; i<=2; i++)
printf("\n%s\t\t%d\t\t%f", s1[i].name, s1[i].rollno,
s1[i].marks);
getch();
}


www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Function **/
#include<stdio.h>
struct student
{
char name;
int rollno;
float marks;
};
struct student std_func(char, int, float);
main()
{
struct student s1 = {'x', 888, 450};
std_func(s1.name, s1.rollno, s1.marks);
getch();
}
struct student std_func(char name, int rollno, float marks)
{
printf("Name\tRoll No.\tMarks\n");
printf("%c\t%d\t\t%f", name, rollno, marks);
}


www.eazynotes.com
 Neeru Babber
 Page No. 1
/** Program to Implement Structure with Pointers **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
void show(struct student *);
main()
{
struct student s1 = {"xyz", 1, 450};
show(&s1);
getch();
}
void show(struct student *ptr)
{
printf("Student name\tRollno\tMarks\n");
printf("%s\t\t%i\t%f",ptr->name,ptr->rollno,ptr->marks);
}


www.eazynotes.com
 Neeru Babber
/** Program to Implement Structure **/
#include<stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
main()
{
struct student s1 = {"abc", 1, 450};
struct student s2;
printf("Enter student Name, Rollno, Marks:\n");
scanf("%s%i%f", &s2.name, &s2.rollno, &s2.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
printf("\n");
printf("%s\t%i\t%f",s2.name,s2.rollno,s2.marks);
getch();
}
Page No. 1

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Print the Numbers, Which are Divisible by 3 and 5 from
First 100 Natural Numbers
*/
#include <stdio.h>
main()
{
int i;
printf("\nFirst 100 numbers which are divisible by 3 and
5\n\n");
for (i=1; i<=100; i++)
if (i%3==0 && i%5==0)
printf("\t%d", i);
getch();
}



www.eazynotes.com
 Gursharan Singh Tatla
/*
*/
Program to Print the Following Output:
1
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321
Page No. 1
#include <stdio.h>
main()
{
int i, j, k, space, n=9;
for (i=1; i<=n; i++)
{
for (j=1; j<=n-i; j++)
putchar(' ');
for (j=1,k=2*i-1; j<=2*i-1; j++,k--)
{
www.eazynotes.com
 Gursharan Singh Tatla
if (j <= k)
printf("%d", j);
else
printf("%d", k);
}
putchar('\n');
}
}
getch();
Page No. 2

www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Print Transpose of a Matrix
 ***/
#include <stdio.h>
main()
{
int a[10][10], i, j, row, col;
printf("\nEnter no. of rows & columns: ");
scanf("%d %d", &row, &col);
printf("\nEnter elements of Matrix:\n");
for (i=0; i<row; i++)
for (j=0; j<col; j++)
scanf("%d", &a[i][j]);
printf("\n\nElements of Matrix:\n\n");
for (i=0; i<row; i++)
{
for (j=0; j<col; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
}
printf("\n\nTranspose of Matrix:\n\n");
for (i=0; i<col; i++)
{
for (j=0; j<row; j++)
printf("\t%d", a[j][i]);
printf("\n\n");
}
getch();


www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Read Data from File using fscanf()
#include <stdio.h>
main()
{
FILE *fptr;
int rollno;
char name[20];
float marks;
fptr = fopen("abc.txt", "r");
fscanf(fptr, "%d %s %f", &rollno, name, &marks);
printf("\nRoll No.: %d", rollno);
printf("\n\nName = %s", name);
printf("\n\nMArks = %.2f", marks);
fclose(fptr);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Reverse a Given Number
#include <stdio.h>
main()
{
long n;
int rev;
printf("\nEnter any number: ");
scanf("%ld", &n);
printf("\nReverse no. is:\n\n");
while (n > 0)
{
rev = n % 10;
n = n / 10;
printf("%d", rev);
}
getch();
}
***/
Page No. 1


www.eazynotes.com
 Gursharan Singh Tatla
/***
 Program to Reverse a String using strrev()
#include <stdio.h>
#include <string.h>
main()
{
char s1[20];
printf("\nEnter any string: ");
gets(s1);
strrev(s1);
printf("\nReverse of string: %s", s1);
getch();
}
Page No. 1
***/

www.eazynotes.com
 Neeru Babber
 Page No. 1
/*
 Program to Reverse a String without using strrev()
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char string1[10], string2[10];
int i, length;
printf("Enter any string:\n");
gets(string1);
length = strlen(string1)-1;
for(i=0; string1[i]!='\0'; i++)
{
string2[length]=string1[i];
length--;
}
string2[length]='\0';
}
printf("\nThe Reverse of string is:\n");
puts(string2);
getch();


www.eazynotes.com
 Gursharan Singh Tatla//-----------------------------------------CODE-INCOMPLETE----------------------------------------------------
 Page No. 1
/*****
 Program to Search an Array using Binary Search
#include <stdio.h>
void binary_search();
*****/
int a[50], n, item, loc, beg, mid, end, i;
main()
{
printf("\nEnter size of an array: ");
scanf("%d", &n);
printf("\nEnter elements of an array in sorted form:\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("\nEnter ITEM to be searched: ");
scanf("%d", &item);
}
binary_search();
getch();
void binary_search()
{
beg = 0; end = n-1;
mid = (beg + end) / 2;
while ((beg<=end) && (a[mid]!=item))
{
if (item < a[mid])
end = mid - 1;
else
beg = mid + 1;
}
mid = (beg + end) / 2;
}
if (a[mid] == item)
printf("\n\nITEM found at location %d", mid+1);
else
printf("\n\nITEM doesn't exist");
---------
//https://www.programming9.com/
//https://www.programming9.com/programs/c-programs/210-c-program-to-search-an-array-element-using-binary-search
#include <stdio.h>
void binary_search();

int a[50], n, item, loc, beg, mid, end, i;
void main()
{
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);
    binary_search();
    getch();
}
void binary_search()
{
    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
        printf("\n\nITEM found at location %d", mid+1);
    else
        printf("\n\nITEM doesn't exist");
}

OUTPUT:
Enter size of an array: 5

Enter elements of an array in sorted form:
10 25 35 64 89

Enter ITEM to be searched: 35


ITEM found at location 3




www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/* Program to Search an Element in the Array using Linear Search */
#include <stdio.h>
main()
{
int a[10], i, item;
printf("\nEnter elements of an array:\n");
for (i=0; i<=9; i++)
scanf("%d", &a[i]);
printf("\nEnter item to search: ");
scanf("%d", &item);
for (i=0; i<=9; i++)
if (item == a[i])
{
printf("\nItem found at location %d", i+1);
break;
}
if (i > 9)
printf("\nItem doesnot exist.");
getch();
}

www.eazynotes.com
 Gursharan Singh Tatla
/****
 Program to Show Call by Reference
#include <stdio.h>
swap (int *, int *);
main()
{
int a, b;
printf("\nEnter value of a & b: ");
scanf("%d %d", &a, &b);
printf("\nBefore Swapping:\n");
printf("\na = %d\n\nb = %d\n", a, b);
swap(&a, &b);
printf("\nAfter Swapping:\n");
printf("\na = %d\n\nb = %d", a, b);
getch();
}
swap (int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
****/
Page No. 1


www.eazynotes.com
 Gursharan Singh Tatla
/****
 Program to Show Call by Value
#include <stdio.h>
swap (int, int);
main()
{
int a, b;
printf("\nEnter value of a & b: ");
scanf("%d %d", &a, &b);
printf("\nBefore Swapping:\n");
printf("\na = %d\n\nb = %d\n", a, b);
swap(a, b);
printf("\nAfter Swapping:\n");
printf("\na = %d\n\nb = %d", a, b);
getch();
}
swap (int a, int b)
{
int temp;
}
temp = a;
a = b;
b = temp;
****/
Page No. 1


www.eazynotes.com
 Gursharan Singh Tatla
/*****
 Program to Sort an Array using Bubble Sort
#include <stdio.h>
void bubble_sort();
int a[50], n;
main()
{
inti;
printf("\nEnter size of an array: ");
scanf("%d", &n);
printf("\nEnter elements of an array:\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
}
bubble_sort();
printf("\n\nAfter sorting:\n");
for(i=0; i<n; i++)
printf("\n%d", a[i]);
getch();
void bubble_sort()
{
int j, k, temp;
}
for(j=0; j<n; j++)
for(k=0; k<(n-1)-j; k++)
if(a[k] > a[k+1])
{
temp = a[k];
a[k] = a[k+1];
a[k+1] = temp;
}
Page No. 1
*****/

www.eazynotes.com
 Gursharan Singh Tatla
/*****
 Program to Sort an Array using Selection Sort
#include <stdio.h>
void selection_sort();
int a[50], n;
main()
{
inti;
printf("\nEnter size of an array: ");
scanf("%d", &n);
printf("\nEnter elements of an array:\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
}
selection_sort();
printf("\n\nAfter sorting:\n");
for(i=0; i<n; i++)
printf("\n%d", a[i]);
getch();
void selection_sort()
{
int i, j, min, temp;
}
for (i=0; i<n; i++)
{
min = i;
for (j=i+1; j<n; j++)
{
if (a[j] < a[min])
min = j;
}
temp = a[i];
a[i] = a[min];
a[min] = temp;
}
Page No. 1
*****/


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Swap Values of Two Variables using Third Variable
*/
#include <stdio.h>
main()
{
int a, b, temp;
printf("\nEnter any two numbers: ");
scanf("%d %d", &a, &b);
printf("\n\nBefore Swapping:\n");
printf("\na = %d\n", a);
printf("\nb = %d\n", b);
temp = a;
a = b;
b = temp;
printf("\n\nAfter Swapping:\n");
printf("\na = %d\n", a);
printf("\nb = %d\n", b);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/*
Program to Swap Values of Two Variables Without using 3rd
 Variable
*/
#include <stdio.h>
main()
{
int a, b, temp;
printf("\nEnter any two numbers: ");
scanf("%d %d", &a, &b);
printf("\n\nBefore Swapping:\n");
printf("\na = %d\n", a);
printf("\nb = %d\n", b);
a = a + b;
b = a - b;
a = a - b;
printf("\n\nAfter Swapping:\n");
printf("\na = %d\n", a);
printf("\nb = %d\n", b);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Write and Read a Character from a File
 ***/
#include <stdio.h>
main()
{
FILE *fptr;
char ch;
printf("\nEnter any character: ");
scanf("%c", &ch);
fptr = fopen("abc.txt", "w");
putc(ch, fptr);
fclose(fptr);
fptr = fopen("abc.txt", "r");
ch = getc(fptr);
printf("\nCharacter: %c", ch);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Write and Read a String from a File
 */
#include <stdio.h>
#define SIZE 50
main()
{
FILE *fptr;
char s1[SIZE], s2[SIZE];
printf("\nEnter any string: ");
gets(s1);
fptr = fopen("abc.txt", "w");
fputs(s1, fptr);
fclose(fptr);
fptr = fopen("abc.txt", "r");
fgets(s2, SIZE, fptr);
printf("\nYou entered:");
puts(s2);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Write and Read an Integer from a File
 ***/
#include <stdio.h>
main()
{
FILE *fptr;
int a;
printf("\nEnter any number: ");
scanf("%d", &a);
fptr = fopen("abc.txt", "w");
putc(a, fptr);
fclose(fptr);
fptr = fopen("abc.txt", "r");
a = getc(fptr);
printf("\nCharacter: %d", a);
getch();
}


www.eazynotes.com
 Gursharan Singh Tatla
 Page No. 1
/***
 Program to Write Data into a File using fprintf()
 ***/
#include <stdio.h>
main()
{
FILE *fptr;
int rollno;
char name[20];
float marks;
}
printf("\nEnter roll no.: ");
scanf("%d", &rollno);
printf("\nEnter name: ");
fflush(stdin);
gets(name);
printf("\nEnter marks: ");
scanf("%f", &marks);
fptr = fopen("abc.txt", "w");
fprintf(fptr, "%d %s %f", rollno, name, marks);
fclose(fptr);
getch();

==============
= C PROGRAMS =
==============

Simple C Programs
-----------------
Program to Find Sum and Average of Three Real Numbers
Program to Find Area of Square and Circumference of a Circle
Program to find Sphere Surface Area and Volume of a Sphere
Program to Find Area of a Triangle using Hero Formula
Program to Find Simple Interest and Compound Interest
Program to Convert Temperature from Degree Centigrade to Fahrenheit
Program to Convert Time in Seconds to Hours Minutes and Seconds
Program to Swap Values of Two Variables using Third Variable
Program to Swap Values of Two Variables Without using Third Variable
Program to Calculate the Net Salary

Control Statements
------------------
Program to Find Largest of Three Numbers
Program to Check Whether a Character is Vowel or not by using switch Statement
Program to Find the Sum of First 100 Positive Integers
Program to Find the Sum of Even and Odd Numbers from First 100 Positive Integers
Program to Find the Sum of Digits of a Positive Integer
Program to Find Whether the Given Number is a Prime Number
Program to Print First N Prime Numbers
Program to Print a Table of any Number
Program to Check Whether the Given Number is an Armstrong Number
Program to Print the Numbers Which are Divisible by 3 and 5 from First 100 Natural Numbers
Program to Find Whether a Number is Palindrome or Not
Program to Find Factorial of a Number without using Recursion
Program to Find Factorial of a Number using Recursion
Program to Print Fibonacci Series without Recursion
Program to Print Fibonacci Series using Recursion
Program to Reverse a Given Number
Program to Find Value of sinx using Expansion Series given below:
sin(x) = x - x3/3 + x5/5 - x7/7......
Program to Print the Pattern:
 
                        1
          	           121
                      12321
                     1234321
                    123454321
                   12345654321
                  1234567654321
                 123456787654321
                12345678987654321
          
Program to Find HCF of Two Numbers using Recursion
Program to Find HCF of Two Numbers Without Recursion
Program to Find Vowels in a String
Program to Count Number of Words and Number of Characters in a String
Program to Implement break Statement
Program to Implement continue Statement

Arrays
------
Program to Print Transpose of a Matrix
Program to Add Two Matrices
Program to Multiply Two Matrices
Program to Find Smallest Among N Numbers
Program to Illustrate the Concept of Passing 1-D Array to Function
Program to Illustrate the Concept of Passing 2-D Array to Function

Strings
-------
Program to Concatenate Two Strings using strcat()
Program to Concatenate Two Strings without using strcat()
Program to Compare Two Strings using strcmp()
Program to Compare Two Strings without using strcmp()
Program to Copy String using strcpy()
Program to Copy String without using strcpy()
Program to Find Length of a String using strlen()
Program to Reverse a String using strrev()
Program to Reverse a String without using strrev()
Program to Input-Output Strings using Character Functions
Program to Input-Output Strings using gets() and puts()
Program to Input-Output Strings using printf() and scanf()
Program to Find Length of a String Without using strlen()
Program to Find Whether a String is Palindrome or Not
Program to Find Whether a String is Palindrome or Not without using String Functions

Functions
---------
Program to Show Call by Value
Program to Show Call by Reference

Recursion
---------
Program to Find Factorial of a Number using Recursion
Program to Print Fibonacci Series using Recursion
Program to Find HCF of Two Numbers using Recursion

Pointers
--------
Program to Illustrate the Concept of Pointers

Structures
----------
Program to Implement Structure
Program to Implement Structure with Array
Program to Implement Structure with Function
Program to Implement Structure with Pointers

Searching & Sorting
-------------------
Program to Search an Element in the Array using Linear Search
Program to Search an Array using Binary Search
Program to Sort an Array using Bubble Sort
Program to Sort an Array using Selection Sort

File Handling
-------------
Program to Write and Read a Character from a File
Program to Write and Read an Integer from a File
Program to Write and Read a String from a File
Program to Write Data into a File using fprintf()
Program to Read Data from File using fscanf()
Program to Copy Contents of One File to Another
Program to Print a File and Count Number of Characters
//::~

===========================
= C Coomand-line argument =
===========================

