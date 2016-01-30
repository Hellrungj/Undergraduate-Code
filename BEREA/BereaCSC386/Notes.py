#Notes for user invalidation:

def weight():#user inputs there weight that can only be in lbs.
    user_weight = raw_input("Please input your weight according to the imperial system. Note that you can only use 3 numbers.")
    print "V1"
    if len(user_weight) > 3: #if users length of the number they typed is bigger than 3 an error message will tell them to retype a number.
        print "Fail, please try again."
    else:
        a = 0
        for i in user_weight: #this will go through each number the user typed in and check to see what variable it is.
            if int(i) == 0 or int(i) == 1 or int(i) == 2 or int(i) == 3 or int(i) == 4 or int(i) == 5 or int(i) == 6 or int(i) == 7 or int(i) == 8 or int(i) == 9:
                a +=1
                if len(user_weight) == 1:
                    print "All good"
                    return user_weight
                elif len(user_weight) == 2:
                    if a == 2:
                        print "All good"
                        return user_weight
                else:
                    if a == 3:
                        print "All good"
                        return user_weight
            else:
                print "error"

def height(): # similar to weight just instead of 3 integers you can only have 1.
    user_height = raw_input("Please input your height according to the imperial system. Note that you can only use one number.")
    print "V2"
    if len(user_height) > 1:
        print "error"
    else:
        for i in user_height:
            if int(i) == 0 or int(i) == 1 or int(i) == 2 or int(i) == 3 or int(i) == 4 or int(i) == 5 or int(i) == 6 or int(i) == 7 or int(i) == 8 or int(i) == 9:
                print "All good"
                return user_height
            else:
                print "error"

def BMI(weight, height): # if the user doesn't put in any number it will ask them to try again.
    if height == None and weight == None or height == None or weight == None:
        return "Try again!"
    else:
        print weight
        print height
        part = float(weight) # this is the calulation to get the correct answer for BMI
        height = float(height) * 12
        BMI = (float(part) / (float(height) * float(height))) * 703
        print BMI
        return BMI

def BMI_Categories(BMI): #this is extra that tells the user what there rating means.
    if BMI <= 18.5:
        print "Underweight"
    elif BMI > 18.5 and BMI <= 24.5:
        print "Normal Weight"
    elif BMI > 25 and BMI <= 29.9:
        print "Overweight"
    else:
        print "Obesity"

def main():
    print BMI_Categories(BMI(weight(),height()))

if __name__ == '__main__':
    main()
