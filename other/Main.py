#Functions
'''
#1.Void Function
def Printer(P):
    """Void Function that print anything that is pass as a parmaiter"""
    print(P)
    
Printer("Shadia")

#2. Fruitfull Function
def Printer_Genetor(N):
    """A fruitful Function that takes a parmaiter"""
    if N == 1:
        return "John"
    else:
        return "Hellrung"
        
print Printer_Genetor(2)

#3. Muti Function
def One():
    Printer(1)
    
One()


#------------------------------------------------------

#Normal 

#1.
P = "John"

print(P)

#2.

N = 1

if N ==1:
    Gen = "John"
else:
    Gen = "Hellrung"

print Gen

#EX
#------------------------------------------------------

def SUM(A, B):
    C = A + B
    return C    

print SUM(1, 1)


def Multiply (A, B):
   C = A*B 
   return C
print Multiply(Multiply (2, 2), 2) 


#1
#Make a Function that mutipuly two number. Make the function fruitfull.
def Multiply (A, B):
   C = A*B 
   return C

print Multiply (2, 2)

#2
#Make a Function that take two parmaters 
#and put them in an if statment (one if statment). Return the
#value choosen by the if statements (Make it fruitfull).

def Starish (A, B):
    
    if A == 1 and B == 2:
        return ("GJ")
    else:
        return ("BJ")

Starish(1, 2)



#3
#Make two functions. Have one called "Main" and the other called
#"Catts". "Main" will call "Catts" and have two values. "Catts" will take
#two Parmaters and make print both parmaters as one string with the end 
#tag of "Catts!"
#Good luck I know you will do great.

def Catts(String1, String2):
    print String1 + String2 + "Catts!"

def main():
    S = "Shadia"
    D = "Dad"
    Catts(S, D)
    
main()

'''
#-------------------------------------------------------------------------
#-------------------------------------------------------------------------
#Shell Game!!!
#By: John & Shadia

'''
A function that simulates a single shuffle of the shells.
The random module includes a choice() function which 
we saw earlier in the term which might be useful here. 
For example, inside this function, you might consider
using something like:



As in any implementation, it would be a good idea to 
test a function like this by running it a bunch of times
and making sure that it works as you expect.

A function that does the "gamble" step. For example, it 
can take as parameters how much money you have, how much 
you want to bet, and your guess. (note that we decided to
NOT ask the user for this information inside the function...
it simply uses what it receives as arguments)

One thing this function can do is check to see there is
enough money to make the bet. If not, you cannot "gamble",
and it does not do anything (unlike in real life, when someone
can be there who will lend you money).

Another problem is what do when the bet is negative. Well,
that makes no sense, so you cannot "gamble" with that bet.

If there is enough money, it can call your shuffle function
and then sees if you win and get the money, which it can return
so you can add it to the money you have.

Again, test any functions you write before moving on.


Your program also needs a main() function. Typically, the main
function:

Contains anything that doesn't seem to belong to any other functions
(such as user input)

Calls your other functions and provides them with the appropriate 
input parameters.

Captures the output of your other functions if those functions are
fruitful and decides what to do with the output next.

#Important Bits#=============================================================
Use comments to clarify sections of code and include the header information.

You MUST use functions for encapsulation.

Be sure to write a triple-quoted docstring for each of these functions.  This docstring must include a description of the main purpose of the function,  and descriptions of all input parameters as well as what is returned by the function.

Includes a main() function.

The highest level of your program (i.e., no indenting) 
should only contain the following:  
    the header 
    any import statements
    function definitions
    a call to the main() function

'''
#=======================
"""
(Planing Step)

import random

Options= "purple, green, violet"
print(Options)

playerinput = raw_input("Please choose a shell.")


random.choice (Option)

if playerinput ==




"""
#=======================
#Name: Shadia Prater
#Assignment: A6 Shell Game 
#Acknowledgement: John Hellrung 
import random

Options = "purple, green, violet"
print (Options)


print "The winning shell is "+ random.choice(["purple", "green", "violet"]) + "!"


















