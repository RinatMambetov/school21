gcc -Wall -Wextra -Werror mini_paint.c -o mini_paint
gcc -Wall -Wextra -Werror our_mini_paint.c -o our_mini_paint
./mini_paint examples/0 > myres
./our_mini_paint examples/0 > res
diff myres res
./mini_paint examples/1 > myres
./our_mini_paint examples/1 > res
diff myres res
./mini_paint examples/2 > myres
./our_mini_paint examples/2 > res
diff myres res
./mini_paint examples/3 > myres
./our_mini_paint examples/3 > res
diff myres res
./mini_paint examples/4 > myres
./our_mini_paint examples/4 > res
diff myres res
./mini_paint examples/5 > myres
./our_mini_paint examples/5 > res
diff myres res
