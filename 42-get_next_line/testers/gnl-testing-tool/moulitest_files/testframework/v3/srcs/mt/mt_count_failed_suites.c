#include <mt.h>

size_t		mt_count_failed_suites(t_mt *mt)
{
	return (mt_lst_count(mt->suites, (void *)suite_filter_failed));
}
