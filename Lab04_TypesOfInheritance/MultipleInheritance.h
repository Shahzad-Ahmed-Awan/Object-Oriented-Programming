#include <iostream>
using namespace std;

class Printer {
	public:
		void print_document() {
			cout << "Printing document(from printer class)..." << endl;
		}
};

class Scanner {
	public:
		void scan_document() {
			cout << "Scanning document(from scanner class)..." << endl;
		}
};

class Photocopier : public Printer, public Scanner {
	public:
		void photocopy() {
			cout << "Photocopying document..." << endl;
			scan_document();   // Call from Scanner
			print_document();  // Call from Printer
		}
};


