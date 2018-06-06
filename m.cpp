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
	ostream out(1,mem(char,5));
	out("Hello, World!" nl);
	out.flush();
	istream in(0,mem(char,5));
	auto[a] = in.get<char>();
	exit(0);
}