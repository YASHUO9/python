start_farenheit = int(input())
gap_farenheit = int(input())
end_farenheit = int(input())
sum = 0
while start_farenheit < end_farenheit:
    temp_celsiuss =5/9*(start_farenheit -32)
    temp_celsius = int(temp_celsiuss)
    print(f"{start_farenheit} {temp_celsius}")
    sum = start_farenheit + gap_farenheit + sum
    change = start_farenheit 
    start_farenheit = sum
    sum = change
    