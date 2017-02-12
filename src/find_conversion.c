#include "../inc/ft_printf.h"

static int	find_attributes(const char * restrict format, int i, t_attr *attr)
{
	int j;

	j = 0;
	while (format[i + 1] == '#' || format[i + 1] == '0' || format[i + 1] == '-' ||
		format[i + 1] == '+' || format[i + 1] == ' ')
	{
		attr->attributes[j] = format[i + 1];
		j++;
		i += 1;
	}
	return (i + 1);
}

static int	find_field_width(const char * restrict format, int i, t_attr *attr)
{
	int		cnt;
	int		start;
	char	*str;

	cnt = 0;
	start = i;
	while(ft_isdigit(format[i]))
	{
		i++;
		cnt++;
	}
	str = ft_strsub(format, (unsigned int)start, (size_t) cnt);
	attr->fieldwitdh = ft_atoi(str);
	ft_free(1, &str);
	return (i);
}

static int	find_precision(const char * restrict format, int i, t_attr *attr)
{
	int		cnt;
	int		start;
	char	*str;

	cnt = 0;
	i += 1;
	start = i;
	attr->dot_prec = 1;
	while(ft_isdigit(format[i]))
	{
		i++;
		cnt++;
	}
	str = ft_strsub(format, (unsigned int)start, (size_t) cnt);
	attr->fieldwitdh = ft_atoi(str);
	ft_free(1, &str);
	return (i);
}

static int	find_length_mod(const char * restrict format, int i, t_attr *attr)
{
	int j;

	j = 0;
	while (format[i] == 'h' || format[i] == 'l' || format[i] == 'j' || format[i] == 'z')
	{
		if (format[i] == 'j' || format[i] == 'z')
		{
			attr->lenght_mod[j] = format[i];
			j++;
		}
		else if (format[i] == 'h' && format[i + 1] == 'h' || format[i] == 'l' && format[i + 1] == 'l')
		{
			if (format[i + 1] == format[i])
			{
				attr->lenght_mod[j] = format[i] - 32;
				i += 1;
			}
			else
				attr->lenght_mod[j] = format[i];
			j++;
		}
		i++;
	}
	return (i);
}

int			find_conversion(const char * restrict format, int i, t_attr *attr)
{
	int ret;

	if (format[i + 1] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	ret = find_attributes(format, i, attr);
	if (format[ret] > '0' && format[ret] <= '9')
		ret = find_field_width(format, ret, attr);
	if (format[ret] == '.')
		ret = find_precision(format, ret, attr);
	//coder la suite sur les lettres
}