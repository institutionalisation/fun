#include"tuple"
#include"type_traits"
#include"base/c"
struct ostream;
struct istream;
#include"wrap/h"
#include"chunk/h"
#include"char/h"
#include"int/h"
#include"wrap/c"
#include"fstream/c"
#include"ostream/c"
#include"istream/c"
#include"chunk/c"
#include"char/c"
#include"int/c"

asm volatile(".globl _start");
extern "C"
void _start() {
	ostream out(1,mem(char,100));
	istream in(0,mem(char,100));
	auto[a] = in.get<u>();
	//out("a:",a,nl); out.flush();
	for(;a.x--;) {
		auto[b,c] = in.get<s,s>();
		//out("b:",b,",c:",c,nl); out.flush();
		out(b.x+c.x,nl); out.flush();
	}
	out.flush();
	exit(0);
}