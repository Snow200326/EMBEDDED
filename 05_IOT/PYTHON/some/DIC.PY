# DICTONARY KEY VALUE PAIR USED TO STORE THE MULTIPLE VALUE {KEY:VALUE}
#TWO VALUES CANNOT HAVE SAME KEY NAME
#DICTIONAY IS MUTABLE


dict = {
    "BRAND":"FORD",
    "PRICE":2000,
    "LAUCH DATE":260503
}
# dict["BRAND"]="BMW"
# print(dict["BRAND"])


# dict.update({"BRAND":"AUDI"}) # UDATE 
# print(dict)

# print(dict.keys()) #keys

# print(dict.items())

# print(dict.get("PRICE"))

# import ast

# DICTONARY = input("Enter the data \n")
# DICTONARY = ast.literal_eval(DICTONARY)
# print(DICTONARY)
# print(type(DICTONARY))

#UPDATE

key = input("Enter the key")
val = input("Enter the value")

dict.update({key:val})
print(dict)