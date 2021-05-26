gcd(X,X,X).

	gcd(X,Y,D):- X>Y,
	Y1 is X - Y,
	gcd(Y,Y1,D).

	gcd(X,Y,D):- X<Y,
	gcd(Y,X,D).

lcm(X,Y,Z):- gcd(X,Y,G), Z is (X * Y) // G.


