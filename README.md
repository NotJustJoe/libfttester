# libfttester
A Tester for the Libft 42 project

This Tester was made by NotJustJoe, using Tripouille Leaks checker and kind of inspired off his work (https://github.com/Tripouille/libftTester) Thanks to him !
Here are some usefull info to have before using it:

I think that handling NULL parameter is a good point in starting the 42 Cursus, therefor there is a make null that will try to pass NULL as parameter for functions that allows it.
There will of course, be some tests based off some other tester i found around, i just made my own to add what i though was missing off the one i've seen.

The tests output will follow such as :<br />
1[KO] by ft_atoi("15468")<br />
letting you know what exact test was a fail.<br />

Test feedbacks :

YELLOW = SEGFAULT<br />
RED = OUTPUT KO<br />
BLUE = LEAKS KO<br />
GREEN = OUTPUT OK, NO LEAKS<br />


#Usage :

$>cd libft<br />
$>git clone https://github.com/NotJustJoe/libfttester<br />
$>cd libfttester<br />

Inside the folder, these are the available make commands:

1 - Run a test for a specific function<br />
$>make atoi

2 - Run basics tests, only the mandatory part<br />
$>make base

3 - Run bonus only.<br />
$>make bonus

4 - Run every tests, mandatory and bonus.<br />
$>make all

5 - Run tests for Functions that accepts NULL parameters<br />
$>make null

-----
For any questions, contact me on 42 slack 'trofidal' or by discord, NotJustJoe#3756
-----
This Tester has been made after using https://github.com/tripouille/libftTester way too much and wanted to have my own, go take a look !
