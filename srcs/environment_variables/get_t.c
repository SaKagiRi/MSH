/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_t.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <knakto@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 02:23:32 by knakto            #+#    #+#             */
/*   Updated: 2025/05/05 07:34:21 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

char	***env(void)
{
	static char	**env = NULL;

	return (&env);
}

t_env	**get_t_env(void)
{
	static t_env	*env;

	return (&env);
}

int	*minishell_pid(void)
{
	static int	pid;

	return (&pid);
}
