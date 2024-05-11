/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_inpt_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:24:13 by yowoo             #+#    #+#             */
/*   Updated: 2024/05/11 13:09:24 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inputis(char *inpt, char *string)
{
	int	len;

	len = 0;
	if (ft_strlen(inpt) < ft_strlen(string))
		len = ft_strlen(string);
	else
		len = ft_strlen(inpt);
	if (ft_strncmp(inpt, string, len) == 0)
		return (1);
	else
		return (0);
}

int	inputstartswith(char *inpt, char *string)
{
	int	len;

	len = ft_strlen(string);
	if (ft_strncmp(inpt, string, len) == 0)
		return (1);
	else
		return (0);
}

int	inputhas(char *input, char c)
{
	while (*input != '\0')
	{
		if (*input == c)
			return (1);
		input++;
	}
	return (0);
}



// char	*make_abs_path(char *input)
// {
// 	char	*full_path;
// 	char	cwd[1024];
// 	char	*slash_input;

// 	getcwd(cwd, sizeof(cwd));
// 	if (*input == '/')
// 	{
// 		full_path = ft_strjoin(cwd, input);
// 		return (free(full_path), full_path);
// 	}
// 	else
// 	{
// 		slash_input = ft_strjoin("/", input);
// 		full_path = ft_strjoin(cwd, slash_input);
// 		return (free(slash_input), free(full_path), full_path);
// 	}
// }
