//
// Created by Grass Emerald on 08/02/2020.
//

#include "lemin.h"

//void		del_list_hash(t_hash_table **begin_list)
//{
//	t_hash_table	*link;
//	t_hash_table	*f_link;
//
//	link = *begin_list;
//	while (link != NULL)
//	{
//		f_link = link->next;
//		free(link);
//		link = f_link;
//	}
//}
//
//void    make_free_hash(t_lemin *lemin)
//{
//	int i;
//
//	i = -1;
//	while (++i < 4096)
//	{
//		if (lemin->table_hashes[i])
//			del_list_hash(&lemin->table_hashes[i]);
//	}
//}