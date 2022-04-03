a = int(input())
even =0 
odd = 0
result =[int(x) for x in str(a)]

change = int(len(result))

for i in range (0,change):
    if result[i]%2 ==0:
        even = result[i] + even
    else:
        odd = result[i]+odd
print(f"{even} {odd}")