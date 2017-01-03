/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:41:43 by wfung             #+#    #+#             */
/*   Updated: 2016/12/14 20:15:46 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list;
{
	struct		*node;		//can take any type; so it references itself after
	int			data;		// data type
}				t_list;

t_list		random_ft(some intput)
{
	t_list	*head; // pointer called head to start the node for linkedlists
						//typecasts so we can use the node
	head->data;     // pointer head points to variable? type? that's inside node?
	data->node;		// to traverse node(s) i think data->next data->next	
					// until NULL; where data in a certain node is made NULL?
}

/* node* (head ptr) -> data, which also has node*; */


/* need 1 function to insert into node
 * need another to traverse nodes */

/* example for creating empty list */

t_list		empty_list(int a)
{
	node	*x;
	x = NULL;
}


/* example for creating a node */

t_list		create_node(int a)
{
	node *temp;						// buffer for node because malloc returns void ptr

	temp = (node*)malloc(sizeof(node));
									// need to dereference to fill in the data in node */
									//
										pointer in front of variable dereferences it
											i.e. *ptr becomes ptr, now can use value @ address
				dereference.whateveryouwant2access = value;
							might be same as
				dereference->whateveryouwant2access = value;
							THEN
				dereference.node (or link like in video) = NULL;
							might be same as 
				dereference->node (or linke like in video) = NULL;

				A = temp maybe;

				(*temp).data = 		[[SAME AS]]		temp->data =
				(*temp).link = 		[[SAME AS]]		temp->link =


				traversing linkedlist from video example
					
					node *A;
					A = NULL;
					node* temp;
					temp = malloc whatever;
					temp->data = 2;
					temp->link = NULL;
					A = temp;
					temp = malloc whatever;
					temp->data = 4;
					temp->link = NULL;


					node *temp1;
					temp1 = A;
					while (temp1->link != NULL)
					{
						temp1 = temp1->link;
					}
					temp1->link = temp;


					{{{	CANNOT MODIFY HEAD NODE OR LOSE ADDRESS OF HEAD NODE.}}}
						only temporary variables are modified to traverse list	
