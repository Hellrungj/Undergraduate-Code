def main():
    UC = raw_input("What is your Birthdate? (01/11/1119)")
    Birthdate = []
    Birthdate = UC.split("/")
    BM = Birthdate[0]
    BD = Birthdate[1]
    BY = Birthdate[2]
    
    BMsum = compair_And_add(BM)
    BDsum =compair_And_add(BD)
    BYsum = compair_And_add(BY)
    Total = add(BMsum,BDsum,BYsum)
    if Total <= 9 or Total == 11 or Total == 22 or Total == 33:
        print("Here is your number: " + str(Total)) 
    else:
        Total = loop(Total)
        print("Here is your number: " + str(Total)) 
    
def add(Msum,Dsum,Ysum):
    Total = Msum + Dsum + Ysum
    return Total
    
def compair_And_add(BN):
    if int(BN) == 11 or int(BN) == 22:
        BNsum = int(BN)
    else:
        BNsum = 0
        for i in BN:
            BNsum = BNsum + int(i)
    return BNsum
    
def loop(total):
    tep = str(total)
    total = 0
    for i in tep:
        total = total + int(i)
    if total > 9 and total != 11 and total != 22 and total != 33:
        loop(total)
    else:
        return total
        
main()

    