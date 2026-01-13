#include <stdio.h>

/* NOTES
!--Strings are finite sequences of symbols from the alphabet
    - w = abaaa
        - to "concatenate" 2 strings w and v::
            w = a1a2...an
                or... w = abaaa
            v = b1b2...b3
                or... v = abcde
            wv = a1a2...anb1b2...bm
                or... wv = abaaaabcde
        - the "reverse" of a string is obtained by writing symbols in reverse order::
            w_reversed = aaaba
        - the "length" of a string, |w|::
            |delta| = 0 // delta will be used to denote the empty string frequently in this course
        - a "substring" of w is any string of consecutive symbols in some w
            w = vu // w is composed of 2 substrings, v and u
        !- if w is a string, then w^n stands for hte string obtained by repeating w n times
            w^2 = abaaaabaaa
            as a special case:: w^0 = delta
        !- if E is an alphabet, ten we use E` to denote the set f strings obtained by concatenating zero or more symbols from E.  The set E` always contains delta.  To exclude delta::
            E+ = E` - {delta}
       ! - a string in a language L will be called a sentence of L
            EX:: Let E = {a, b}, then E* = {delta + every combination of a, b}
                the set [a, aa, aab] is a language on E because it has a finite number of sentences, we call it a finite language.
                the set L = {a^nb^n:n>=0} is also a language on E.  The strings aabb and aaaabbbb are in the language L, but the string abb is not in L.
                Despite this, L is an infinite language.
            - since languages are sets, the union, intersection, and difference of two languages are known::
                complement of L: L = E* - L
                reverse of L: L^R = {w^R: w in L}
    - the concatenation of two languages L1 and L2 is the set of all strings obtained by concatenating any element of L1 with any element of L2::
        L1L2 = {xy: x in L1, y in L2}
    

*/

int main(void) {
    return 0;
}