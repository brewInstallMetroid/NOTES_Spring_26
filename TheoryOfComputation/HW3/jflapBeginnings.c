/*
!FLAP!
!Intro to FLAP!
- JFLAP is software for working with
    1. formal languages
    2. automata
    3. grammars
^- Things you can do:
    - create and compute operation of deterministic and nondeterministic finite accepters
    - convert a deterministic finite accepter into a regular grammer
    - convert a deterministic finite accepter into a regular expression
    - create and simulate operation of nondeterministic pushdown accepters
    - transform a nondeterministic pushdown accepter into a context-free grammar
    - create and simulate operation of turing machines
    - create, categorize, and transform grammars
    - and MORE!!!!
^- Peculiarities of JFLAP:
    - each variable and each terminal symbol must be represented as a SINGLE character
    - a symbol is a variable xif that symbol is an uppercase letter, otherwise, it is a terminal symbol
    - when using JFLAP, use uppercase S as your gramar's start variable
        - do this by placing a single uppercase S in the top-leftmost field
^- JFLAP Parser
    - JFLAP's parser attempts to find a sequence of solutions in the grammar that derives a given string of terminal symbols from the start variable
    - JFLAP's brute force parser is a native parser that begins with the start variable, then repeatedly applies productions
^- Derivation table
    - the derivation of a sentence can be viewed as a derivation table
    - just choose derivation table instead of noninverted tree

?- IF a string is not in a given language, you will receive an error message

^- Make sure to make lots of test cases when creating a grammar in JFLAP



*/



#include <stdio.h>
int main (void) {
    printf("This file contains notes for Homework 3: JFLAP Beginnings");
    return 0;
}