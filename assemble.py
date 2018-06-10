#!/bin/python
from subprocess import call,check_output
call(['./compile'])
# call(['strip','-x','m'])
# for s in ('.dynamic','.rela.dyn','.dynsym','.interp','.bss','.dynstr','.note.gnu.build-id','.eh_frame','.eh_frame_hdr','.gnu.hash','.comment'):
# 	call(['strip','-R',s,'m'])
with open('m.s','w') as f:
	f.write('.section .data\na:\n.octa ')
	b=check_output(['./encode.py','m'])
	f.write(str(b)[2:-1]+"\n.global _start\n_start:\nmov $a,%rax\nadd $");
	c=str(check_output(['readelf','-e','m']))
	import re
	m = re.search('Entry point address:\\s+([^\\\\n]+)',c)
	f.write(m.group(1))
	f.write(',%rax\njmp *%rax\n')
import sys;
if(len(sys.argv)<2 or sys.argv[1]!='n'):
	call(['as','m.s','-o','m.o'])
	call(['ld','m.o','-o','m'])