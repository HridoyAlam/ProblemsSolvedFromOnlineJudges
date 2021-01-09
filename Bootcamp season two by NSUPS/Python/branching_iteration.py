"""
x=1
print(x)
x_str =str(x)
print("my fav num is" , x, ".", "x =", x)
print("my fav num is " + x_str + ". " + "x = " +  x_str)


#text = input("Type anything... ")
print(5*text)

input gives you a string so must cast if working 
with numbers

#text = int(input("Type anything... "))
print(5*text) 


#COMPARISON EXAMPLE
pset_time = 15
sleep_time = 8
print(sleep_time > pset_time)
derive = True
drink = False
both = drink and derive
print(both)


CONTROL FLOW - BRANCHING

if <condition>:
<expression>
<expression>
...


---
if <condition>:
    <expression>
    <expression>
    ...
else:
    <expression>
    <expression>
...


---

if <condition>:
    <expression>
    <expression>
    ...
elif <condition>:
    <expression> 
    <expression>
    ...
else:
    <expression>
    <expression>
...

--
<condition>has a value True or False
 evaluate expressions in that block if <condition> is True
---INDENTATION
matters in Python
how you denote blocks of code

x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))
if x==y:
    print("x and y are equal")
    if y != 0:
        print("therefore, x / y is", x/y)

elif x < y:
    print("x is smaller")
else:
    print("y is smaller")
print("thanks !")
--
--CONTROL FLOW: 
while LOOPS
while <condition>:
    <expression>
    <expression>
    ...
<condition> evaluates to a Boolean
if <condition> is True, do all the steps inside the while code block
check <condition> again
repeat until <condition> is False


---CONTROL FLOW: 
while and for LOOPS

iterate through numbers in a sequence
# more complicated with while loop


n = 0
while n<5:
    print(n)
    n =n+1;



# shortcut with for loop
n=0
for n in range(5):
    print(n)

#CONTROL FLOW: forLOOPS
   for <variable> in range(<some_num>):
   <expression>
   <expression>
   ...


each time through the loop, <variable> takes a value
first time, <variable> starts at the smallest value
next time, <variable> gets the prevvalue + 1
etc.

#range(start,stop,step)
default values are start = 0and step = 1and optional
loop until value is stop - 1 

mysum = 0
for i in range(7,10):
    mysum += i
print(mysum)



mysum = 0
for i in range(5,11,2):
    mysum +=i
print(mysum)

#break STATEMENT
immediately exits whatever loop it is in
skips remaining expressions in code block
exits only innermost loop

while <condition_1>:
    while <condition_2>:
        <expression_a>
        break
        <expression_b>
    <expression_c>

"""

mysum = 0;
for i in range(5,11,2):
    mysum += i
    if mysum == 5:
       # break
        mysum += 1
print(mysum)
