LAB02_TASK_1
Opened: Thursday, 21 October 2021, 6:00 PM
Due: Thursday, 21 October 2021, 8:35 PM
NOTE: All tasks from laboratory number "2", should be implemented using <stdio.h> library for input/output user interface communiction.

Write a program, which loads (from the keyboard) variables of four basic types:

integer number (preferably short)
floating point number (preferably double)
single character (char)
text (using array text representation char text[30] )
boolean (logical TRUE/FALSE) (int ?)
and then display the collected values, in five following rows, in a formated form:
on 15 positions,
aligned / justified to right,
with maximally 2 fraction digits


Submission status
Submission status: Submitted for grading
Grading status: Graded

File submissions	
LAB02_TASK_1.c LAB02_TASK_1.c21 October 2021, 8:01 PM

Feedback
Grade: 0.80 / 1.00
Graded on: Thursday, 28 October 2021, 2:01 PM
Graded by: Piasecki Marek

Feedback comments	
In place of:  
    printf("%15.2hd\n", num);
    printf("%15.2f\n", f_num);
    printf("%15ch\n", ch);
    printf("%15.2text\n", text);
    printf("%15d\n", boolean);

should be:  
     printf("%15hd\n", num);
    printf("%15.2f\n", f_num);
    printf("%15c\n", ch);
    printf("%15s\n", text);
    printf("%15d\n", boolean);