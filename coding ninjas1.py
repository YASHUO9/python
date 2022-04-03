# a  = (input())
# equal = str(a)[::-1]
# go = a
# digit = [str(x) for x in str(go)]
# new_digit = list(reversed(digit))
# length = len(new_digit)
# reversenum = 0
# remainder = 0
# while n%10 is equal to 0:
    
# for thing in range(0,length-1):
#     if new_digit[thing] == '0':
#         new_digit.remove(new_digit[thing])
#         print(new_digit)
#         # .join(new_digit)
#         print(new_digit)
#     else:
#         print(equal)
""" above is my solution"""
number = int(input())
reverse = 0
while(number>0):
    remainder = number%10
    reverse  = (reverse*10) + remainder
    number = number//10
print(reverse)        
