listofNums = []
for i in range(0,999):
    for z in range(0,999):
        if str(i*z) == str(i*z)[::-1]:
            listofNums.append(i*z)
print(max(listofNums))
