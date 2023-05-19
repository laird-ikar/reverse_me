/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   source.c										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bdehais <bdehais@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/18 13:56:26 by bguyot			#+#	#+#			 */
/*   Updated: 2023/05/18 16:19:26 by bdehais		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

int	main(void)
{
	int		is_pass_valid;
	char	user_pass[100];
	char	true_pass[14];

	*((uint32_t *)(true_pass)) = 0x74735f5f;
	*((uint32_t *)(true_pass + 4)) = 0x5f6b6361;
	*((uint32_t *)(true_pass + 8)) = 0x63656863;
	true_pass[12] = 0x6b;
	printf("Please entre key :");
	scanf("%s", user_pass);
	is_pass_valid = strcmp(user_pass, (char *)&true_pass);
	if (is_pass_valid == 0)
		printf("Good job.\n");
	else
		printf("Nope.\n");
	return (0);
}