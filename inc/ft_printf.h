#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/inc/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_attr
{
	char		attributes[6]; //#0-+espace 
	int			fieldwidth;
	short		dot_prec; // presence ou non du point de precision
	int			precision; // largeur du champs defini en precision
	char		length_mod[7]; //hh h l ll j z 
} 				t_attr;

int		ft_printf(const char * restrict format, ...);

#endif