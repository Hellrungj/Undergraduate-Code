class Stuff():
    def __init__(self):
        self.stuff = "stuff"
        
    def printstuff(self):
        print(self.stuff)
        
    def printotherstuff(self):
        print("Otherstuff")
        
def main():
    newstuff = Stuff.Stuff()
    newstuff.printstuff()
    newstuff.printotherstuff()

main()