p=`pbpaste`
git clone $p libft
cd test_unit-test
make f
cd ../test_war_machine
./grademe.sh
cd ../test_tester
make a
