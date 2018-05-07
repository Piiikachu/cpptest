#include "stdafx.h"

#include "sparta.h"
#include "Memory.h"
#include "Error.h"
#include "Universe.h"


using namespace SPARTA_NS;
SPARTA::SPARTA(int narg, char **arg, MPI_Comm communicator)
{
	memory = new Memory(this);
	error = new Error(this);
	universe = new Universe(this,communicator);
	output = NULL;

	screen = NULL;
	logfile = NULL;

	// parse input switches

	int inflag = 0;
	int screenflag = 0;
	int logflag = 0;
	int partscreenflag = 0;
	int partlogflag = 0;
	int kokkosflag = 0;
	int helpflag = 0;

	suffix = NULL;
	suffix_enable = 0;
	packargs = NULL;
	num_package = 0;
	int kkfirst, kklast;

	int npack = 0;
	int *pfirst = NULL;
	int *plast = NULL;
}

SPARTA::~SPARTA()
{
}
