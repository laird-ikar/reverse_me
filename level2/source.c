#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void	no(void)
{
	printf("Nope.\n");
	exit(1);
}

void	ok(void)
{
	printf("Good job.\n");
	exit(0);
}

int	main(void)
{
	unsigned int	user_index;
	size_t			tmp_size;
	int				tmp_int;
	bool			must_break;
	char			number_buffer[4];
	char			user_string[24];
	char			compared_string[9];
	unsigned int	read_index_user;
	int				write_index_compared;
	int				nb_scanned_stuff;

	printf("Please enter key: ");
	nb_scanned_stuff = scanf("%s", user_string);
	if (nb_scanned_stuff != 1)
		no();
	if (user_string[1] != '0')
		no();
	if (user_string[0] != '0')
		no();

	fflush(stdin);
	memset(compared_string, 0, 9);
	compared_string[0] = 'd';
	number_buffer[3] = 0;
	read_index_user = 2;
	write_index_compared = 1;
	while (true)
	{
		tmp_size = strlen(compared_string);
		user_index = read_index_user;
		must_break = false;
		if (tmp_size < 8)
		{
			tmp_size = strlen(user_string);
			must_break = user_index < tmp_size;
		}
		if (!must_break)
		{
			break ;
		}
		number_buffer[0] = user_string[read_index_user];
		number_buffer[1] = user_string[read_index_user + 1];
		number_buffer[2] = user_string[read_index_user + 2];
		tmp_int = atoi(number_buffer);
		compared_string[write_index_compared] = (char)tmp_int;
		read_index_user = read_index_user + 3;
		write_index_compared = write_index_compared + 1;
	}
	compared_string[write_index_compared] = '\0';
	tmp_int = strcmp(compared_string, "delabere");
	if (tmp_int == 0)
		ok();
	else
		no();
	return (0);
}