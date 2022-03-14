p=`pbpaste`
git clone $p printf 
cp -r printf/* .
cd test_ft_printf_tester
sh test m
cd ../test_printfTester
make m
