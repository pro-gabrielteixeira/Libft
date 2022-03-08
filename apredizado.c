#include <stdio.h>

typedef struct s_list
{
	int				ordem;
	struct s_list	*crescente;
}	t_list;

int	main(void)
{
	t_list *ptr;

	t_list numero;
	numero.ordem = 0;
	t_list numero1;
	numero1.ordem  = 1;
	
	numero.crescente = &numero1;
	numero1.crescente = NULL;
	ptr = &numero;
	while (ptr)
	{
		printf("%d", ptr->ordem);
		ptr = ptr->crescente;
	}
	return (0);
}
