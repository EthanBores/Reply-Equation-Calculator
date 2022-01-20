#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include "replyCalculator.h"

using namespace std;

double TsubL(double L)
{
	return (1 / (L + 0.1)) + 4;
}

//	Desc:	Function to return (double) calculation of T sub tr sub n function.
// 
//	Pre:	Double trn is the time taken for reply to your last message in minutes.
// 
//	Post:	Double is returned after calcuation.

double Tsubtrn(double trn, double trn1)
{
	return (0.6666666666 * trn) + (0.3333333333 * (trn1));
}

//	Desc:	Function to return (double) calculation of T sub C function.
// 
//	Pre:	Double Cg is the good content contained in replies.
//			Double Cb is the bad content contained in replies.
//			Both Variables are bounded by 1 <= Cx <= 10;
// 
//	Post:	Double is returned after calcuation.

double TsubC(double Cg, double Cb)
{
	return (10.0 / Cg) + (70 * Cb);
}

//	Desc:	Master program to handle Foid Reply Equation calculations.
// 
//	Pre:	None (void)
// 
//	Post:	After prompts are given, calculations are printed to the screen.

double Tcalc(double Tc, double Tl, double Trn)
{
	return (0.5 * Tc) + (0.3333333333 * Tl) + (0.15151515151515151515 * Trn);
}

void replyCalculator()
{
	cout << "*** REPLY EQUATION CALCUATOR STARTED ***\n\n\n";


	//	Variables to be entered by user.
	double tsubtrn = 0.0, tsubtrn1 = 0.0, Cg = 0.0, l = 0.0;

	//	Contants to be calculated.
	double T = 0.0, Tc = 0.0, Tl = 0.0, Trn = 0.0;

	bool valid = false;

	//	T sub L calculation.
	cout << "\tWord Count:\t\t";
	cin >> l;
	Tl = TsubL(l);


	//	T sub tr sub n calculation.
	cout << "\n\tTime in minutes:\t";
	cin >> tsubtrn;
	
	cout << "\n\tTime of previous reply in minutes:\t";
	cin >> tsubtrn1;

	Trn = Tsubtrn(tsubtrn, tsubtrn1);


	//	T sub C calculation.
	do
	{
		cout << "\n\tEnter value between 1 and 10\n";
		cout << "\tGood Content:\t\t";
		cin >> Cg;
	} while (Cg < 1 || Cg > 10);
	Tc = TsubC(Cg, 10 - Cg);

	//	Final T calculation.
	T = Tcalc(Tc, Tl, Trn);


	cout << "\n\n\tREPLY TIME:\t\t" << T << " minutes\n\n\n";

	cout << "*** REPLY EQUATION CALCULATION COMPLETE ***" << endl;

	cin;
}

//////////////////////////	BREAK //////////////////////////

void printMenu()
{
	cout << "*** PLEASE SELECT A OPTION BELOW ***\n\n";

	cout << " 1. Reply Calculator\n";
	cout << " 2. EXIT PROGRAM\n\n";

	cout << "Selection: ";
}
