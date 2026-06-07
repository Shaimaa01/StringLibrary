#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
	clsString String1;
	clsString String2("Shaimaa");

	String1.Value = "Ali Mohammed Ahamed Samier";

	cout << "String1 = " << String1.Value << endl;
	cout << "String2 = " << String2.Value << endl;
	
	cout << "Number of words = " << String1.CountWords(String1.Value) << endl;
	cout << "Number of words = " << clsString::CountWords(String1.Value) << endl;
	cout << "Number of words = " << String1.CountWords() << endl;

	//----------------------
	clsString String3("hi how are you?");

	cout << "String 3 = " << String3.Value << endl;
	cout << "String 3 = " << String3.Length() << endl;

	String3.UpperFirstLetterOfEachWord();
	cout << "String 3 = " << String3.Value << endl;

	String3.LowerFirstLetterOfEachWord();
	cout << "String 3 = " << String3.Value << endl;

	String3.UpperAllString();
	cout << "String 3 = " << String3.Value << endl;

	String3.LowerAllString();
	cout << "String 3 = " << String3.Value << endl;

	cout << "After inverting a : " << clsString::InverLetterCase('a') << endl;

	//----------------------
	String3.Value = "AbCdEfg";

	String3.InvertAllLettersCase();
	cout << "String 3 = " << String3.Value << endl;

	String3.InvertAllLettersCase();
	cout << "String 3 = " << String3.Value << endl;

	//----------------------
	cout << "Capital Letters count: " 
		<< clsString::CountLetters("Shaimaa kamel", clsString::CapitalLetters) << endl;

	String3.Value = "Welcome to Jordan";
	cout << String3.Value << endl;
	
	cout << "Capital Letters count:" << String3.CountCapitalLetters() << endl;

	cout << "vowels count :" << String3.CountVowels() << endl;

	cout << "letter E count : " << String3.CountSpecificLetter('E', false) << endl;

	//----------------------

	vector <string> vString = String3.Split(" ");

	cout << "\nTokens = " << vString.size() << endl;

	for (string& s : vString)
	{
		cout << s << endl;
	}

	//----------------------
	//Trims
	String3.Value = "       Shaimaa Kamel         ";
	cout << "\nString = " << String3.Value;

	String3.TrimLeft();
	cout << "\n\nTrim Left = " << String3.Value;

	String3.TrimRight();
	cout << "\n\nTrim Left = " << String3.Value;

	String3.Value = "       Shaimaa Kamel         ";
	cout << "\nString = " << String3.Value;

	String3.Trim();
	cout << "\n\nTrim = " << String3.Value;

	//Joins
	vector <string> vString1 = { "Mohammed" , "Faid" , "Ali" , "Maher" };

	cout << "\n\nJoin String From Vector:\n";
	cout << clsString::JoinString(vString1, " ");

	string arrString[] = { "Mohammed" , "Faid" , "Ali" , "Maher" };

	cout << "\n\nJoin String From array:\n";
	cout << clsString::JoinString(arrString, 4, " ");

	//---------------------

	String3.Value = "Shaimaa Queen";
	cout << "\n\nString = " << String3.Value;

	String3.ReverseWordsInString();
	cout << "\nReverse Words : " << String3.Value << endl;

	//---------------------

	cout << "\nReplace : " << String3.ReplaceWord("Queen", "Kamel");

	String3.Value = "This is: a sample text , with punctuations.";
	cout << "\n\nString = " << String3.Value;

	String3.RemovePunctuations();
	cout << "\nRemove Punctuations : " << String3.Value << endl;

	//---------------------

}


