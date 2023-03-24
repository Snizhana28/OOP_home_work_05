#include "application_library.h"

class Reservoir
{
private:

	string name;
	string type;
	double width;
	double lenght;
	double max_depth;

public:

	inline void set_name(string name)
	{
		this->name = name;
	}
	inline string get_name() const
	{
		return name;
	}

	inline void set_type(string type)
	{
		this->type = type;
	}
	inline string get_type() const
	{
		return type;
	}

	inline void set_width(double width)
	{
		this->width = width;
	}
	inline int get_width() const
	{
		return width;
	}

	inline void set_lenght(double lenght)
	{
		this->lenght = lenght;
	}
	inline int get_lenght() const
	{
		return lenght;
	}

	inline void set_max_depth(double max_depth)
	{
		this->max_depth = max_depth;
	}
	inline int get_max_depth() const
	{
		return max_depth;
	}
	Reservoir()
	{
		set_name(0);
		set_type(0);
		set_width(0);
		set_lenght(0);
		set_max_depth(0);
	}
	Reservoir(string name, string type, double width, double lenght, double max_depth)
	{
		set_name(name);
		set_type(type);
		set_width(width);
		set_lenght(lenght);
		set_max_depth(max_depth);
	}
	explicit Reservoir(const Reservoir*& obj)
	{
		set_name(obj->name);
		set_type(obj->type);
		set_width(obj->width);
		set_lenght(obj->lenght);
		set_max_depth(obj->max_depth);
	}

	Reservoir* copy() const
	{
		return new Reservoir(get_name(), get_type(), get_width(), get_lenght(), get_max_depth());
	}

	~Reservoir()
	{
		cout << "Reservoir " << name << " is being destroyed" << endl;
	}
	double get_volume_of_river() const
	{
		return get_width() * get_lenght() * get_max_depth();
	}
	double get_sguare() const
	{
		return get_width() * get_lenght();
	}
	bool get_same_type(const Reservoir& other) const
	{
		return type == other.type;
	}
	bool compare_sguare(const Reservoir& other) const
	{
		if (type != other.type)
		{
			cout << "Error! The types of reservoirs are different" << endl;
			return false;
		}
		else if (get_sguare() > other.get_sguare())
		{
			cout << name << " has a larger area (" << get_sguare() << " km^2) than " << other.name << "(" << other.get_sguare() << " km^2)" << endl;
			return true;
		}
		else if (get_sguare() < other.get_sguare())
		{
			cout << name << " has a smaller area (" << get_sguare() << " km^2) than " << other.name << "(" << other.get_sguare() << " km^2)" << endl;
			return true;
		}
		else
		{
			cout << name << " & " << other.name << " have the same area" << endl;
			return true;
		}
	}
};