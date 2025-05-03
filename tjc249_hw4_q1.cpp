// Write	two versions of	a	program	that	reads	a	positive	integer	n,	and	prints	the	first	n even	
// numbers.	
// a) In	the	first,	use	a	while loop.	
// b) In	the	second,	use	a	for loop.	
// Each	section	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:

#include <iostream>
using namespace std;

int main() {

    int n;
    int counter = 1;

    cout << "Please enter a positive integer: ";
    cin >> n;

    while (counter != n + 1) {

        // cout << counter << endl;
        
        cout << counter * 2 << endl;

        counter = counter + 1;


    }

    return 0;



}