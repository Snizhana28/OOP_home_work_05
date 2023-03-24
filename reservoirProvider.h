#include "reservoir.h"

class ReservoirProvider
{
public:
	static void showReservoir(Reservoir* obj, int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << "Name : " << obj[i].get_name() << endl;
			cout << "Type : " << obj[i].get_type() << endl;
			cout << "Width (km): " << obj[i].get_width() << endl;
			cout << "Lenght (km): " << obj[i].get_lenght() << endl;
			cout << "Max depth (m): " << obj[i].get_max_depth() << endl << endl;
		}
	}
};