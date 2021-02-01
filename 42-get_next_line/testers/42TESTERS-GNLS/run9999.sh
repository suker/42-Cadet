#!/bin/bash
gcc -Wall -Werror -Wextra srcs/gnl_tester.c ../../get_next_line/get_next_line.c ../../get_next_line/get_next_line_utils.c -I ../../get_next_line/ -D BUFFER_SIZE=9999 && ./a.out
