/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:15:42 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/28 12:18:48 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
int check_repeat_in_array(int *array, int number, int arraysize)
{
	while(arraysize)
	{
		if(number == array[arraysize])
			return (1);			
		arraysize--;
	}
	return (0);
}


int *sorted_list_array(Number* list)
{
	int size = size_Of_List(list);
	int *numberlist = (int*)malloc(sizeof(int)*size);
	int min;
	int i;
	
	i = 0;
	Number* aux = list;
	while(aux)
	{
		if(check_repeat_in_array(numberlist, aux->data, i) && aux->data<aux->next->data)
			min = aux->data;
		aux = aux->next;
	}
	
}

void fill_chunks(Number* *list, int chunks)
{
	int numbers = (size_Of_List(list)/chunks);
	while(numbers)
	{
		
		
	}
	
	

	
	

	

	
}