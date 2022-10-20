#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;

/*
* malloc ile yeni bir bagli liste tesis edilir. content ile ilk elemanı
* content'e yerleştirilir next yani sonraki eleman NULL olarak ayarlandi.
* Son eleman herzaman NULL dur.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
* bagli listenin son elemanini dondurur.
*/

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}




int	main(void)
{
	t_list	*lst;
	int		a = 5667547;
//	int		b = 1111111;

	lst = ft_lstnew("icerik");
	lst->next = ft_lstnew(&a);
	printf("%s\n", lst->content);
	printf("%i\n", *(int *)(lst->next->content));
	lst->content= "2. icerik";
	lst  = ft_lstlast(lst);
	printf("%s\n", lst->content);
	printf("%i\n", *(int *)(lst->next->content));


	return (0);
}
