# libfttester
A Tester for the Libft 42 project

This Tester was made by trofidal, here are some usefull info to have before using it:

I think that handling NULL parameter is a good point in starting the 42 Cursus, therefor EACH of my test (if possible) will try to pass NULL as parameter.
There will of course, be some tests based off some other tester i found around, i just made my own to add what i though was missing off the one i've seen.

Test feedbacks :

RED = OUTPUT KO
YELLOW = LEAKS
PURPLE = OUTPUT OK, NULL PARAMETER UNHANDLED
GREEN = OUTPUT OK, NO LEAKS

To use it :

$>cd libft
$>git clone https://github.com/NotJustJoe/libfttester
$>cd libfttester

INSIDE THE FOLDER HERE ARE THE AVAILABLE MAKE COMMANDS:

1 - Run a test for a specific function

$>make atoi
will make ft_atoi function tests.

2 - Run basics tests, only the mandatory part
$>make

3 - Run bonus only.
$>make bonus

4 - Run every tests, mandatory and bonus.
$>make all

-----
For any questions, contact me on 42 slack 'trofidal' or by discord, NotJustJoe#3756
