#pragma once
#ifndef SPARTA_ERROR_H
#define SPARTA_ERROR_H

#include "Pointers.h"
namespace SPARTA_NS {
	class Error :
		public Pointers
	{
	public:
		Error(class SPARTA *);
	};

}
#endif