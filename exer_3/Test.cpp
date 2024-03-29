/* Take your solution from exer 11-2 and convert it to use one primary module interface and two module interface 
   partition files, one for the simulator:car partition containing the CarSimulator class, and one for the simulator
   :byke partition containing the BykeSimulator class. */

import simulator;

int main()
{
	using namespace Simulator;

	CarSimulator carSim;
	BikeSimulator bikeSim;
}