//Write a program to enter 10 elements and find the maximum and minimum in the array# Initializing an empty array of size 10
arr = []

# Taking input from the user for 10 elements
for i in range(10):
    num = int(input("Enter element {}:".format(i+1)))
    arr.append(num)

# Initializing variables to hold the minimum and maximum values
min_val = arr[0]
max_val = arr[0]

# Looping through the array to find the minimum and maximum values
for num in arr:
    if num < min_val:
        min_val = num
    if num > max_val:
        max_val = num

# Printing the results
print("The minimum value is:", min_val)
print("The maximum value is:", max_val)
