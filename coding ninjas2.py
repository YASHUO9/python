number = int(input())
reverse = 0
while(number>0):
    remainder = number%10
    reverse  = (reverse*10) + remainder
    number = number//10
    
if reverse == number:
    print("true")
else:
    print("false")