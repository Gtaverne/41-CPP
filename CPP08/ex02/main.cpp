#include "MutantStack.hpp"


//Check here which functions can be tested http://www.cplusplus.com/reference/stl/
template <typename cont_type>
void tester(cont_type &cont)
{
	std::cout << "size: " << cont.size() << std::endl;
	std::cout << "empty: " << cont.empty() << std::endl;

	cont_type replica(cont);
	std::cout << std::endl << "We test operators with replica = cont:  " << std::endl;
	std::cout << "cont == replica " << (cont == replica) << std::endl;
	std::cout << "cont != replica " << (cont != replica) << std::endl;
	cont_type emptycont;
	std::cout << "cont == empty cont " << (cont == emptycont) << std::endl;
	std::cout << "cont >= empty cont " << (cont >= emptycont) << std::endl;
	std::cout << "cont > empty cont " << (cont > emptycont) << std::endl;


	return;
}



int main()
{
//**********************************************//
// The main from the subject                    //
//**********************************************//
{
	// Here we try we can do with mutant stack what we do with stack
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	//Now comes the interesting part, where we can try iterators
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

//**********************************************//
// So I heard you wanted custom tests ?         //
//**********************************************//
	//Stack has iterators, so does mutantstack
	{
		std::cout << std::endl << "List tester:  " << std::endl;
		std::list<int> ls;
		ls.push_back(-10);
		tester(ls);
		
		std::cout << std::endl << "Mutantstack tester:  " << std::endl;
		MutantStack<int> ms;
		ms.push(-10);
		tester(ms);
	}

	return 0;
}