factorial(1,1):- !.

factorial(N,S):- 	N>1,
					NM is N-1,
				 factorial(NM,SM), S is N * SM.	