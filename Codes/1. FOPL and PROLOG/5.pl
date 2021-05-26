fib(0,0):- !.
fib(1,1):- !.

fib(N,S):- NM is N -1 ,
		   NMM is N-2,
		   fib(NM,SM),
		   fib(NMM,SMM),
		   S is SM + SMM. 	