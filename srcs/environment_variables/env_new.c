/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <knakto@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 02:40:44 by knakto            #+#    #+#             */
/*   Updated: 2025/05/29 13:46:11 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env.h"

t_env	*new_env(char *key, char *value)
{
	t_env	*env;

	if (!key)
		return (NULL);
	env = malloc(sizeof(t_env));
	if (!env)
		return (NULL);
	env->value = NULL;
	if (value)
		env->value = ft_strdup(value);
	env->key = ft_strdup(key);
	env->index = -1;
	env->next = NULL;
	return (env);
}
