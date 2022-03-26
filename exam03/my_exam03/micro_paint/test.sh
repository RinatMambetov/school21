gcc -Wall -Wextra -Werror micro_paint.c -o micro_paint
gcc -Wall -Wextra -Werror our_micro_paint.c -o our_micro_paint
./micro_paint examples/0 > myres
./our_micro_paint examples/0 > res
diff myres res
./micro_paint examples/1 > myres
./our_micro_paint examples/1 > res
diff myres res
./micro_paint examples/2 > myres
./our_micro_paint examples/2 > res
diff myres res
./micro_paint examples/3 > myres
./our_micro_paint examples/3 > res
diff myres res
./micro_paint examples/4 > myres
./our_micro_paint examples/4 > res
diff myres res
./micro_paint examples/5 > myres
./our_micro_paint examples/5 > res
diff myres res
./micro_paint examples/6 > myres
./our_micro_paint examples/6 > res
diff myres res
./micro_paint examples/7 > myres
./our_micro_paint examples/7 > res
diff myres res
./micro_paint examples/8 > myres
./our_micro_paint examples/8 > res
diff myres res
./micro_paint examples/9 > myres
./our_micro_paint examples/9 > res
diff myres res
