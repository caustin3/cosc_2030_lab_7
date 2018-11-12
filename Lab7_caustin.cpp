//chase austin date 12/Nov/2018 
//COSC_2030 lab_7
#include "Lab7_caustin.h"
#include "winTimer.h"
#include "VectorDriver.h"
using std::cin;
using std::sort;
int main()
{
	
	int sort_what = 0;
	unsigned long int size = 0;
	bool done = false;
	while (!done)
	{

		cout << "first input which sorting you wnat then the size(intger size = input) of the vector you wnat." << endl;
		cout << "1 = sort\n2 = Quicksort\n3 = Bubble sort\n4 = insertion\n5 = selection \n6 = mergesort\n10 to exit" << endl;
		cin >> sort_what;
		cin >> size;
		Timer time;
		vector<short> sort_this(0);
		
			add_numbers(sort_this,size);
		
		if (sort_what == 1)
		{
			cout << "sort" << endl;
			time.start();
			sort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "sort, sorted in " << time() << " sec" << endl << endl;
		}
		else if (sort_what == 2)
		{
			cout << "Quicksort" << endl;
			time.start();
			quicksort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "quicksort, sorted in " << time() << " sec" << endl << endl;
		}
		else if (sort_what == 3)
		{
			cout << "Bubble sort" << endl;
			time.start();
			bubble_sort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "Bubble sort, sorted in " << time() << " sec" << endl << endl;
		}
		else if (sort_what == 4)
		{
			cout << "insertion" << endl;
			time.start();
			insertion_sort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "insertion, sorted in " << time() << " sec" << endl << endl;
		}
		else if (sort_what == 5)
		{
			cout << "selection" << endl;
			time.start();
			selection_sort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "selection, sorted in " << time() << " sec" << endl << endl;
		}
		else if (sort_what == 6)
		{
			cout << "mergesort" << endl;
			time.start();
			mergesort(sort_this.begin(), sort_this.end());
			time.stop();
			cout << "mergesort, sorted in " << time() << " sec" << endl << endl;
		}
		if (sort_what = 10)
		{
			bool done = true;
		}
	}
	system("pause");
	return 0;
}