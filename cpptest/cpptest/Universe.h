#pragma once
#ifndef SPARTA_UNIVERSE_H
#define SPARTA_UNIVERSE_H

#include "Pointers.h"

namespace SPARTA_NS {
	class Universe :
		protected Pointers
	{
	public:
		Universe(class SPARTA *,MPI_Comm);
		~Universe();
	};

}
#endif