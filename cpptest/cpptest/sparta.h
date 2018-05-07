#ifndef SPARTA_SPARTA_H
#define SPARTA_SPARTA_H

#include "mpi.h"

namespace SPARTA_NS {
#pragma once
	class SPARTA
	{
	public:
		class Memory *memory;		   // memory allocation functions
		class Error *error;			   // error handling
		class Universe *universe;	   // universe of processors
		//class Input *input;            // input script processing
		//							   // ptrs to top-level SPARTA-specific classes
		//class Particle *particle;      // particles
		//class Update *update;          // timestepper
		//class Comm *comm;              // inter-processor communication
		//class Domain *domain;          // simulation box
		//class Modify *modify;          // fixes and computes
		//class Grid *grid;              // volumetric grid cells
		//class Surf *surf;              // surface elements
		//class Collide *collide;        // collisions and chemistry
		//class React *react;            // chemistry reactions
		class Output *output;          // stats/dump/restart
		//class Timer *timer;            // CPU timing info

		MPI_Comm world;                // MPI communicator
		FILE *infile;                  // infile
		FILE *screen;                  // screen output
		FILE *logfile;                 // logfile

		char *suffix;                  // suffix to add to input script style names
		int suffix_enable;             // 1 if suffixes are enabled, 0 if disabled
		char ***packargs;              // arguments for cmdline package commands
		int num_package;               // number of cmdline package commands

		//class KokkosSPARTA *kokkos;    // KOKKOS accelerator class
		//class MemoryKokkos *memoryKK;  // KOKKOS version of Memory class

		//							   // other top-level SPARTA classes and variables


		SPARTA(int, char **, MPI_Comm);
		~SPARTA();

		//void create();
		//void post_create();
		//void init();
		//void destroy();

		//void print_styles();
	};
}
#endif
