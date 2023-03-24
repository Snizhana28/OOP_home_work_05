#include "reservoirProvider.h"

class Screns
{
public:
	static void Home()
	{
		int size = 3;
		Reservoir* reservoirs = new Reservoir[size]
		{
			Reservoir("Dnipro", "river", 3.1 , 2200, 20),
			Reservoir("Danube", "river", 2, 2800, 10),
			Reservoir("Desna",  "river", 1.2, 1030, 8)
		};

		ReservoirProvider::showReservoir(reservoirs, 3);

		for (size_t i = 0; i < size; i++)
			cout << "Volume of the river num #" << i + 1 << " : " << reservoirs[i].get_volume_of_river() << endl;
		cout << endl;

		for (size_t i = 0; i < size; i++)
			cout << "Water surface sguare num #" << i + 1 << " : " << reservoirs[i].get_sguare() << endl;
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (reservoirs[i].get_same_type(reservoirs[j]))
					cout << reservoirs[i].get_name() << " & " << reservoirs[j].get_name() << " - it's one type" << endl;
				else
					cout << reservoirs[i].get_name() << " & " << reservoirs[j].get_name() << " - it's a different type" << endl;
			}
		}
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
				reservoirs[i].compare_sguare(reservoirs[j]);
		}
		cout << endl;

		delete[] reservoirs;
	}
};