#include <suite.h>

int		suite_filter_failed(t_suite	*suite)
{
	return (mt_lst_find(suite->tests, (void *)test_filter_failed) != NULL);
}
