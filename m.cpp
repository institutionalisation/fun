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
	ostream out(1,mem(char,40000));
	istream in(0,mem(char,40000));
	auto[a] = in.get<u>();
	auto freq = mem(u,201);
	for(u i = 0; i < 201; ++i)
		freq[i]= 0;
	for(;a--;) {
		auto[b] = in.get<s>();
		++freq[b+100];
	}
	u max = 0;
	for(u i = 1; i < 201; ++i)
		if(freq[max]<freq[i])
			max= i;
	out((s)max-100);
	out.flush();
	exit(0);
}