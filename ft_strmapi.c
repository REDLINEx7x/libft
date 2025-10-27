/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:46:18 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/27 09:07:10 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t len;
    unsigned int i;
    char *str;
    
    if(!s || !f)
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    str = (char *) malloc(len + 1);
    if(!str)
        return (NULL);
    while(i < len)
    {
    	str[i] = (*f)(i, s[i]);
        i++;
    }
	str[i] = '\0';
	return(str);
}

char to_uppercase(unsigned int i, char c)
{
    (void)i;
    return (ft_toupper(c));
}

int main(void)
{
    char *result;
    result = ft_strmapi("hello world", to_uppercase);
    printf("%s\n", result);
    free(result);
}








































// return_type (*pointer_name)(parameter_types);

// char *ft_test(char *s)
// {
//     return s;
// }


// run function takes a string and a function pointer
// char *run(char *s, char *(*ptr_func)(char *))
// {
//     char *result = ft_strjoin(s, ptr_func(s));
//     return result;
// }

// int main()
// {
//     // Declare function pointer
//     char *(*ptr_func)(char *);
//     ptr_func = ft_test;

//     char *res = run("hello", ptr_func);
//     printf("%s\n", res);

//     return 0;
// }

