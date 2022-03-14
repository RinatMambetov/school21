gcc -Wall -Wextra -Werror mandatory/*.c mlx/libmlx.a libft/libft.a -framework OpenGL -framework AppKit -o mandatory/fdf

# leaks
# leaks --atExit -- mandatory/fdf maps/basictest.fdf
# leaks --atExit -- mandatory/fdf maps/42.fdf
# leaks --atExit -- mandatory/fdf maps/100-6.fdf
# leaks --atExit -- mandatory/fdf maps/elem-fract.fdf

# light maps
# mandatory/fdf maps/basictest.fdf
# mandatory/fdf maps/10-2.fdf
# mandatory/fdf maps/plat.fdf
# mandatory/fdf maps/elem.fdf
# mandatory/fdf maps/10-70.fdf
# mandatory/fdf maps/pnp_flat.fdf
# mandatory/fdf maps/elem-col.fdf
# mandatory/fdf maps/pentenegpos.fdf
mandatory/fdf maps/42.fdf
# mandatory/fdf maps/elem2.fdf
# mandatory/fdf maps/20-60.fdf
# mandatory/fdf maps/pyramide.fdf
# mandatory/fdf maps/pyra.fdf
# mandatory/fdf maps/pylone.fdf
# mandatory/fdf maps/50-4.fdf

# heavy maps
# mandatory/fdf maps/100-6.fdf
# mandatory/fdf maps/mars.fdf
# mandatory/fdf maps/t2.fdf
# mandatory/fdf maps/t1.fdf
# mandatory/fdf maps/julia.fdf
# mandatory/fdf maps/elem-fract.fdf

# origfdf
# ./origfdf maps/100-6.fdf
# ./origfdf maps/elem-fract.fdf
