# -*- coding: utf-8 -*-
""" s = "abc"
print(len(s))

print(s[0])

#can slice strings using [start:stop:step]
# if give two numbers, [start:stop], step=1 by default

# you can also omit numbers and leave just colons


s= "abcdefgh"
print(s[3:6])  # same ass[3:6:1]

print(s[3:6:2])
print(s[::]) #evaluates to "abcdefgh", same as s[0:len(s):1]

print(s[::-1]) #evaluates to "hgfedbca", same as s[-1:-(len(s)+1):-1]

print(s[4:1:-2]) #evaluates to "ec"


s = "hello"
#s[0] = 'y' # gives an error
s = 'y'+s[1:len(s)] #is allowed,s bound to new object
print(s)
#for LOOPS RECAP
forloops have a loop variable that iterates over a set of values

for var in range(4): variterates over values 0,1,2,3
    <expressions>    expressions inside loop executed with each value
for varfor varin range(4,6): variterates over values 4,5
    <expressions>

"""
