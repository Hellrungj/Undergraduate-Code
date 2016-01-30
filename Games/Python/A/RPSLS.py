#-------------------------------------------------------------------------------
# Name:        hellrungj
# Purpose:     This is the game Rock, Paper, Scissors, Lizard, Spock 
# Created:     22/04/2014
# Copyright:   (c) hellrungj 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import random

def Rock(otherinput):
    if otherinput == "Rock":
        print "Tie"
    elif otherinput == "Paper":
        print "Player 2 Wins"
    elif otherinput == "Scissors":
        print "Player 1 Wins"
    elif otherinput == "Lizard":
        print "Player 1 Wins"
    elif otherinput == "Spock":
        print "Player 2 Wins"
    else:
        print "Error"
def Paper(otherinput):
    if otherinput == "Rock":
        print "Player 1 Wins"
    elif otherinput == "Paper":
         print "Tie"
    elif otherinput == "Scissors":
        print "Player 2 Wins"
    elif otherinput == "Lizard":
        print "Player 2 Wins"
    elif otherinput == "Spock":
        print "Player 1 Wins"
    else:
        print "Error"
def Scissors(otherinput):
    if otherinput == "Rock":
        print "Player 2 Wins"
    elif otherinput == "Paper":
        print "Player 1 Wins"
    elif otherinput == "Scissors":
        print "Tie"
    elif otherinput == "Lizard":
        print "Player 1 Wins"
    elif otherinput == "Spock":
        print "Player 2 Wins"
    else:
        print "Error"
def Lizard(otherinput):
    if otherinput == "Rock":
        print "Player 2 Wins"
    elif otherinput == "Paper":
        print "Player 1 Wins"
    elif otherinput == "Scissors":
        print "Player 2 Wins"
    elif otherinput == "Lizard":
         print "Tie"
    elif otherinput == "Spock":
        print "Player 1 Wins"
    else:
        print "Error"
def Spock(otherinput): 
    if otherinput == "Rock":
        print "Player 1 Wins"
    elif otherinput == "Paper":
        print "Player 2 Wins"
    elif otherinput == "Scissors":
        print "Player 1 Wins"
    elif otherinput == "Lizard":
        print "Player 2 Wins"
    elif otherinput == "Spock":
        print "Tie"
    else:
        print "Error"
#===============================================================================
def Computer_vsUser():
    """"""
    UserChoice = input("pick Rock, Paper, Scissors, Lizard, Spock")
    ComputerChoice = random.choice(["Rock", "Paper", "Scissors", "Lizard", "Spock"])
    if UserChoice == "Rock":
        Rock(ComputerChoice)
    elif UserChoice == "Paper":
        Paper(ComputerChoice)
    elif UserChoice == "Scissors":
        Scissors(ComputerChoice)
    elif UserChoice == "Lizard":
        Lizard(ComputerChoice)
    elif UserChoice == "Spock":
        Spock(ComputerChoice)
    else:
        print "Error"
def User_vsUser():
    """"""
    User1Choice = input("player 1 pick Rock, Paper, Scissors, Lizard, Spock")
    User2Choice = input("player 2 pick Rock, Paper, Scissors, Lizard, Spock")
    if User1Choice == "Rock":
        Rock(User2Choice)
    elif User1Choice == "Paper":
        Paper(User2Choice)
    elif User1Choice == "Scissors":
        Scissors(User2Choice)
    elif User1Choice == "Lizard":
        Lizard(User2Choice)
    elif User1Choice == "Spock":
        Spock(User2Choice)
    else:
        print "Error"
#===============================================================================    
def Promted():
    """"""
    userchoice = input("do you want to play with the computer or the another user.")
    if userchoice == "computer":
        Computer_vsUser()
    elif userchoice == "user":
        User_vsUser()
    else:
        print "Error"

def main():
    """Main function"""
    Promted()

if __name__ == '__main__':
    main()