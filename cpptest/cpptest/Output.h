#ifndef SPARTA_OUTPUT_H
#define SPARTA_OUTPUT_H


#pragma once
#include "Pointers.h"
namespace SPARTA_NS {
	class Output :
		public Pointers
	{
	public:
		Output(class SPARTA *);
		~Output();
	};

}
#endif