#include <stdio.h>
#include <mpi.h> 

int main(int argc, char *argv[])
{
  /* Define variables that we are going to use in the program */
  int rank, size;
  
  MPI_Init(&argc, &argv);
  
  /* Find out how many processes are involved, pass it the address (use &) of size. */
  MPI_Comm_size(MPI_COMM_WORLD, &size);

          /* Find out what id this process has, again pass the adreess of the variable. */
          MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    for (int i; i < size; i++){
        if (i==rank){

	    printf("Hello World from rank %d of %d\n", rank, size);

        }
        MPI_Barrier(MPI_COMM_WORLD);
    }
  MPI_Finalize();

}

