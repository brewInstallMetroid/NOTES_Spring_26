/*
!FINITE AUTOMATA!
- here we will be encountering our first simple automaton, a finite state accepter
    - it processes strings and either accepts or rejects them, so it is basically a pattern recog. system
- Deterministic Finite Accepter:
    - DFAs define a type of language: a regular language
    - Deterministic: one and only one option at a time
- AFTER DFA, we will learn NFA or Non-Deterministic Finite Accepters
    - NFAs can appear to have a choice, they don't always only have one option
    - NFAs examine every option and then make a decision based on which option is best
^- Two accepters are equivalent if they accept the same language
- for any given regular language there are many equivalent DFAs, so it is of practical importance to find a MINIMAL DFA
    - a MINIMAL DFA is a DFA with the smallest number of internal states
- DFAs have no internal storage

!2.1 - DETERMINISTIC FINITE ACCEPTERS!
^- A DFA is defined by the quintuple:
^        M = (Q, Σ, δ, q_0, F),
^ where:
^   Q is a finite set of INTERNAL STATES,
^   Σ is a finite set of symbols called the INPUT ALPHABET,
^   δ: Q x Σ -> Q is a total function called the transition function, (so the domain of delta is the cartesian product of A and Σ)
        reminder: cartesian product is (all ordered pairs where a ∈ A and b ∈ B)
^   q_0 ∈ Q is the initial state,
^   F ⊆ Q is a set of final states,
- DFAs operate like so::
    1. at inital time, DFA is assumed to be in the initial state q_0 
    with its input mechanism on the leftmost symbol of the input string
    2. During each move of the automaton, the input mechanism advances
    one position to the right, so each move consumes one input sumbol.
    3. When the end of string is reached, the string is accepted if
    the automaton is in one of its final states, otherwise string is rejected
    Rules:
        - input mech can only move from left to right and reads exactly
        one symbol on each step
        - transitions from state to state are dictated by the transition
        function
            - ex. δ(q_0, a) = q_1, then if dfa is in state q_0 and the current
            input is a, it will move to state q_1
- to visualize and represent finite auto., we use transition graphs
    - edges represent transitions, nodes represent states
    - so a graph representing our most recent example would have:
        1. one vertex labeled q_0
        2. one vertex labeled q_1
        3. an edge from q_0 to q_1 that represents δ(q_0, a) = q_1
    - if M = (q, Σ, δ, q_0, F) (and is a dfa), then its graph will
    have |Q| vertices
    - the initial vertex is q_0, and those labeled with q_f ∈ F are final
    vertices

- there is an extended transition function:
    - δ* : Q x Σ* -> Q
    - this is basically the same as the last one, but transitivity applies
    - also, the second argument of δ* is a string, not a single symbol.
        - ex: if : δ(q_0, a) = q_1 and δ(q_1, b) = q_2, then:
                   δ*(q_0, ab) = q_2
- a dfa's language is the set of all strings accepted by the dfa
- every finite automaton acceptes some language.  If we consider all possible
finite automata, we get a set of languages associated with them.  We call such
a set of languages a family of languages
- A language L is called REGULAR if and only if there exists some deterministic
finite accepter M such that L = L(M)
^    - so basically, all we have to do to show that a language is regular is find
    a dfa for it

? VIDEO NOTES::
- basically, to tell if a given string/word will be accepted, walk through the
digraph for the dfa, consuming one char from left to right as you go.  If you end
on an F node, the string will be accepted.  If not, it will be rejected
- in a dfa, every node must have an option for every possible character, or it could
simply break and refuse to accept strings

*/


#include <stdio.h>
int main(void) {
    printf("This script contains notes for chapter 2.1\n");
    return 0;
}