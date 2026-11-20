# list = ["11","dnyanesh",1,11,'ssss' , True]
# val_list = [100,77.88,"python", 'c++',True]
# print("Indexing of list : " , list[0])
# print(list[0:4])
# print(list[0:4:2]) # slicing [start : end : step+1]


# val = [1,2,3]
# res = val + list
# print("The concat list is :- " , res)
# print(val* 2)

# #list opeartions

# #append
# list.append("Append")
# print(list)

# #extend
# list.extend(["This ", "is ", "extended"])
# print(list)

# #insert
# list.insert(-1 , "Inssert")
# print(list)

# #pop
# list.pop()
# print(list)



# #sort
# val_list.sort();
# print(val_list)

# #reverse
# val.reverse();
# print(val)

# val_copy = val.copy()
# print("Value of Copy list :- " , val_copy)



#COUNT FUNCTION
# data = [1,2,3,4,3,3,44,6]

# print("FREQ OF 3 IS " ,data.count(3))
# #index
# print("Index of 3 is :- ", data.index(44))
# #copy
# data_copy = data.copy()
# print("Original data is :- " ,data)
# print(id(data))
# print(id(data_copy))
# print("Original data is :- " ,data_copy)
# print("Length of the data is :- ", len(data))
# print("max value of the data is :- ", max(data))
# print("min value the data is :- ", min(data))
# print("sum value the data is :- ", sum(data))

#input for the list

# input_list = list(input("Enter the element for the list :- "))
# print("list value " , input_list)


# # using module 

# import ast 
 
# list = input("Enter the value of list ")
# list = ast.literal_eval(list)
# print(list)

#LIST ACCEPTANCE

# LIST = []
# val = int (input("Enter the  value"))
# LIST.append(val)
# flo = float(input("Enter fload"))
# LIST.append(flo)

# str = input("Enter the string")
# LIST.append(str)


# print(LIST)

#MULTIPLE LIST

list = [12,["Englis" , "maths"] , 13,["something"]]
print(list[1][0])