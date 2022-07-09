/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:22:28 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:54:52 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

typedef enum e_movetype
{
	NOMOVE = 0,
	PUSH_A,
	PUSH_B,
	ROTATE_A,
	ROTATE_B,
	RROTATE_A,
	RROTATE_B,
	SWAP_A,
	SWAP_B
}	t_movetype;

typedef struct node
{
	int			data;

	int			chunk;

	int			n_moves_a;

	int			n_moves_b;

	int			direction;

	t_movetype	movetype_a;
	t_movetype	movetype_b;
	struct node	*next;

}				t_number;

void		push(t_number **list_1, t_number **list_2);
void		push_a(t_number **list_1, t_number **list_2);
void		push_b(t_number **list_1, t_number **list_2);
void		swap(t_number **list);
void		swap_a(t_number **list);
void		swap_b(t_number **list);
void		rotate(t_number **list);
void		rotate_a(t_number **list);
void		rotate_b(t_number **list);
void		rotate_both(t_number **list_1, t_number **list_2);
void		reverse_rotate(t_number **list);
void		reverse_rotate_a(t_number **list);
void		reverse_rotate_b(t_number **list);
void		reverse_rotate_both(t_number **list_1, t_number **list_2);
int			size_of_list(t_number *list);
t_number	*createnode(void);
int			ft_atoi(char *array);
t_number	*addnumber(t_number *lista, int nbr);
void		fill_nbrs(char *str, t_number **lista);
void		print_list(t_number *list);
int			find_head_position_in_list(t_number *list);
int			find_position_in_list(t_number *node, t_number *list);
void		fill_chunks(t_number **list, int chunks);
int			movements(t_number *node, t_number *list);
t_number	*find_min_in_chunk(t_number *list, int chunknbr);
void		remap_positions(t_number *list);
t_number	*map_moves_in_b(t_number *list_1, t_number *list_2);
int			check_if_list_is_sorted(t_number *lista_a);
void		sort_three_numbers(t_number **list_a);
void		sort_five_numbers(t_number **list_a, t_number **list_b);
void		final_set(t_number **list_1, t_number **list_2);
void		check_min_moves(t_number *min, \
							t_number **list_1, t_number **list_2);
t_number	*get_list(char **array, t_number **list);
void		do_moves(t_number *min, t_number **list_1, t_number **list_2);
void		check_numbers(int numbers, t_number **list_1, t_number **list_2);
#endif