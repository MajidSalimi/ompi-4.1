/*
 * $HEADER$
 */

#include "ompi_config.h"

#include <stdio.h>

#include "mpi.h"
#include "mpi/f77/bindings.h"

#if OMPI_HAVE_WEAK_SYMBOLS && OMPI_PROFILE_LAYER
#pragma weak PMPI_DIMS_CREATE = mpi_dims_create_f
#pragma weak pmpi_dims_create = mpi_dims_create_f
#pragma weak pmpi_dims_create_ = mpi_dims_create_f
#pragma weak pmpi_dims_create__ = mpi_dims_create_f
#elif OMPI_PROFILE_LAYER
OMPI_GENERATE_F77_BINDINGS (PMPI_DIMS_CREATE,
                           pmpi_dims_create,
                           pmpi_dims_create_,
                           pmpi_dims_create__,
                           pmpi_dims_create_f,
                           (MPI_Fint *nnodes, MPI_Fint *ndims, MPI_Fint *dims, MPI_Fint *ierr),
                           (nnodes, ndims, dims, ierr) )
#endif

#if OMPI_HAVE_WEAK_SYMBOLS
#pragma weak MPI_DIMS_CREATE = mpi_dims_create_f
#pragma weak mpi_dims_create = mpi_dims_create_f
#pragma weak mpi_dims_create_ = mpi_dims_create_f
#pragma weak mpi_dims_create__ = mpi_dims_create_f
#endif

#if ! OMPI_HAVE_WEAK_SYMBOLS && ! OMPI_PROFILE_LAYER
OMPI_GENERATE_F77_BINDINGS (MPI_DIMS_CREATE,
                           mpi_dims_create,
                           mpi_dims_create_,
                           mpi_dims_create__,
                           mpi_dims_create_f,
                           (MPI_Fint *nnodes, MPI_Fint *ndims, MPI_Fint *dims, MPI_Fint *ierr),
                           (nnodes, ndims, dims, ierr) )
#endif


#if OMPI_PROFILE_LAYER && ! OMPI_HAVE_WEAK_SYMBOLS
#include "mpi/f77/profile/defines.h"
#endif

void mpi_dims_create_f(MPI_Fint *nnodes, MPI_Fint *ndims, MPI_Fint *dims, MPI_Fint *ierr)
{

}
