# STRING  function 

'''
1.STRIP
2.SPLIT
3.
'''

#1. STRIP == rempve from the tail and lead ..
name = "++++DnyaneshDahiwadkar+++"
print(name.strip('+'))

#2.SPLIT = split evey word into the list...
print(name.split('+'))

#3.REPLACE
print(name.replace("y","Dnyanesh"))

#4. Count == count the workd or the char...
cnt_name="Dnyanesh Dahiwadkar"
print(cnt_name)
cnt = cnt_name.count("D")
print(cnt)

#5. capitalize == chap the first leter of the word
cap ="dnayansh is the good boy"
print(cap.capitalize())

#6.title = chap the first letter of ever word
print(cap.title())

#7.upper = all cap
print(cap.upper())

#8.Lower = all lower
print(cap.lower())

# Task..
str = input("Enter the String\n")
print(str.title())

# SWAPCASE TO SWAP THE CASES..(UPPER OR LOWER)
print(str.swapcase())


# find 
FIND_NAME = "DNYANESH DAHIWADKAR IS THE BEST"
print(FIND_NAME.find("D"))
print(FIND_NAME.find("Z"))
print(FIND_NAME.index("D"))

#STARTSWITH

START_NAME = "Dnyanesh"
star_res = START_NAME.startswith("nyanesh")
print(star_res)


#endwith
end_with = "Dnyanesh is nice"
end_withres = end_with.endswith("nice")
print(end_withres)

in_res = end_with.partition(" ");
print(in_res)

#alpha
str10 = "Dnyanesh12"
print("result :",str10.isalpha())
print("result :",str10.isalnum())
print("result :",str10.isalpha())