#include <iostream>
#include <iomanip>

/* given a Ammount and Denominations give the minum number of notes required 
 * */

int main()
{

	//int denomination[]{1, 5, 10, 20, 100}; //What is the new style of initialization
	int denomination[]{100, 20, 10, 5, 1}; //What is the new style of initialization
	int amount{136};					   // old styke = 101;

	//for each numnber in den divide the ammount with that den the whole number is the number of notes of that currency

	for (int i : denomination)
	{	
		if (amount >= i)
		{
			int notes = amount / i;
			std::cout << std::setw (5) << i << " X "
					  << std::setw (4) << notes << " = "
					  << std::setw (8) << i * notes << std::endl;
			amount = amount % i;
		}
	}	
}
