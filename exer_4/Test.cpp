/* Take your solution fro exer 11-3 and add an implementation partition called internals, containing a helper method
   called convertMilesToKm(double miles) in the Simulator namespace. One mile is 1.6 kilometer. Add a method to both
   the CarSimulator and BikeSimulator classes called setOdometer(double miles), wich uses the helper method to convert
   the given miles to kilometers and then prints it out to the standard output. Confirm in your main() function that
   the setOdometer() works on both classes. Also confirm that main() cannot call convertMilesToKm(). */

import simulator;

int main()
{
	using namespace Simulator;

	CarSimulator carSim;
	carSim.setOdometer(123);

	BikeSimulator bikeSim;
	bikeSim.setOdometer(12345.36);

	// The following does not compile as convertMilesToKm()
	// is an internal helper method, not exported from the
	// simulator module.
	//double km{ convertMilesToKm(2.0) };
}
