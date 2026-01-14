/* 
!Some Applications!
    - Grammars along with other concepts learned so far have extensive applications
    - Let's look at some Grammar applications::
    
        C ::
            ? Rules for identifiers in C: (Grammar)
                1. an identifier is a sequence of letters, digits, and underscores
                2. an identifier must start with a letter or an underscore
                3. identifiers allow upper- and lower-case letters
            ? This can be described using a grammar:
                <id>     ->  <letter> <rest> | <uscore> <rest>
                <rest>   ->  <letter> <rest> | <digit> <rest> | <uscore> <rest> | λ`
                <letter> ->  a | b | ... | z | A | B | ... | Z
                <digit>  ->  0 | 1 | ... | 9
                <uscore> ->  _

                - in this grammar, the variables are <id>, <letter>, <digit>, <uscore>, 
                and <rest>.  The letters, digits, and the underscore are terminals.
                - a derivation of a0 is:
                    <id> => <letter> <rest>
                         => a <rest>
                         => a <digit> <rest>
                         => a0 <rest>
                         => a0
                ? - automatons can be represented by digraphs (or DAGs, I imagine they 
                ? can't be cyclic)
                    - with these graphs, nodes give the internal states and the edges 
                    give transitions.  Labels on edges show what happens during the trans.
                    - see /1.3_automaton_diagram.png for more clarification
                    - see /1.3_C_automaton for even more clarification

                - A binary adder is an integral part of any general-purpose computer.  Let's look at one.
                    -> For simplicity, assume that we are dealing only with positive integers and that we 
                    use a representation in which:
                        x = a0a1...an stands for an integer v(x) = i=0 summation ^n a_i2^i
                    -> This processes two numbers bit by bit, starting at the left end.  Each bit addition
                    creates a digit for the sum as well as a carry digit for the next higher stop
                        - see /1.3_binary_adder and /1.3_binary_adder_extras for clarification
^                   -> The input to the bot are the bit pairs and the output will be the sum bit. The
^                   carry from one step to the next is remembered by 2 internal states, "carry", and
^                   "no carry".  It will remain in this state until a bit pair is encountered           
*/
#include <stdio.h>
int main (void) {
    printf("This file contains text notes for Section 1.3:: some applications");
    return 0;
}