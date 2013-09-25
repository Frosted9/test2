

/********************************************************
 *
 *  Project :  Simple Functions
 *  File    :  MainCopyClass.cpp
 *  Name    :  Kenyon Brown
 *  Date    :  09/17/2013
 *
 *  Description : A few simple methods that deal with char arrays and copying their contents.
 *
 *    1) This code utilizes three char arrays and copies the contents into eachother. The functions
		used are two different versions of copy, one requires pointers while hte other the array itself.
 *
 *    2) Char arrays
 *
 *    3) A simple char length measuring method.
 *
 *
 *
 ********************************************************/

#include <iostream>
#include <string>
using namespace std;

void copy(char theString[], char dest[]);
void copy2(char *theString, char *dest);
int slength(char aString[]);
int pointerLength(char *aString);

int main( )
{
	string myName="Kenyon Brown";
	string myCourse="CS 2420-001";
	string myProject="SimpleFunctions";

	cout << "\nName: " << myName;
	cout << "\ncourse: " << myCourse;
	cout << "\nproject: " << myProject;
	cout << endl;

	char hello[] = {'h','e','l','l','o','\0'};
	char seeya[] = {'s','e','e','y','a','\0'};
	char wasup[] = {'W','a','s','u','p','\0'};

	cout<< hello <<endl;
	cout<< seeya <<endl;

	copy(hello,seeya);



	cout<<endl<< "Seeya is now: " <<seeya<<endl;

	cout<<"Now lets change hello into.."<<endl;

	copy2(&wasup[0],&hello[0]);

	cout<<hello<<endl;

	system("PAUSE");
	return 0;


}
/****************************************************
 * Method     : slength
 *
 * Purpose    : The slength method counts the amount of
				variables in an array, constantly looking for
				'\0'.
 *
 * Parameters : array              - an array of chars
 *
 * Returns    : This method returns an int.
 *
 ****************************************************/
	int slength(char aString[])
	{
		int count =0;
		char theChar;

		while(aString[count]!= '\0'&&count<=20)
		{
			count++;
		}

		return count;
	}

	int pointerLength(char *aString)
	{
		int count =0;
		char theChar;

		while(*(aString+count)!='\0'&&count<=20)
		{
			count++;
		}

		return count;
	}


void copy(char theString[], char dest[])

	{
	int lengthString = slength(theString);
	int lengthDest = slength(dest);

		if(lengthString==lengthDest)
		{
		int temp = 0;

			for(int i=0; i<=lengthString-1; i++)
			{
			temp = theString[i];
			theString[i] = dest[i];
			dest[i] = temp;
			}

		}

	}

void copy2(char *theString, char *dest)

	{
	int lengthString = pointerLength(theString);
	int lengthDest = pointerLength(dest);

		if(lengthString==lengthDest)
		{
		int temp = 0;

			for(int i=0; i<=lengthString-1; i++)
			{
			temp = *(theString+i);
			*(theString+i) = *(dest+i);
			*(dest+i) = temp;
			}

		}

	}
