#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


#ifdef EXAMPLE0
int main() {
	//max heap by default

	std::priority_queue<int> q;
	q.push(10); q.push(20); q.push(4); q.push(7);
	while (!q.empty()) {
		std::cout << q.top() << ",";
		q.pop();
	}
	std::cout << std::endl;
	//min heap
}
#endif
#ifdef EXAMPLE1
int main(){
	std::priority_queue<int,std::vector<int>, std::greater<int> > p;
	p.push(4); p.push(19); p.push(25); p.push(5); p.push(8); p.push(1);
	while (!p.empty()) {
		std::cout << p.top() << ",";
		p.pop();
	}
	std::cout << std::endl;
}
#endif

#ifdef EXAMPLE2
#include "Test.h"
struct comp {
	bool operator() (Test &a,Test& b) {
		return a.y() > b.y();
	}
};
int main(){
	
	std::priority_queue<Test, std::vector<Test>, comp> q;
	q.push(Test(10, 20)); q.push(Test(4, 5)); q.emplace(1, 7);
	while (!q.empty()) {
		auto t = q.top();
		std::cout << "(" << t.x() << "," << t.y() << ")\n";
		q.pop();
	}

}
#endif

#ifdef EXAMPLE3
#include "Test.h"

int main() {
	std::priority_queue<Test> q;
	q.push(Test(10, 20)); q.push(Test(4, 5)); q.emplace(1, 7);
	while (!q.empty()) {
		auto t = q.top();
		std::cout << "(" << t.x() << "," << t.y() << ")\n";
		q.pop();
	}

}
#endif

#ifdef EXAMPLE4
#include "heap.h"
int main() {
	heap<int> h;
	h.push(10);h.push(8);h.push(30);h.push(9);	h.push(12);
	h.print();
	h.pop();
	h.push(5);	h.push(40);	h.push(25);
	h.pop();
	h.print();
}
#endif
#ifdef EXAMPLE5
#include "heap.h"
#include "Test.h"
int main() {
	heap<Test> h;
	h.push(Test(7, 2)); h.push(Test(3, 9)); h.push(Test(1, 13)); h.push(Test(9, 10));
	h.print();
}
#endif

#ifdef EXAMPLE6
#include "heap.h"
#include "Test.h"
int main() {
	heap<Test> h;
	h.push(Test(7, 2)); h.push(Test(3, 9)); h.push(Test(1, 13)); h.emplace(9, 10);
	h.print();
}
#endif

#ifdef EXAMPLE7
#include "Test.h"
struct a_struct {
	std::string name;
	double value;
	int size;
	a_struct(std::string n, double v, int s) :name(n), value(v), size(s) {
		std::cout << "ctor with name=" << name
			<< " value=" << value << " size=" << size << std::endl;
	}

};

template<typename T, typename ...Ts>
void create_type(Ts&& ...args) {
	T t(args...);
}
int main() {
	create_type<a_struct>("one", 1.1, 4);
	create_type<Test>(10, 20);
}
#endif 
#ifdef EXAMPLE8
#include "Source1.cpp"
#include "Test.h"
int main(){
	heap<Test> h;
	h.push(Test(30,40));
	h.push(Test(50, 60));
	h.emplace(70, 34);
}
#endif

