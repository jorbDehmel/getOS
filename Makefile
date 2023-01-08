demo.out:	demo.cpp getOS.hpp
	clang++ -pedantic -Wall demo.cpp -o demo.out

pclean:
	rm *.out *.o