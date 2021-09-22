#include "Array.hpp"


int main ()
{
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

		Array <int> vect3(0);
		vect3 = vect2;
		std::cout << "Vect3 "<< vect3 << std::endl;

	}

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
			vect[5] = "Look up to the skies and see,";
		}
		catch(const Array<std::string>::OutOfRangeException & e)
		{
			std::cout << "-BEEP BEEP BEEP-";
			std::cerr << e.what() << '\n';
		}
		std::cout << "Vect " << vect << std::endl;
		Array <std::string> vect2(len+1);
		for (unsigned int i = 0; i < len; i++)
			vect2[i] = vect[i] + "\n";
		vect2[len] = "Look up to the skies and see,";
		std::cout << vect2;
		vect = vect2;
		std::cout << vect << std::endl;
		std::cout << std::endl;
	}
}