#ifndef CALC_H
#define CALC_C
/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: the function associated
 */
	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;
		int (*get_op_func(char *s))(int, int);
#endif /* CALC_H */
