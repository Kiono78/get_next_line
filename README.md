# GNL - Reading a line from a fd is way too tedious
### 42 Lyon 2021

## Subject

Read a fd one line at a time (until an EOL or EOF) whatever the size of the read buffer and the size of the fd.
The program keeps reading until it has a full line or has reached the EOF. After returning the results, it preserves what follows the last EOL in case the next line is asked before the end of the program.

For detailed information, please refer to the [subject](./gnl.en.subject.pdf).

This progra; is in line with the guidelines of [42 Norm version 3](https://github.com/Kiono78/libft/blob/master/en.norm.pdf).

## Compilation

Manually compile the standard version of gnl or the bonus one.

### Standard gnl - only one fd read at a time

* ['get_next_line.c'](get_next_line.c)
* ['get_next_line_utils.c](get_next_line_utils.c)

### Bonus gnl - read several fds in parallel

* ['get_next_line_bonus.c'](get_next_line_bonus.c)
* ['get_next_line_utils_bonus.c](get_next_line_utils_bonus.c)

By default, a read buffer size of 7 is defined in the .h files. But users can freely modified this value during the compilation.

Without overwriting buffer size:

```shell
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
```

With modifiying the read size:

```shell
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 get_next_line.c get_next_line_utils.c main.c
```

Same logic applies to bonus files

'''shell
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 get_next_line_bonus.c get_next_line_utils_bonus.c main.c
'''

## Ensure performance with large buffer size and large files

To guarantee performances, the program checks first that there is not already a line in the static variable. That way the size of the static does not increase exponentially and the buffer is not fille with unused data.