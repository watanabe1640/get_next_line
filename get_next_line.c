/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taikwata <taikwata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:05:15 by taikwata          #+#    #+#             */
/*   Updated: 2024/09/29 17:05:30 by taikwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>




#include <stdio.h>
int main(){
	#ifdef BUFFER_SIZE
	printf("buffer size: %d\n",BUFFER_SIZE);
	#endif
}