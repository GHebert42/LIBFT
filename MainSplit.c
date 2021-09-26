/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainSplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 08:58:24 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/24 09:43:15 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char s1[30];
//	char s2[30];
//	char *newb;
	char *answer;
	char sep;
	int i;
	char **xab;

	strcpy(s1,"Allo,champion,Bien,Bravo");
    printf("RESULTAT: %s\n", s1);
     //   test ft_split
		sep =  ',';
        xab = ft_split(answer, sep);
        i = 0;
        while (i < 4)
        {
            printf("test split , , , _%s_", xab[i]);
            i ++;
        }
        while (xab[i])
        {
            free(xab[i]);
            i++;
        }
        free(xab);
}
