'''
Program: Final Exam
Programmer: Joshua Lindquist
Description: This program will output the average of the cans collected along with which classes collected above average.
This program also determines the highest amount collected of this list and the corresponding class.

Decomposition:
This program will need to average the list for a total cans collected
This program will also need to sort the list to determine the highest amount collected and what class was responsible
This program will need to determine how many classes collected above average and print out those that did.
The program will have to print out the total amount collected after its been determined
The program will have to print out the highest amount collected of the list after its been determined
The program will print out which classes collected above the average amount.

Inputs:
cans = []
Outputs:
total = int()
average = int()
highest = int()
class_above_average = int()
'''
def Total(cans):
    index = 0
    total = 0
    #loop to Total the list
    for count in range(0,len(cans)):
        total = total + cans[index]
        index = index + 1
    #returning total to main
    return total
def SortHigh(cans,grade):
    index = 0
    class_ = str()
    highest = int()
    #loop to determine the highest amount collected
    for index in range(0 , len(cans)):
        if cans[index] > highest:
            highest = cans[index]
            class_ = [index]
    [index] = class_
    #printing highest and the grade
    print(grade[index],"Collected the most cans at:  " , highest)
def AboveAverage(cans,grade,avg):
    index = 0
    abvavg = int()
    print("The following grades collected an above average amount:  ")
    for index in range(0 , len(cans)):
        #determining which grades got above average
        if cans[index] > avg:
            #printing the name of the grades that collected above average
            print(grade[index] , ",Good Job!")
            abvavg = abvavg + 1
        index = index + 1
    #printing the total amount of grades that collected above average
    print(abvavg , "Grades Collected above the average!")

def Main():
    #declaring variables
    highest = int()
    total = int()
    avg = float()
    cans = [248, 379 , 189 , 457 , 274 , 532 , 279 , 296 , 359]
    grade = ["Kindergarden" , "1st Grade" , "2nd Grade", "3rd Grade" , "4th Grade", "5th Grade" , "6th Grade" , "7th Grade" , "8th Grade"] 
    #calling Total and storing the return as total
    total = Total(cans)
    avg = total / 9
    #print the outputs
    print("The total amount of cans was:  " , total)
    print("The average amount of cans collect was :  " , avg)
    #calling SortHigh and storing the highest, then printing it
    highest = SortHigh(cans,grade)
    #Calling AboveAverage to print out which grades collected above average
    AboveAverage(cans,grade,avg)
    
    

Main()
