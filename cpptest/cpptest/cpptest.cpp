// cpptest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "mpi.h"
#include "sparta.h"

using namespace SPARTA_NS;

int main(int argc,char **argv)
{
	MPI_Init(&argc, &argv);
	
	SPARTA *sparta = new SPARTA(argc, argv, MPI_COMM_WORLD);

	printf("%g",MPI_Wtime());
	scanf(*argv);
    return 0;
}

