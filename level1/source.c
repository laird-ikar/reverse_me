/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:56:26 by bguyot            #+#    #+#             */
/*   Updated: 2023/05/18 13:59:27 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    int     is_pass_valid;
    char    user_pass[100];
    char    true_pass[];
    
    true_pass = '__stack_check';
    printf("Please entre key :");
    scanf("%s", user_pass);
    is_pass_valid = strcmp(user_pass, (char *)&true_pass);
    if (is_pass_valid == 0)
        printf("Good job.\n");
    else
        printf("Nope.\n");
    return 0;
}