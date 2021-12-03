#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class Energy
{
public:
	Energy()
	{}
	
	void set_joules(double value_j)
	{
		value = value_j;
	}

	void set_erges(double value_erg)
	{
		value = value_erg/j_erg;
	}

	void set_electron_volts(double value_ev)
	{
		value = value_ev/j_ev;
	}

	double get_joules()
	{
		return value;
	}

	double get_erges()
	{
		return value*j_erg;
	}

	double get_electron_volts()
	{
		return value*j_ev;
	}

private:
	double value;
	static inline const double j_erg = 1e7;
	static inline const double j_ev = 1e19 / (1,6);
}
