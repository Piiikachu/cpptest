#ifndef SPARTA_POINTERS_H
#define SPARTA_POINTERS_H

#include "spatype.h"
#include "mpi.h"
#include "stdio.h"
#include "sparta.h"

namespace SPARTA_NS {
	// universal defines inside namespace

#define FLERR __FILE__,__LINE__

#define MIN(A,B) ((A) < (B) ? (A) : (B))
#define MAX(A,B) ((A) > (B) ? (A) : (B))

	// roundup a char ptr to 8-byte boundary
	// roundup an int to multiple of 8

#define ROUNDUP(A) (char *) (((uint64_t) (A) + 7) & ~7);
#define IROUNDUP(A) ((((int) (A) + 7) / 8) * 8);

#pragma once
	class Pointers
	{
	public:
		Pointers(SPARTA *ptr):
			sparta(ptr),
			memory(ptr->memory),
			error(ptr->error),
			universe(ptr->universe),
			//input(ptr->input),
			//particle(ptr->particle),
			//update(ptr->update),
			//comm(ptr->comm),
			//domain(ptr->domain),
			//modify(ptr->modify),
			//grid(ptr->grid),
			//surf(ptr->surf),
			//collide(ptr->collide),
			//react(ptr->react),
			output(ptr->output),
			//timer(ptr->timer),
			//memoryKK(ptr->memoryKK),
			world(ptr->world),
			infile(ptr->infile),
			screen(ptr->screen),
			logfile(ptr->logfile) {}

		//virtual ~Pointers();

	protected:
		SPARTA *sparta;
		Memory *&memory;
		Error *&error;
		Universe *&universe;
		//Input *&input;

		//Particle *&particle;
		//Update *&update;
		//Comm *&comm;
		//Domain *&domain;
		//Modify *&modify;
		//Grid *&grid;
		//Surf *&surf;
		//Collide *&collide;
		//React *&react;
		Output *&output;
		//Timer *&timer;

		//MemoryKokkos *&memoryKK;

		MPI_Comm &world;
		FILE *&infile;
		FILE *&screen;
		FILE *&logfile;
	};
}
#endif
