import math

Names = {
    0: '',
    1 : 'one',
    2 : 'two',
    3 : 'three',
    4 : 'four',
    5 : 'five', 
    6 : 'six',
    7 : 'seven',
    8 : 'eight',
    9 : 'nine',
    10 : 'ten',
    11 : 'eleven',
    12 : 'twelve',
    13 : 'thirteen',
    14 : 'fourteen',
    15 : 'fifteen',
    16 : 'sixteen',
    17 : 'seventeen',
    18 : 'eighteen',
    19 : 'nineteen',
    20 : 'twenty',
    30 : 'thirty',
    40 : 'forty',
    50 : 'fifty',
    60 : 'sixty',
    70 : 'seventy',
    80 : 'eighty',
    90 : 'ninety',
    }

Hundreds = ' hundred and '


def GetNameOfDoubleDigit(n):
    string = ''
    if int(n) > 10 and int(n) < 20:
        string += Names[int(n[0:2])]
    else:
        string += Names[int(n[0])*10] + " " + Names[int(n[1])]
    
    return string
    
sum = 0

def main(i):
    Number = str(i)
    string = ''

    if len(Number) == 3:
        string += (Names[int(Number[0])] + Hundreds)
        string += GetNameOfDoubleDigit(Number[1:3])
    elif len(Number) == 2:
        string += GetNameOfDoubleDigit(Number)
    elif len(Number) == 1:
        string = Names[i]
    elif len(Number) == 4:
        string = "one thousand"
    string = string.replace(" ","")
    print(string)
    return len(string)


for i in range(1,1001):
    sum += main(i)

print(sum-27)
