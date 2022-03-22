#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
int compare(const T& a, const T& b){
	if (a < b){
		return -1;
	}
	else if (a > b){
		return 1;
	}
	else
		return 0;
}


template <typename Type>
class Queue
{
public:
	Queue();
	Type & front();
	const Type& front() const;
	void push(const Type &);
	void pop();
	bool empty() const;
private:
};
int main(){
	Queue<int>qi;
	Queue<string>qs;
	cout << compare(1, 0) << endl;
	string a1 = "3123";
	string a2 = "aaa";
	cout << compare(a1, a2) << endl;
	cout << compare(0.45645, 0.4949) << endl;
	system("pause");
	return 0;
}