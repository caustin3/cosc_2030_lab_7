/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */


 //Chase Austin
 //date8/oct/2018
 //COSC 2030
 //lab_4
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include <algorithm>   
using std::sort;
using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data)
{
  for (ulong i=0; i<data.size(); i++) 
  {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) 
{
  if (data.empty())
  {
    cout << "<empty>";
  } else 
  {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) 
	{
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) 
{
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) 
  {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data, unsigned long int size)
{
	srand(time(NULL));	
	for (unsigned long int i = 0; i < size; i++)
	{					  
		short rand_number = rand() % 500 + 1;
		data.push_back(rand_number);
	}
}
// TODO: implement print_even
void print_even(const vector<short> &data)
{
	cout << endl;
	if (data.empty())
	{
		cout << "<empty>";
	}
	else
	{
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++)
		{
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}
//void print_even(const vector<short> &data)
//{
//	cout << endl;
//	if (data.empty())
//	{
//		cout << "<empty>";
//	}
//	else
//	{
//		cout << "<" ;
//		ulong count =0;
//		for (ulong i = 0; i<data.size(); i++)
//		{
//			if ((data.at(i) % 2) == 0 && count == 0 && (data.at(i) !=0))
//			{	
//				cout << data.at(i);
//				count++;
//			}
//			else if ((data.at(i) % 2) == 0 && (data.at(i) !=0))
//			{
//				cout << ", " << data.at(i);
//			}
//			
//		}
//		cout << ">";
//	}
//}

// TODO: implement is_present
bool is_present(const vector<short> &data,short is_in)
{
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end())
	{
		if (*iter == is_in)
		{
			return true;
		}		
		iter++;
	}
	return false;
}
// TODO: implement std::sort function
