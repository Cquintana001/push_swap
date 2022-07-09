/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:13:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 08:51:25 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void both_reverse_move(Number* min,Number* *list_1, Number* *list_2)
{
	while(min->n_moves_A && min->n_moves_B )
					{
						reverse_rotate_both(list_1, list_2);
						min->n_moves_A--;
						min->n_moves_B--;	 
					}
}

void both_rotate_move(Number* min,Number* *list_1, Number* *list_2)
{
	while(min->n_moves_A && min->n_moves_B )
					{
						rotate_both(list_1, list_2);
						min->n_moves_A--;
						min->n_moves_B--;	 
					}
}
void simple_rotate_a(Number *min, Number* *list)
{
	while(min->n_moves_A )
				{
					rotate_a(list);					 
					min->n_moves_A--;				  
				}
}
void simple_reverse_rotate_a(Number *min, Number* *list)
{
	while(min->n_moves_A )
				{
					reverse_rotate_a(list);					 
					min->n_moves_A--;				  
				}
}
void simple_rotate_b(Number *min, Number* *list)
{
	while(min->n_moves_A )
				{
					rotate_b(list);					 
					min->n_moves_A--;				  
				}
}
void simple_reverse_rotate_b(Number *min, Number* *list)
{
	while(min->n_moves_A )
				{
					reverse_rotate_b(list);					 
					min->n_moves_A--;				  
				}
}
void do_moves(Number* min,Number* *list_1, Number* *list_2)
{
	 
	if(min->movetypeA == ROTATE_A && min->movetypeB == ROTATE_B)
			both_rotate_move(min, list_1, list_2);
	if(min->movetypeA == 	RROTATE_A && min->movetypeB == RROTATE_B)
			both_reverse_move(min, list_1, list_2);
	if(min->movetypeA == ROTATE_A) 
			simple_rotate_a(min,list_1);
	if(min->movetypeA == RROTATE_A)
			simple_reverse_rotate_a(min,list_1);
	if(min->movetypeB == ROTATE_B) 
			simple_rotate_b(min,list_2);
	if(min->movetypeB == RROTATE_B)
			simple_reverse_rotate_b(min, list_2);	
}