// C++ program for josephus problem
#include <bits/stdc++.h>
using namespace std;

// function to find the position of the Most
// Significant Bit
int msbPos(int n)
{
	int pos = 0;
	while (n != 0) {
		pos++;

		// keeps shifting bits to the right
		// until we are left with 0
		n = n >> 1;
	}
	return pos;
}

// function to return at which place Josephus
// should sit to avoid being killed
int josephify(int n)
{
	/* Getting the position of the Most Significant
		Bit(MSB). The leftmost '1'. If the number is
	'41' then its binary is '101001'.
		So msbPos(41) = 6 */
	int position = msbPos(n);

	/* 'j' stores the number with which to XOR the
		number 'n'. Since we need '100000'
	We will do 1<<6-1 to get '100000' */
	int j = 1 << (position - 1);

	/* Toggling the Most Significant Bit. Changing
	the leftmost '1' to '0'.
	101001 ^ 100000 = 001001 (9) */
	n = n ^ j;

	/* Left-shifting once to add an extra '0' to
		the right end of the binary number
		001001 = 010010 (18) */
	n = n << 1;

	/* Toggling the '0' at the end to '1' which
	is essentially the same as putting the
	MSB at the rightmost place. 010010 | 1
	= 010011 (19) */
	n = n | 1;

	return n;
}


int main()
{
	int n;
    cin >> n;
	cout <<josephify(n);
	return 0;
}
