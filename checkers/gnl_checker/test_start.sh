p=`pbpaste`
git clone $p gnl
cp gnl/* .
cd test_gnlWar
./grademe.sh
cd ../test_gnlTester
make
