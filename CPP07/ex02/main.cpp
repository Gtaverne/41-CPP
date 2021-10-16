#include "Array.hpp"

#define MAX_VAL 750



int main ()
{
	{
		//The main from the subject
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		//Here we try out of range exceptions
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		//Careful, you'll print a lot if you uncomment this
		// std::cout << numbers << std::endl;
		delete [] mirror;//
		std::cout << "END OF THE MAIN OF THE SUBJECT" << std::endl;

	}
	
	
	{
		size_t len = 10;
		Array <int> vect(len);
		std::cout << "Let's create an array of 10's" << std::endl;
		for (unsigned int i = 0; i < len; i++)
			vect[i] = 10 * i;
		//We overloaded << , so we can print arrays
		std::cout << vect << std::endl;

		std::cout << "Let's create a copy and modify the copy" << std::endl;
		Array <int> vect2(vect);		
		for (unsigned int i = 0; i < vect2.size(); i++)
			vect2[i]++;
		std::cout << "Vect " << vect << std::endl;
		std::cout << "Vect2 " << vect2 << std::endl;

		Array <int> vect3;
		vect3 = vect2;
		std::cout << "Vect3 "<< vect3 << std::endl;

	}
	std::cout << std::endl << "NEW TESTS" << std::endl;
	{
		size_t len = 5;
		Array <std::string> vect(len);
		std::cout << "Let's create an array of 5 strings" << std::endl;
		vect[0] = "Is this the real life?";
		vect[1] = "Is this just fantasy?";
		vect[2] = "Caught in a landside,";
		vect[3] = "No escape from reality";
		vect[4] = "Open your eyes,";
		try
		{
			std::cout << "We try to add too much" << std::endl;
			vect[5] = "Look up to the skies and see,";
		}
		catch(const Array<std::string>::OutOfRangeException & e)
		{
			std::cout << "-BEEP BEEP BEEP-";
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl << "Vect " << vect << std::endl;
		std::cout << std::endl << "We create a new vector long enough" << std::endl;
		Array <std::string> vect2(len+1);
		for (unsigned int i = 0; i < len; i++)
			vect2[i] = vect[i] + "\n";
		vect2[len] = "Look up to the skies and see,";
		std::cout <<  vect2;
		vect = vect2;
		std::cout << std::endl << vect << std::endl;
		std::cout << std::endl;
	}

	// //Last tests
	// {
	// 	Array<int> arrayvide;
	// 	Array<int> autraArrayvide(0);
	// 	Array<int> autraArraypleindevide(10);
	// }
}