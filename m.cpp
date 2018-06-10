#include"tuple"
#include"type_traits"

#define u unsigned
#define s signed
#define ll long long
#define tn typename
#define nl "\n"
#define tm template
#define this (*this)
#define ns namespace

#include"base/c"
struct ostream;
struct istream;
#include"int/h"
#include"char/h"
#include"chunk/h"

#include"stacked/c"

#include"fstream/c"
#include"ostream/c"
#include"istream/c"
#include"chunk/c"
#include"char/c"
#include"int/c"
#include"queue/c"
#define op operator
#define order op<

// tm<tn A>
// void merge(chunk<A> arr,u a,u b,u c) {
// 	chunk<A> buf = mem(A,arr.size);
// 	int i = a, j = b, bi = 0;
// 	for(; i < b && j < c ;)
// 		if(arr[i]<arr[j])
// 			buf[bi++]= arr[i++];
// 		else
// 			buf[bi++]= arr[j++];
// 	for(; i < b; ++i) buf[bi++] = arr[i];
// 	for(; j < c; ++j) buf[bi++] = arr[j];
// 	for(int k = 0; k < bi; ++k) arr[k+a] = buf[k];
// }
// tm<tn A>
// void mergesort(chunk<A> arr) {
// 	for(u i = 1; i*2 <= arr.size; i *= 2)
// 		for(u j = 0; j+i*2 <= arr.size; j += i*2)
// 			merge(arr,j,j+i,j+i*2);
// 	for(u j = arr.size - arr.size.lsb(),
// 			i = j - j.lsb();
// 			j != 0; j = i, i -= i.lsb()
// 		 )
// 		merge(arr,i,j,arr.size);
// }
// tm<tn A>
// void sort(chunk<A> a) {
// 	mergesort(a);
// }
// struct mud {
// 	u i,t;
// };
// bool order(mud a,mud b) {
// 	return a.i<b.i; }
asm(".globl _start");
extern "C"
void _start() {
	sbrk(10);
	istream in(0,40000);
	ostream out(1,40000);
	write(1,(void*)"henlo" nl,6);
	//out("test" nl);
	// out("check" nl); out.flush(); exit(0);
	// auto[n,m,j]= in.get<u,u,u>();
	// auto muds= mem(mud,m);
	// for(u i=0; i<m; ++i)
	// 	std::tie(muds[i].i,muds[i].t)= in.get<u,u>();
	// sort(muds);
	// out.flush();
	exit(0);
}