/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:39:54 by bguyot            #+#    #+#             */
/*   Updated: 2023/05/19 09:03:01 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

void	__syscall_malloc(void)
{
	printf("Nope.\n");
	exit(1);
}

void	___syscall_malloc(void)
{
	printf("Good job.\n");
	exit(0);
}

int	main(void)
{
	unsigned long	string_to_compare_len;
	int				number_stocker;
	size_t			tmp_str_size;
	bool			tmp_bool;
	char			number_buffer[4];
	char			user_input[31];
	char			str_to_compare[9];
	unsigned long	user_input_index;
	int				strcmp_ret;
	int				str_to_compare_index;
	int				nb_inputs;

	printf("Please enter key: ");
	nb_inputs = scanf("%s", user_input);
	if (nb_inputs != 1)
		__syscall_malloc();
	if (user_input[1] != '2')
		__syscall_malloc();
	if (user_input[0] != '4')
		__syscall_malloc();
	fflush(STDIN_FILENO);
	memset(str_to_compare, 0, 9);
	str_to_compare[0] = '*';
	number_buffer[3] = 0;
	user_input_index = 2;
	str_to_compare_index = 1;
	while (true)
	{
		tmp_str_size = strlen(str_to_compare);
		string_to_compare_len = user_input_index;
		tmp_bool = false;
		if (tmp_str_size < 8)
		{
			tmp_str_size = strlen(user_input);
			tmp_bool = string_to_compare_len < tmp_str_size;
		}
		if (!tmp_bool)
			break;
		number_buffer[0] = user_input[user_input_index];
		number_buffer[1] = user_input[user_input_index + 1];
		number_buffer[2] = user_input[user_input_index + 2];
		number_stocker = atoi(number_buffer);
		str_to_compare[str_to_compare_index] = (char) number_stocker;
		user_input_index = user_input_index + 3;
		str_to_compare_index = str_to_compare_index + 1;
	}
	str_to_compare[str_to_compare_index] = '\0';
	strcmp_ret = strcmp(str_to_compare, "********");
	if (strcmp_ret == -2)
		__syscall_malloc();
	else if (strcmp_ret == -1)
		__syscall_malloc();
	else if (strcmp_ret == 0)
		___syscall_malloc();
	else if (strcmp_ret == 1)
		__syscall_malloc();
	else if (strcmp_ret == 2)
		__syscall_malloc();
	else if (strcmp_ret == 3)
		__syscall_malloc();
	else if (strcmp_ret == 4)
		__syscall_malloc();
	else if (strcmp_ret == 5)
		__syscall_malloc();
	else if (strcmp_ret == 0x73)
		__syscall_malloc();
	else
		__syscall_malloc();
	return (0);
}
