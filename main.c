#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		fd;
	//int		fd1;
	char	*str = "";
	// int 	i;

	fd = open("test.txt", O_RDONLY);
	//fd1 = open("test1.txt", O_RDONLY);
	// fd2 = open("bible.txt", O_RDONLY);
	while (str)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	}
	close(fd);
}

// int	main(void)
// {
// 	char *str;

// 	str = ft_strdup(strcpy(str, "hello world\nHow are you dudde?\n"));
// 	return (0);
// }



// read bible https://github.com/mxw/grmr/blob/master/src/finaltests/bible.txt
// int	main()
// {
// 	int	fd;
// 	char	*str = "";
// 	fd = open("bible", O_RDONLY);
// 	while (str)
// 	{
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 		free(str);
// 	}
// 	close(fd);
// }