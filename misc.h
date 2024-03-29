#include <stdint.h>
#ifndef NRN_VERSION_GTEQ_8_2_0
extern FILE* hoc_obj_file_arg(int narg);
extern Object* ivoc_list_item(Object*, int);
extern int hoc_is_tempobj_arg(int narg);
extern char *gargstr();
extern char** hoc_pgargstr();
extern void mcell_ran4_init(uint32_t idum);
extern double mcell_ran4(unsigned int* idum,double* ran_vec,unsigned int n,double range);
#endif

extern int list_vector_px(Object *ob, int i, double** px);
extern int list_vector_px2(Object *ob, int i, double** px, void** vv);
extern int list_vector_px3(Object *ob, int i, double** px, void** vv);
extern int list_vector_px4(Object *ob, int i, double** px, unsigned int n);
extern double *vector_newsize (IvocVect* vv, int n);
