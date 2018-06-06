#!/bin/python
import sys
import string
s = []
with open(sys.argv[1],'rb') as f:
	for c in f.read():
		s.append(c)
i = 0
while(i<len(s)):
	a = 0
	for j in range(min(16,len(s)-i)-1,-1,-1):
		a <<= 8
		a += s[j+i]
	b = hex(a)
	c = str(a)
	print((''if i==0else ',')+(b if len(b)<len(c) else c),end='')
	i+=16