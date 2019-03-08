#include <iostream>
int mza(int f);

int main()
{
	int a =4;
	int b;
	b=mza(a);
	std::cout<<"b="<<b<<std::endl;
	return 0;
}

int mza(int f)
{
	return f*f;
}
